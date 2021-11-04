/* main.c
 * Programa principal para a execução das funções prototipadas nos 
 * cabeçalhos 'conta.h' e 'movimentacao.h', e implementadas nos
 * módulos 'conta.c' e 'movimentacao.c'.
 * Seu objetivo é operar o controle de um banco sobre as contas
 * de seus clientes, cadastrando novas contas, exibindo as contas
 * existentes, cadastrando as movimentações financeiras e também
 * exibindo as movimentações no vídeo ou armazenando em um arquivo
 * de texto 'mov.txt'.
 * FATEC Carapicuíba - ADS Manhã
 * Marcos Vinícius da Silva
 * Matheus Andrade Farkas
 * Yohan Sudario
 * 29/06/2020-06/07/2020
 */

#include<stdio.h>
#include"conta.h"
#include"movimentacao.h"

/* Função principal do tipo inteiro que apresenta um menu com as 
 * opções de chamadas de funções e verificação da seleção de opção
 * para então chamar tal função e executar sua determinada tarefa.
 */
int main(){
    int option;
    do{
        printf("\n------Conta Bancaria------\n");
        printf("1-Cadastrar conta\n");
        printf("2-Listar contas\n");
        printf("3-Cadastrar movimentacao\n");
        printf("4-Listar movimentacao\n");
        printf("0-Finalizar\n");
        printf("Digite a opcao desejada: ");
        scanf("%d",&option);
        switch(option){
            case 1:
                cadastrar_conta();
                break;
            case 2:
                listar_contas();
                break;
            case 3:
                cadastrar_movimentacao();
                break;
            case 4:
                listar_movimentacoes();
                break;
            case 0:
                printf("FIM!\n");
                break;
            default:
                printf("\nErro: Opcao invalida!\n");
        }
    }while(option!=0);    
    return 0;
}

/*----------------------
        AVALIAÇÃO
  ----------------------
  - Corretude...:  9.75
  - Interface...: 10.00
  - Legibilidade: 10.00
  - Nota........:  9.80
  ----------------------*/
