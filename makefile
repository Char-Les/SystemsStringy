all: string

string: string_functions.c
	gcc string_functions.c -o string.e

clean:
	rm *.o
	rm *~

run: string
	./string
