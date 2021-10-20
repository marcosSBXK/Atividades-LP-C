#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int vendas[12][4],i,j,total=0;
    for(i=0;i<12;i++){
        for(j=0;j<4;j++){
            vendas[i][j]=3000+rand()%1000;
        }
    }
    for(i=0;i<12;i++){
        for(j=0;j<4;j++){
            printf("%d\t",vendas[i][j]);
        }
        printf("\n");
    }
    printf("\nTotal vendido em cada mes;\n");
    for(i=0;i<12;i++){
        for(j=0;j<4;j++){
            total+=vendas[i][j];
        }
        printf("Mes %d \t- R$%d\n",i+1,total);
        total=0;
    }
    printf("\nTotal vendido em cada semana:\n");
    for(j=0;j<4;j++){
        for(i=0;i<12;i++){
            total+=vendas[i][j];
        }
        printf("Semana %d - R$%d\n",j+1,total);
        total=0;
    }
    printf("\nTotal vendido no ano:\n");
    for(i=0;i<12;i++){
        for(j=0;j<4;j++){
            total+=vendas[i][j];
        }
    }
    printf("Ano - R$%d\n",total);
    return 0;
}