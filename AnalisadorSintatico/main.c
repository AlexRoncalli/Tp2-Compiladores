#include "../AnalisadorLexicoArrumado/lexico.h"
#include "sintatico.h"
#include<stdlib.h>


int main(int argc, char *argv[]){

    iniciar(argc, argv);
    analisador_sintatico();//Odeio ponteiros!
    encerrar();
    return 0;
}
