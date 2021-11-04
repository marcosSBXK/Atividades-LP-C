/* movimentacao.c
 * Módulo com a implementação das funções cujo protótipos estão
 * descrito no arquivo 'movimentacao.h'.
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
#include"movimentacao.h"
#define MOV_TXT "mov.txt"

/* Função para cadastro de movimentações.
 * Utiliza o arquivo 'conta.dat' para verificar a existência da 
 * conta inserida pela usuário. Ao realizar uma movimentação em
 * uma conta, atualiza o saldo atual do cliente, portanto, é ne-
 * cessário que o arquivo binário seja aberto em modo "r+b" para
 * leitura e escrita.
 * Em caso de inexistência o arquivo binário 'movimentacao.dat' é
 * gerado e será utilizado para armazenar as movimentações através
 * da estrutura 'movimentacao'. Seu modo de abertura é "ab", para
 * que todas as movimentações seja adicionadas em anexo, sem alterar
 * o que já está presente, mesmo que pertença a mesma conta ou data.
 */
void cadastrar_movimentacao(void){
    //Definição de ponteiros e variáveis que serão utilizadas na função
    FILE * arq_conta, *arq_mov;
    conta cliente;
    movimentacao mov;
    int num_conta,op;
    float valor;
    
    //Verificação de abertura do arquivo
    if((arq_conta=fopen(ARQ_CONTA,"r+b"))==NULL){
        fprintf(stderr,"\nErro: nao foi possivel abrir o arquivo %s!\n",ARQ_CONTA);
        return;
    }

    //Verificação de existência da conta
    printf("\nMovimentacao de valores\n");
    printf("Numero da conta: ");
    scanf("%d",&num_conta);
    fseek(arq_conta,(num_conta-1)*sizeof(conta),SEEK_SET); //Percorre o arquivo uma estrutura de cada vez...
    fread(&cliente,sizeof(conta),1,arq_conta);             // ...até localizar a estrutura desejada
    if(feof(arq_conta)||num_conta<=0){
        fprintf(stderr,"\nErro: numero de conta invalido!\n");
        return;
    }
    else{ //Caso conta exista...
        do{ //Recebimento dos valores da estrutura 'movimentacao'
            printf("Nome do cliente: %s\n",cliente.nome);
            printf("Insira a data da movimentacao (dd/mm/aaaa): ");
            scanf("%d/%d/%d",&mov.dt_movimentacao.dia,&mov.dt_movimentacao.mes,&mov.dt_movimentacao.ano);
            printf("\n1 - Deposito\n");
            printf("2 - Saque\n");
            printf("0 - Voltar ao menu principal\n");
            printf("Digite a opcao desejada: ");
            scanf(" %d",&op);
            int flag=0;
            switch(op){ //Seleção do tipo de movimentação
                case 1:
                    flag++;
                    printf("\nRealizar um deposito\n");        
                    for(int i=0;i<1;i++){
                        printf("Valor do deposito: R$ ");
                        scanf(" %f",&valor);
                        if(valor<=0){ //Verificação se valor é positivo
                            printf("\nValor invalido!\n");
                            i--;
                        }
                    }
                    cliente.saldo+=valor; //Atualização do saldo atual
                    printf("Saldo atual: R$ %.2f\n",cliente.saldo);
                    fseek(arq_conta,-sizeof(conta),SEEK_CUR);   //Retorna ao início da estrutura para não sobrescrever outra
                    fwrite(&cliente,sizeof(conta),1,arq_conta); //Reescrita da estrutura cliente alterando o saldo
                    printf("\nDeposito realizado com sucesso!\n\n");
                    break;
                case 2:
                    flag++;
                    printf("\nRealizar um saque\n");
                    for(int i=0;i<1;i++){
                        printf("Valor do saque: R$ ");
                        scanf(" %f",&valor);
                        if(valor<=0||valor>cliente.saldo){ //Verificação se valor é positivo ou maior que saldo do cliente
                            printf("\nValor invalido!\n");
                            i--;
                        }
                    }
                    cliente.saldo-=valor; //Atualização do saldo atual
                    printf("Saldo atual: R$ %.2f\n",cliente.saldo);
                    fseek(arq_conta,-sizeof(conta),SEEK_CUR);   //Retorna ao início da estrutura para não sobrescrever outra
                    fwrite(&cliente,sizeof(conta),1,arq_conta); //Reescrita da estrutura alterando o saldo
                    printf("\nSaque realizado com sucesso!\n\n");
                    break;
                case 0:
                    break;
                default:
                    printf("\nErro: Opcao Invalida!\n");
                    break;
            }
            //Condicional para ignorar comandos a seguir caso opção digitada seja '0'
            if(op!=0){
                //Abertura do 'movimentacao.dat' e escrita da movimentacao inserida pelo usuário
                if((arq_mov=fopen(ARQ_MOVIMENTACAO,"ab"))==NULL){ //Verificação de abertura do arquivo
                    fprintf(stderr,"\nErro: nao foi possivel abrir o arquivo %s!\n",ARQ_MOVIMENTACAO);
                    return;
                }
                fseek(arq_mov,0,SEEK_END); //Define ponteiro no final do arquivo
                mov.num_conta=num_conta;
                mov.tipo=op;
                mov.valor=valor;
                fwrite(&mov,sizeof(movimentacao),1,arq_mov); //Escreve a estrutura no arquivo 'movimentacao.dat'
            }
            if(flag>0){ //Sinalizador que verifica se houve sucesso no cadastro da movimentação, se sim sai do laço
                op=0;
            }
        }while(op!=0);
    }
    //Fechamento dos arquivos utilizados
    
	/* Ciro: se o usuário selecionar 0 - Voltar ao menu principal, o arquivo de 
	 * movimentação não terá sido aberto, portanto, arq_mov não tem valor definido,
	 * o que provoca um erro no fclose abaixo (Corretude: -0.25) */
    fclose(arq_mov); 
    fclose(arq_conta);
}

/* Função para apresentar todas as movimentações já listadas anteriormente.
 * Dá a possibilidade de exibir em vídeo ou salvar em arquivo de texto.
 * Utiliza o arquivo 'conta.dat' para verificar a existência da conta inse-
 * rida pela usuário e 'movimentacao.dat' para verificar se há movimentações.
 * Pede duas datas e busca as movimentações da conta em questão no intervalo
 * do período referido.
 * Caso solicitado salvamento em arquivo de texto, os dados serão armazenados
 * no 'mov.txt'.
 */
void listar_movimentacoes(void){
    //Definição de ponteiros e variáveis que serão utilizadas na função
    FILE *arq_mov, *arq_conta, *fp;
    movimentacao mov;
    conta cliente;
    data dt_inicial, dt_final;
    int num_conta,x;

    //Verificação de abertura do arquivo
    if((arq_conta=fopen(ARQ_CONTA,"rb"))==NULL){
        fprintf(stderr,"\nErro: nao ha nenhuma conta cadastrada!\n");
        return;
    }

    //Verificação de abertura do arquivo
    if((arq_mov=fopen(ARQ_MOVIMENTACAO,"rb"))==NULL){
        fprintf(stderr,"\nErro: nao ha movimentacao cadastrada!\n");
        return;
    }

    //Verificação de existência da conta
    printf("\nListagem de movimentacao por periodo\n");
    printf("Numero de conta: ");
    scanf(" %d",&num_conta);
    fseek(arq_conta,(num_conta-1)*sizeof(conta),SEEK_SET);
    fread(&cliente,sizeof(conta),1,arq_conta);
    if(feof(arq_conta)||num_conta<=0){
        fprintf(stderr,"\nErro: numero de conta invalido!\n");
        return;
    }
    else{ //Caso conta exista, recebe as informações necessárias
        printf("Data inicial (dd/mm/aaaa): ");
        scanf("%d/%d/%d",&dt_inicial.dia,&dt_inicial.mes,&dt_inicial.ano);
        printf("Data final (dd/mm/aaaa): ");
        scanf("%d/%d/%d",&dt_final.dia,&dt_final.mes,&dt_final.ano);
        printf("\n");
        printf("1-Exibir em video\n");
        printf("2-Salvar em arquivo de texto\n");
        printf("0-Cancelar\n");
        printf("Selecione o modo de listagem: ");
        scanf("%d",&x);
        switch(x){
            case 1: //Opção para exibir movimentações em vídeo
                printf("\n---------------------------------------------\n");
                printf("Nome do cliente: %-25.25s\n",cliente.nome);
                printf("Conta: %06d",cliente.num_conta);
                printf("\nData inicial: %d/%d/%d",dt_inicial.dia,dt_inicial.mes,dt_inicial.ano);
                printf("\nData final: %d/%d/%d",dt_final.dia,dt_final.mes,dt_final.ano);                                              
                printf("\n---------------------------------------------\n");
                printf("Tipo\t\t Data\t\tValor");
                printf("\n---------------------------------------------\n");

                while(fread(&mov,sizeof(movimentacao),1,arq_mov)>0){ //Percorre todo o arquivo, uma estrutura de cada vez
                    if(compara_datas(dt_inicial,mov.dt_movimentacao)<=0 && compara_datas(dt_final,mov.dt_movimentacao)>=0){
                        if(mov.num_conta==num_conta){ //Verificação do número da conta
                            if(mov.tipo==1){
                                printf("Deposito\t %d/%d/%d \t%-10.2f\n",mov.dt_movimentacao.dia,mov.dt_movimentacao.mes,
                                                                         mov.dt_movimentacao.ano,mov.valor);
                            }
                            else if(mov.tipo==2){
                                printf("Saque   \t %d/%d/%d \t%-10.2f\n",mov.dt_movimentacao.dia,mov.dt_movimentacao.mes,
                                                                         mov.dt_movimentacao.ano,mov.valor);
                            }
                        }
                    }
                }
                printf("---------------------------------------------\n");
                break;
            case 2: //Opção para salvar movimentações em arquivo de texto
                //Verificação de abertura de arquivo
                if((fp=fopen(MOV_TXT,"a"))==NULL){
                    fprintf(stderr,"\nErro: Nao foi possivel abrir o arquivo %s!",MOV_TXT);
                    return;
                }
                else{
                    fprintf(fp,"\n---------------------------------------------\n");
                    fprintf(fp,"Nome do cliente: %-25.25s\n",cliente.nome);
                    fprintf(fp,"Conta: %06d",cliente.num_conta);
                    fprintf(fp,"\nData inicial: %d/%d/%d",dt_inicial.dia,dt_inicial.mes,dt_inicial.ano);                                                    
                    fprintf(fp,"\nData final: %d/%d/%d",dt_final.dia,dt_final.mes,dt_final.ano);                  
                    fprintf(fp,"\n---------------------------------------------\n");
                    fprintf(fp,"Tipo\t\t Data\t\tValor");
                    fprintf(fp,"\n---------------------------------------------\n");

                    while(fread(&mov,sizeof(movimentacao),1,arq_mov)>0){ //Percorre todo o arquivo, uma estrutura de cada vez
                        if(compara_datas(dt_inicial,mov.dt_movimentacao)<=0 && compara_datas(dt_final,mov.dt_movimentacao)>=0){
                            if(mov.num_conta==num_conta){ //Verificação do número da conta
                                if(mov.tipo==1){
                                    fprintf(fp,"Deposito\t %d/%d/%d \t%-10.2f\n",mov.dt_movimentacao.dia,mov.dt_movimentacao.mes,
                                                                                mov.dt_movimentacao.ano,mov.valor);
                                }
                                else if(mov.tipo==2){
                                    fprintf(fp,"Saque   \t %d/%d/%d \t%-10.2f\n",mov.dt_movimentacao.dia,mov.dt_movimentacao.mes,
                                                                                mov.dt_movimentacao.ano,mov.valor);
                                }
                            }
                        }
                    }
                    fprintf(fp,"---------------------------------------------\n");
                }
                fclose(fp); //Fechamento do arquivo utilizado
                printf("\nArquivo de texto salvo com sucesso!\n"); //Mensagem para sinalizar execução bem-sucedida
                break;
            case 0:
                break;
            default:
                printf("\nErro: Opcao Invalida!\n");
                break;
        }
    }
    //Fechamento dos arquivos utilizados
    fclose(arq_mov);
    fclose(arq_conta);
}

/* Função do tipo inteiro que recebe estruturas de datas e faz uma comparação
 * entre elas para determinar qual é a maior e retorna valores negativos, zero,
 * ou positivos dependendo de como for a relação entre as datas.
 * Negativo quando a primeira data é menor que a segunda.
 * Zero quando as duas datas são iguais.
 * Positivo quando a primeira data é maior que a segunda.
 */
int compara_datas(data d1, data d2){
    int dt1,dt2;
    //Transforma os valores das datas em um único valor inteiro
    dt1=(d1.ano*10000 + d1.mes*100 + d1.dia);
    dt2=(d2.ano*10000 + d2.mes*100 + d2.dia);
    return dt1-dt2; //Retorno da comparação
}
