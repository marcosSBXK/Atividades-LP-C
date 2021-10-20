#include<stdio.h>
int main(){
    int n,i,I=0,II=0,III=0,IV=0,V=0,VI=0;
    printf("Digite o numeros de lancamentos: ");
    scanf("%d",&n);
    int vet[n];
    printf("\nDigite as ocorrencias de cada face:\n");
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
        switch(vet[i]){
            case 1:
                I++;
                break;
            case 2:
                II++;
                break;
            case 3:
                III++;
                break;
            case 4:
                IV++;
                break;
            case 5:
                V++;
                break;
            case 6:
                VI++;
                break;
            default:
                printf("Numero invalido!\n");
                i--;
                break;
        }
    }
    printf("\nFACE I   - %d",I);
    printf("\nFACE II  - %d",II);
    printf("\nFACE III - %d",III);
    printf("\nFACE IV  - %d",IV);
    printf("\nFACE V   - %d",V);
    printf("\nFACE VI  - %d",VI);
}