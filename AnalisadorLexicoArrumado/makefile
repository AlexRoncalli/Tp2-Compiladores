all: lexico
lexico: main.o lexico.o 
	gcc -o lexico obj/main.o obj/lexico.o 
main.o: main.c
	gcc -o obj/main.o -c main.c
lexico.o: lexico.c lexico.h
	gcc -o obj/lexico.o -c lexico.c
clean:
	rm obj/*.o

