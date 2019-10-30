all: sintatico
sintatico: main.o lexico.o sintatico.o arvoregen.o
	gcc -o sintatico obj/main.o obj/lexico.o obj/sintatico.o obj/arvoregen.o
main.o: main.c
	gcc -o obj/main.o -c main.c
lexico.o: ../AnalisadorLexicoArrumado/lexico.c ../AnalisadorLexicoArrumado/lexico.h
	gcc -o obj/lexico.o -c ../AnalisadorLexicoArrumado/lexico.c
sintatico.o: sintatico.c sintatico.h
	gcc -o obj/sintatico.o -c sintatico.c
arvoregen.o: arvoregen.c arvoregen.h
	gcc -o obj/arvoregen.o -c arvoregen.c

clean:
	rm obj/*.o
