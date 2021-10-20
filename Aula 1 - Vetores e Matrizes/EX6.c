#include<stdio.h>
int main(){
    int i,n;
    printf("\nDigite o numero de elementos da sequencia: ");
    scanf("%d",&n);
    int seq[n];
    printf("Digite os elementos da sequencia:\n");
    for(i=0;i<n;i++){
        scanf("%d",&seq[i]);
    }
    printf("\nOrdem inversa\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",seq[i]);
    }
    printf("\n");
    return 0;
}