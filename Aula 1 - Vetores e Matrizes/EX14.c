#include<stdio.h>

int main(){
    int n,i,v1=0,v2=0,aux=1;
    printf("Digite o tamanho desejado do vetor: ");
    scanf("%d",&n);
    int vet1[n],vet2[n];
    printf("Digite a primeira sequencia de numeros:\n");
    for(i=0;i<n;i++){
        scanf("%d",&vet1[i]);
    }
    printf("Digite a segunda sequencia de numeros:\n");
    for(i=0;i<n;i++){
        scanf("%d",&vet2[i]);
    }
    for(i=n-1;i>=0;i--){
        v1+=(vet1[i] * aux);
        v2+=(vet2[i] * aux);
        aux*=10;
    }
    printf("\n%d",v1+v2);
    return 0;
}