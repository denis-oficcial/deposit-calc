all:bin/deposits

bin/deposits: build/src/main.o build/src/deposit.o
	gcc -Wall -Werror -o bin/deposits build/src/main.o build/src/deposit.o

build/src/main.o: src/main.c
	gcc -Wall -Werror -o build/src/main.o -c src/main.c

build/src/deposit.o: src/main.c
	gcc -Wall -Werror -o build/src/deposit.o -c src/deposit.c


valid_test: bin/valid-test

bin/valid-test: build/test/main.o build/test/valid.o
	gcc -I thirdparty  -Wall -Werror -o bin/valid-test build/test/main.o build/test/valid.o

build/test/main.o: test/main.c
	gcc -I thirdparty -Wall -Werror -o build/test/main.o -c test/main.c

build/test/valid.o: test/validation_test.c
	gcc -I thirdparty -Wall -Werror -o build/test/valid.o -c test/validation_test.c


deposit_test: bin/deposit-test

bin/deposit-test: build/test/main.o build/test/deposit_test.o
	gcc -I thirdparty  -Wall -Werror -o bin/deposit-test build/test/main.o build/test/deposit_test.o

build/test/main.o: test/main.c
	gcc -I thirdparty -Wall -Werror -o build/test/main.o -c test/main.c

build/test/deposit_test.o: test/deposit_test.c
	gcc -I thirdparty -I src -Wall -Werror -o build/test/deposit_test.o -c test/deposit_test.c


clean:
	rm -f build/src/*.o
	rm -f build/test/*.o
	rm -f bin/*