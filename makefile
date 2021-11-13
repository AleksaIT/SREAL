all: parsiranje
parsiranje: parsiranje.o abc_sort.o all_caps.o no_numbers.o palindrom_check.o
	gcc -o parsiranje parsiranje.o abc_sort.o all_caps.o no_numbers.o palindrom_check.o
parsiranje.o: parsiranje.c helper.h
	gcc -c parsiranje.c
abc_sort.o: abc_sort.c helper.h
	gcc -c abc_sort.c
all_caps.o: all_caps.c helper.h
	gcc -c all_caps.c
no_numbers.o: no_numbers.c helper.h
	gcc -c no_numbers.c
palindrom_check.o: palindrom_check.c helper.h
	gcc -c palindrom_check.c
.PHONY: clean
clean:
	rm -f parsiranje *.o 
