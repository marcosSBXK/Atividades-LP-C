#include<stdio.h>
#include<stdbool.h>
int main(){
    bool t_sup=true;
    int n,i,j;
    printf("Insira a ordem da matriz: ");
    scanf("%d",&n);
    int tri[n][n];
    printf("Digite os elementos da matriz:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&tri[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",tri[i][j]);
            if(j<i){
                if(tri[i][j]!=0){
                    t_sup=false;
                }
            }
            else if(j>=i){
                if(tri[i][j]==0){
                    t_sup=false;
                }
            }
        }
        printf("\n");
    }
    if(t_sup){
        printf("\nE' uma matriz triangular superior\n");
    }
    else{
        printf("\nNao e' uma matriz triangular superior\n");
    }
}