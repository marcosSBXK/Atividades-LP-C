#include<stdio.h>
int main(){
    int n=0,i,j;
    while(n<1||n>20){
        printf("Insira a ordem do triangulo de Pascal: ");
        scanf("%d",&n);
        if(n<1||n>20){
            printf("Numero invalido\n");
        }
    }
    int Pascal[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j||j==0){
                Pascal[i][j]=1;
            }
            else if(j<=i){
                Pascal[i][j]=(Pascal[i-1][j]+Pascal[i-1][j-1]);
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<=i){
                printf("%d\t",Pascal[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}