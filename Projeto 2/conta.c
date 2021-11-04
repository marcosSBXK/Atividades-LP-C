/* conta.c
 * Módulo com a implementação das funções cujo protótipos estão
 * descrito no arquivo 'conta.h'.
 * Quando chamadas em um programa, estas funções realizarão sua
 * determinada tarefa que será descrita individualmente abaixo.
 * FATEC Carapicuíba - ADS Manhã
 * Marcos Vinícius da Silva
 * Matheus Andrade Farkas
 * Yohan Sudario
 * 29/06/2020-06/07/2020
 */

#include<stdio.h>
#include"conta.h"

/* Função que tem por objetivo cadastrar contas bancárias em um 
 * arquivo binário aberto em modo "ab", caso não exista será ge-
 * rado automaticamente e se já existir irá adicionar as novas
 * contas em anexo.
 * Utiliza a estrutura 'conta' definida em conta.h para receber 
 * as variáveis necessárias.
 * O número da conta é gerado automaticamente para evitar erros.
 */
void cadastrar_conta(void){
    //Definição de ponteiros e variáveis que serão utilizadas na função
    FILE * arq_conta;
    conta cliente;

    //Verificação de abertura do arquivo
    printf("\n\nNova conta\n");
    if((arq_conta=fopen(ARQ_CONTA,"ab"))==NULL){
        fprintf(stderr,"\nErro: nao foi possivel abrir o arquivo %s!\n",ARQ_CONTA);
        return;
    }
    else{ //Caso arquivo seja aberto, recebe valores para armazenar no arquivo 'conta.dat'
        fseek(arq_conta,0,SEEK_END);
        cliente.num_conta=ftell(arq_conta)/sizeof(conta)+1; //Recebe o número de contas existentes para determinar...
        printf("Numero da conta: %d\n",cliente.num_conta);  //...o número das novas contas automaticamente
        printf("Nome do cliente: ");
        scanf(" %50[^\n]",cliente.nome);
        printf("Saldo da conta: R$ ");
        scanf("%f",&cliente.saldo);
        fwrite(&cliente,sizeof(conta),1,arq_conta); //Escreve a estrutura no arquivo 'conta.dat'
        printf("\nConta cadastrada com sucesso!\n");
    }
    //Fechamento do arquivo utilizado
    fclose(arq_conta);
}

/* Função que verifica a existência de contas já cadastradas e
 * caso existam exibe na tela todas as contas no formato de ta-
 * bela, apresentando as variáveis presentes na estrutura 'conta'
 * e que foram previamente obtidas através da função cadastrar_
 * conta.
 * O arquivo binário é aberto em modo de apenas leitura.
 */
void listar_contas(void){
    //Definição de ponteiros e variáveis que serão utilizadas na função
    FILE * arq_conta;
    conta cliente;

    //Verificação de existência de contas
    if((arq_conta=fopen(ARQ_CONTA,"rb"))==NULL){
        fprintf(stderr,"\nErro: nao ha nenhuma conta cadastrada!\n");
        return;
    }
    else{ //Caso alguma conta exista, imprimirá todas as contas presentes no arquivo 'conta.dat'
        printf("\n\n\tContas Cadastradas\n");
        printf("----------------------------------------------\n");
        printf("#Conta Nome do Cliente           Saldo\n");
        printf("----------------------------------------------\n");
        while(fread(&cliente,sizeof(conta),1,arq_conta)>0){ //Percorre todo o arquivo, uma estrutura de cada vez
            printf("%06d %-25.25s %-10.2f\n",cliente.num_conta,cliente.nome,cliente.saldo);
        }
        printf("----------------------------------------------\n");
    }
    //Fechamento do arquivo utilizado
    fclose(arq_conta);
}