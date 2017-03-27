all:bin/deposits

bin/deposits: build/main.o build/deposit.o
	gcc -Wall -Werror -o bin/deposits build/main.o build/deposit.o

build/main.o: src/main.c
	gcc -Wall -Werror -o build/main.o -c src/main.c

build/deposit.o: src/main.c
	gcc -Wall -Werror -o build/deposit.o -c src/deposit.c

clean:
	rm -rf build/*.o deposits