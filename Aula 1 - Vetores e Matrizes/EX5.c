#include<stdio.h>
#include<stdbool.h>
int main(){
    bool nao_tem_par = true;
    int vet[8],i;
    printf("Digite 8 numeros:\n");
    for(i=0;i<8;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<8;i++){
        if(vet[i]%2==0){
            printf("%d ",vet[i]);
            nao_tem_par = false;
        }
    }
    if(nao_tem_par){
        printf("Nao tem pares");
    }
    return 0;
}