#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int m,n,i,j;
    printf("Digite o tamanho da linha da matriz: ");
    scanf("%d",&n);
    printf("Digite o tamanho da coluna da matriz: ");
    scanf("%d",&m);
    int mat_a[n][n],mat_b[n][m];
    srand(time(NULL));
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            mat_a[i][j]=rand()%100;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            mat_b[i][j]=rand()%100;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",mat_a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",mat_b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(mat_a[i][j]>=mat_b[i][j]){
                printf("%d\t",mat_a[i][j]);
            }
            else{
                printf("%d\t",mat_b[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}