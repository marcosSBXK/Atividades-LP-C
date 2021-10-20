#include<stdio.h>
int main(){
    int i,j;
    int mat[4][5]={{[1]=10},[3]={15,[4]=-1}};
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}