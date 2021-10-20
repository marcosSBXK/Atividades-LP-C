#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("Insira o numero de linhas e colunas da matriz nXm: ");
    scanf("%d %d",&n,&m);
    int mat[n][m],mat_t[m][n];
    printf("Digite os elementos da matriz %dx%d:\n",n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("[%d]x[%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            mat_t[j][i]=mat[i][j];
        }
    }
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",mat_t[i][j]);
        }
        printf("\n");
    }
    return 0;
}