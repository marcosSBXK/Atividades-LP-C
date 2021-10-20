#include<stdio.h>
int main(){
    int n,i,I=0,II=0,III=0,IV=0,V=0,VI=0;
    printf("Digite o numeros de lancamentos: ");
    scanf("%d",&n);
    int vet[n];
    printf("\nDigite as ocorrencias de cada face:\n");
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
        if(vet[i]==1){
            I++;
        }
        else if(vet[i]==2){
            II++;
        }
        else if(vet[i]==3){
            III++;
        }
        else if(vet[i]==4){
            IV++;
        }
        else if(vet[i]==5){
            V++;
        }
        else if(vet[i]==6){
            VI++;
        }
        else{
            printf("Numero invalido\n");
            i--;
        }
    }
    printf("\nFACE I   - %d",I);
    printf("\nFACE II  - %d",II);
    printf("\nFACE III - %d",III);
    printf("\nFACE IV  - %d",IV);
    printf("\nFACE V   - %d",V);
    printf("\nFACE VI  - %d",VI);
}