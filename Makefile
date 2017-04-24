all:bin/deposits

bin/deposits: build/src/main.o build/src/deposit.o
	gcc -Wall -Werror -o bin/deposits build/src/main.o build/src/deposit.o

build/src/main.o: src/main.c
	gcc -Wall -Werror -o build/src/main.o -c src/main.c

build/src/deposit.o: src/main.c
	gcc -Wall -Werror -o build/src/deposit.o -c src/deposit.c


all: bin/deposits-test

bin/deposits-test: build/test/main.o build/test/valid.o
	gcc -I thirdparty src -Wall -Werror -o bin/deposits-test build/test/main.o build/test/valid.o

build/test/main.o: test/main.c
	gcc -I thirdparty src -Wall -Werror -o build/test/main.o -c test/main.c

build/test/valid.o: test/validation_test.c
	gcc -I thirdparty src -Wall -Werror -o build/test/valid.o -c test/validation_test.c


clean:
	rm -f build/src/*.o
	rm -f build/test/*.o