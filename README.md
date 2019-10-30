# Tp2-Compiladores
Analisador Lexico(arrumado) e Sintático

####            Informacoes             ####

Autor: Alexander Cristian Mendes Roncalli de Lima
Data:25 de Outubro de 2019

Este trabalho tem como objetivo criar um analisador Sintatico baseado em "C".
Para saida da analise Sintatica foi adotada uma abordagem, não recomendada de gerar a arvore de derivação sintatica. Apesar do esforço de implementação da arvore, o codigo não funciona corretamente. Contudo o Lexico foi arrumado, sem o  uso do flex.

####            Compilação              ####

$ make clean

$ make


####             Execultar              ####

$ ./lexico <nome_arguivo.txt>

$ ./sintatico <nome_arquivo.txt>(não funciona)
