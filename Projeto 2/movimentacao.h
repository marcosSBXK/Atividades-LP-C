/* movimentacao.h
 * Protótipos das funções para receber e listar as movimentações de
 * uma determinada conta bancária dada pela estrutura 'conta' e suas
 * suas movimentações pela estrutura 'movimentacao', utilizando também
 * a estrutura 'data' para tratamentos de datas no cadastro e listagem.
 * FATEC Carapicuíba - ADS Manhã
 * Marcos Vinícius da Silva
 * Matheus Andrade Farkas
 * Yohan Sudario
 * 29/06/2020-06/07/2020
 */

#ifndef _MOVIMENTACAO_H
#define _MOVIMENTACAO_H 

#include <stdbool.h> 

/* Nome do arquivo aonde as movimentações são cadastradas */
#define ARQ_MOVIMENTACAO "movimentacao.dat"

/* Estrutura que representa uma data */
typedef struct {
    int dia;
    int mes;
    int ano;
} data;

/* Estrutura que representa uma movimentação */
typedef struct {
    int num_conta; // número da conta da movimentação
    data dt_movimentacao;
    int tipo;  // 1–saque ou 2-depósito
    float valor;
} movimentacao;

/* função que cadastra uma nova movimentação no arquivo */
void cadastrar_movimentacao(void);

/* função que lista todas as movimentações feitas em uma
   conta bancária em um período */
void listar_movimentacoes(void);

/* função que devolve um valor negativo se a primeira
 * data for menor que a segunda, 0 se as duas datas
 * são iguais, ou um valor positivo se a primeira data
 * for maior que a segunda */
int compara_datas(data, data);

#endif