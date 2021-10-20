#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int mat[5][6],i,j,x;
    bool found=false;
    srand(time(NULL));
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            mat[i][j]=rand()%50;
        }
    }
    printf("\nDigite o numero que deseja localizar: ");
    scanf("%d",&x);
    printf("\n");
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            if(mat[i][j]==x){
                found=true;
                printf("[%d][%d]\n",i,j);
            }
        }
    }
    if(!found){
        printf("\nNumero nao encontrado\n");
    }
    return 0;
}