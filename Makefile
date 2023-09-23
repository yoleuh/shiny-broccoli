gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c
all: lab3.zip lab3

lab3.zip: Makefile lab3.c lab3Readme lab3.h print_quotes.c print_favorites.c save_data.c out.c close.c free_dmem.c get_favorites.c get_quotes.c
	zip lab3.zip Makefile lab3.c lab3Readme lab3.h print_quotes.c print_favorites.c save_data.c out.c close.c free_dmem.c get_favorites.c get_quotes.c

lab3: lab3.o print_quotes.o print_favorites.o save_data.o out.o close.o free_dmem.o get_favorites.o get_quotes.o
	gcc lab3.o print_quotes.o print_favorites.o save_data.o out.o close.o free_dmem.o get_favorites.o get_quotes.o -o lab3

lab3.o: lab3.c
	gcc $(gcc_opt) lab3.c

print_quotes.o: print_quotes.c lab3.h
	gcc $(gcc_opt) print_quotes.c

print_favorites.o: print_favorites.c lab3.h
	gcc $(gcc_opt) print_favorites.c

save_data.o: save_data.c lab3.h
	gcc $(gcc_opt) save_data.c

out.o: out.c lab3.h
	gcc $(gcc_opt) out.c

close.o: close.c lab3.h
	gcc $(gcc_opt) close.c

get_quotes.o: get_quotes.c lab3.h
	gcc $(gcc_opt) get_quotes.c

get_favorites.o: get_favorites.c lab3.h
	gcc $(gcc_opt) get_favorites.c

free_dmem.o: free_dmem.c lab3.h
	gcc $(gcc_opt) free_dmem.c

clean:
	rm -rf *.o lab3 lab3.zip
