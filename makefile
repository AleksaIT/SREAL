all: parsiranje
parsiranje: parsiranje.o helper.o
	gcc -o parsiranje parsiranje.o helper.o
parsiranje.o: parsiranje.c helper.h
	gcc -c parsiranje.c
helper.o: helper.c helper.h
	gcc -c helper.c
.PHONY: clean
clean:
	rm -f parsiranje *.o 