/* main.c
 * Programa modelo para a execução das funções implementadas no
 * cabeçalho covid19.h e no módulo covid19.c.
 * Seu objetivo é receber e processar as informações a respeito
 * do contágio por Covid-19 em um conjunto de países, utilizando
 * as funções descritas anteriormente.
 * FATEC Carapicuíba - ADS Manhã
 * Marcos Vinícius da Silva
 * Matheus Andrade Farkas
 * Yohan Sudario
 * 18/05/2020-25/05/2020
 */
#include<stdio.h>
#include<stdlib.h>
#include "covid19.h"

int main(){

    /* Início da entrada de dados.
     * Declaração da variáveis utilizadas ao longo do programa.
     * Indicação ao usuário de qual valor deve ser inserido.
     * Leitura do valor que será armazenado na variável 'P', representando o número de países.
     * Declaração da matriz do tipo char que irá armazenar os nomes dos países.
     * Chamada da função que realiza a leitura e armazenamento dos nomes dos países.
     */
    int P,D,i,maior,dia_maior;
    printf("\nInsira o numero de paises que deseja armazenar: ");
    scanf("%d",&P);
    char paises[P][TAM_MAX_NOME+1];
    le_paises(P,paises);

    /* Indicação ao usuário de qual valor deve ser inserido.
     * Leitura do valor que será armazenado na variável 'D', representando o número de dias.
     * Declaração da matriz do tipo inteiro que irá armazenar a amostragem do número de contágio por Covid-19.
     * Chamada da função que realiza a leitura e armazenamento dos nomes dos países.
     * Fim da entrada de dados.
     */
    printf("\nInsira o numero de dias que deseja armazenar: ");
    scanf("%d",&D);
    int contagio[P][D];
    le_contagios(P,D,contagio);

    /* Início da saída de dados.
     * Indicação ao usuário do que será exibido na tela.
     * Chamada da função que calcula e retorna o total de contágios em cada país.
     */
    printf("\n\nNumero total de contagios por pais");
    for(i=0;i<P;i++){
        printf("\n%s: %d",paises[i],total_contagios_pais(D,contagio,i));
    }

    /* Indicação ao usuário do que será exibido na tela.
     * Chamada da função que retorna o dia e valor de maior contágio em cada país.
     */
    printf("\n\nDia com maior numero de contagio por pais\n");
    for(i=0;i<P;i++){   
        dia_maior_contagio_pais(D,contagio,i,&dia_maior,&maior);
        printf("%s: %d (%d)\n",paises[i],dia_maior+1,maior);
    }

    /* Indicação ao usuário do que será exibido na tela.
     * Chamada da função que retorna o dia e valor de maior contágio entre todos os países.
     */
    printf("\nDia com maior numero de contagios\n");
    dia_maior_contagio(P,D,contagio,&dia_maior,&maior);
    printf("%d: %d\n",dia_maior+1,maior);

    /* Indicação ao usuário do que será exibido na tela.
     * Chamada da função que retorna a maior sequência crescente em cada país.
     * Fim da saída de dados.
     * Retorna o valor 0 para indicar execução bem-sucedida.
     */
    printf("\nMaior sequencia crescente de contagios por pais\n");
    for(i=0;i<P;i++){
        printf("%s: %d \n",paises[i],maior_sequencia_crescente(D,contagio,i));
    }
    return 0;
}

/*----------------------
        AVALIAÇÃO
  ----------------------
  - Corretude...: 10.00
  - Interface...: 10.00
  - Legibilidade: 10.00
  - Nota........: 10.00
  ---------------------*/
