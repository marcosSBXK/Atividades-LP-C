#include<stdio.h>
#include<stdbool.h>
int main(){
    bool mat_i=true;
    int n,i,j;
    printf("Insira a ordem da matriz: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Digite os elementos da matriz:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",mat[i][j]);
            if(i==j){
                if(mat[i][j]!=1){
                    mat_i=false;
                }
            }
            else{
                if(mat[i][j]!=0){
                    mat_i=false;
                }
            }
        }
        printf("\n");
    }
    if(mat_i){
        printf("\nE' uma matriz identidade\n");
    }
    else{
        printf("\nNao e' uma matriz identidade\n");
    }
}