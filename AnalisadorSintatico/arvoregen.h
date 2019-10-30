#ifndef ARVOREGEN_H_INCLUDED
#define ARVOREGEN_H_INCLUDED

struct arvgen {
char *info;
char *pai_nome;
struct arvgen *prim;
struct arvgen *prox;
};
typedef struct arvgen ArvoreGen;
ArvoreGen* criar (char *c);
void inserir (ArvoreGen* pai, ArvoreGen* filho);

#endif // ARVOREGEN_H_INCLUDED
