#include<stdio.h>
int main(){
    int n,i,faces[6]={0};
    printf("Digite o numeros de lancamentos: ");
    scanf("%d",&n);
    int vet[n];
    printf("\nDigite as ocorrencias de cada face:\n");
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
        switch(vet[i]){
            case 1:
                faces[0]++;
                break;
            case 2:
                faces[1]++;
                break;
            case 3:
                faces[2]++;
                break;
            case 4:
                faces[3]++;
                break;
            case 5:
                faces[4]++;
                break;
            case 6:
                faces[5]++;
                break;
            default:
                printf("Numero invalido!\n");
                i--;
                break;
        }
    }
    for(i=0;i<6;i++){
        printf("\nFACE %d - %d",i+1,faces[i]);
    }
}