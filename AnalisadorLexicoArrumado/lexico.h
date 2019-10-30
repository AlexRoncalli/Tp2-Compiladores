#ifndef LEXICO_H
#define LEXICO_H

enum categoria{
	tk_rel_op = 1,
    tk_id,
    tk_const_int,
    tk_const_float,
    tk_const_lit,
    tk_kw_int,
    tk_kw_float,
    tk_kw_char,
    tk_kw_if,
    tk_kw_else,
    tk_kw_for,
    tk_kw_while,
    tk_kw_break,
    tk_kw_not,
    tk_kw_and,
    tk_kw_or,
    tk_kw_main,
    tk_kw_func,
    tk_kw_return,
    tk_kw_strcmp,
    tk_kw_strcop,
    tk_kw_input,
    tk_kw_output,
    tk_op_add,
    tk_op_sub,
    tk_op_mul,
    tk_op_div,
    tk_op_atrib,
    tk_open_par,
    tk_close_par,
    tk_open_bra,
    tk_close_bra,
    tk_close_key,
    tk_open_key,
    tk_semicolon,
    tk_comma,
    tk_lib,
    erro
};

typedef enum categoria Categoria;

struct token
{
	char *valor;
	Categoria categoria;
	int linha;
	int coluna;
};

typedef struct token Token;

Categoria achar_categoria(char *buffer);

void imprimir_token(Token *token);

char* pegar_valor_token(Token *token);

Token* delimitador();

Token* operador_aritmetico();

Token* operador_relacional();

Token* palavra();

Token* constante_literal();

Token* constante_numerica();

Token* indefinidos();;

void iniciar(int argc, char *argv[]);

void encerrar();

Token* proximo_token();

void eliminar_comentario();


#endif