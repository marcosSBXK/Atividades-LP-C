#include<stdio.h>
int main(){
    int n,i,j;
    printf("Insira a ordem da matriz: ");
    scanf("%d",&n);
    printf("Insira os elementos da matriz:\n");
    int mat[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nDiagonal principal:\n");
    for(i=0;i<n;i++){
        printf("%d ",mat[i][i]);
    }
    printf("\n\nSem diagonal principal:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                printf("%d",mat[i][j]);
            }
            printf("\t");
        }
        printf("\n");
    }
    printf("\nDiagonal secundaria:\n");
    for(i=0;i<n;i++){
            printf("%d ",mat[i][n-1-i]);
    }
    return 0;
}