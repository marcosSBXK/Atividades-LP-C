#include<stdio.h>
int main(){
    int mat[10][10],i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==j){
                mat[i][j]=1;
            }
            else{
                mat[i][j]=0;
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}