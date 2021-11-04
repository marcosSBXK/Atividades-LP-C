/* covid19.c
 * Módulo com a implementação das funções cujos protótipos estão
 * descritos no arquivo covid19.h.
 * Quando chamadas em um programa, estas funções realizarão sua 
 * determinada tarefa que será descrita individualmente abaixo.
 * FATEC Carapicuíba - ADS Manhã
 * Marcos Vinícius da Silva
 * Matheus Andrade Farkas
 * Yohan Sudario
 * 18/05/2020-25/05/2020
 */
#include <stdio.h>
#include <stdlib.h>
#include "covid19.h"

/* Função que lê os nomes dos 'P' países inseridos pelo usuário
 * e armazena as strings lidas em uma matriz de strings. */
void le_paises(int fp,char fpaises[][TAM_MAX_NOME+1]){
    for(int i=0;i<fp;i++){
        printf("Digite o nome do %do. pais: ",i+1);
        scanf(" %51[^\n]",fpaises[i]);
    }
}

/* Função que lê a amostragem do número de contágio por Covid-19
 * em cada dia, no período de 'D' dias para todos os 'P' países.
 * Os valores do tipo inteiro são armazenados em uma matriz de 
 * inteiros. */
void le_contagios(int fp,int fd,int fcontagio[][fd]){
    printf("Digite o numero de contagios de cada dia (separados por espaco ou enter):\n");
    for(int i=0;i<fp;i++){
        printf("%do. pais: ",i+1);
        for(int j=0;j<fd;j++){
            scanf("%d",&fcontagio[i][j]);
        }
    }
}

/* Função que obtém a amostragem do número de contágio por Covid-19
 * armazenada em uma matriz e calcula o total de contágios naquele 
 * país durante os 'D' dias. Portanto, realiza a soma de cada elemento 
 * em uma linha, em seguida retorna o valor total desta linha para a 
 * função chamadora e realiza novamente os cálculos na linha seguinte. */
int total_contagios_pais(int fd,int fcontagio[][fd],int fp){
    int total=0;
    for(int j=0;j<fd;j++){
        total+=fcontagio[fp][j];
    }
    return total;
}

/* Função que obtém a amostragem do número de contágio por Covid-19
 * armazenada em uma matriz e procura pelo dia em que houve o maior
 * índice de contágios e seu respectivo valor. Portanto, compara cada
 * elemento de uma linha matriz, armazena o índice da coluna e valor
 * do maior elemento, retorna estes valores através de parâmetros de
 * saída para a função chamadora e realiza o mesmo nas 'P' linhas seguintes. */
void dia_maior_contagio_pais(int fd,int contagio[][fd],int i,int *dm,int *m){
    *m=0;
    *dm=0;
    for(int j=0;j<fd;j++){
        if(contagio[i][j]>*m){
            *m=contagio[i][j];
            *dm=j;
        }
    }
}

/* Função que obtém a amostragem do número de contágio por Covid-19
 * armazenada em uma matriz e calcula qual dia teve o maior número 
 * de contágios entre todos os países. Portanto, calcula a somatória
 * de cada coluna e compara entre si com o intuito de determinar o 
 * maior. Após obter o índice da coluna que obteve o maior valor e a
 * sua somatória, retorna estes valores através de parâmetros de saída 
 * para a função chamadora. */
void dia_maior_contagio(int fp,int fd,int fcontagio[][fd],int *bd,int *b){
    int t=0;
    *b=0;
    *bd=0;
    for(int j=0;j<fd;j++){
        for(int i=0;i<fp;i++){
            t+=fcontagio[i][j];
        }
        if(t>*b){
            *b=t;
            *bd=j;
        }
        t=0;
    }
}

/* Função que obtém a amostragem do número de contágio por Covid-19
 * armazenada em uma matriz e procura pela maior sequência crescente
 * em cada país individualmente. Portanto, compara cada valor com o
 * próximo ao lado para determinar se estão em ordem crescente. Caso
 * estejam em ordem, um contador armazena quantos números aparecem em
 * tal ordem. Caso não estejam, o contador reinicia e permanece em seu
 * valor inicial até que outra crescente seja encontrado ou que o proce-
 * dimento finalize. Após contar a maior ordem crescente, retorna este
 * valor para a função chamadora e realiza o procedimento nas 'P' linhas
 * seguintes. */
int maior_sequencia_crescente(int fd,int fcontagio[][fd],int fp){
    int maior=0;
    int sequencia=1;
    for(int j=0;j<fd-1;j++){
        if(fcontagio[fp][j]<fcontagio[fp][j+1]){
            sequencia++;
            if(sequencia>maior){
                maior=sequencia;
            }
        }
        else{
            sequencia=1;
        }
    }
    return maior;
}