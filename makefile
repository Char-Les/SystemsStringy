all: string

string: string_functions.c
	gcc string_functions.c -o string.exe

clean:
	rm *.o
	rm *~

run: string
	./string.exe
