#include<stdio.h>
int main(){
    int n,i,faces[6]={0};
    printf("Digite o numeros de lancamentos: ");
    scanf("%d",&n);
    int vet[n];
    printf("\nDigite as ocorrencias de cada face:\n");
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
        if(vet[i]==1){
            faces[0]++;
        }
        else if(vet[i]==2){
            faces[1]++;
        }
        else if(vet[i]==3){
            faces[2]++;
        }
        else if(vet[i]==4){
            faces[3]++;
        }
        else if(vet[i]==5){
            faces[4]++;
        }
        else if(vet[i]==6){
            faces[5]++;
        }
        else{
            printf("Numero invalido\n");
            i--;
        }
    }
    for(i=0;i<6;i++){
        printf("\nFACE %d - %d",i+1,faces[i]);
    }
}