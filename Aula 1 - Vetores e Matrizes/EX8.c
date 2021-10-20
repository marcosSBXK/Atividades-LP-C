#include<stdio.h>
int main(){
    int vet[10],i,aux;
    printf("Digite os 10 numeros da sequencia:\n");
    for(i=0;i<10;i++){
        scanf("%d",&vet[i]);
    }
    printf("\nSequencia normal:\n");
    for(i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    printf("\nSequencia invertida:\n");
    for(i=0;i<5;i++){
        aux=vet[i];
        vet[i]=vet[10-1-i];
        vet[10-1-i]=aux;
    }
    for(i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    return 0;
}