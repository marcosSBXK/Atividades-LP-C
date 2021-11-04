/* conta.h
 * Protótipos das funções para receber e listar informações de
 * uma determinada conta bancária dada pela estrutura 'conta'.
 * FATEC Carapicuíba - ADS Manhã
 * Marcos Vinícius da Silva
 * Matheus Andrade Farkas
 * Yohan Sudario
 * 29/06/2020-06/07/2020
 */

#ifndef _CONTA_H
#define _CONTA_H

/* Nome do arquivo aonde as contas bancárias são cadastradas */
#define ARQ_CONTA "conta.dat"

/* Estrutura que representa uma conta bancária */
typedef struct {
    int num_conta;
    char nome[51];
    float saldo;
} conta;

/* Função que cadastra uma nova conta bancária no arquivo */
void cadastrar_conta(void);

/* Função que exibe uma listagem no formato de tabela
 * mostrando o número da conta, nome e saldo de todas as
 * contas bancárias cadastradas */
 void listar_contas(void);

 #endif