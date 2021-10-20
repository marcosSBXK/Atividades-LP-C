#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int energy[3][12],i,j,total=0,x=0,y=0;
    for(i=0;i<3;i++){
        for(j=0;j<12;j++){
            energy[i][j]=50+rand()%40;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<12;j++){
            printf("%d\t",energy[i][j]);
            if(energy[i][j]>energy[x][y]){
                x=i;
                y=j;
            }
        }
        printf("\n");
    }
    for(j=0;j<12;j++){
        for(i=0;i<3;i++){
            total+=energy[i][j];
        }
        printf("\nMedia do mes %d - %d",j+1,total/3);
        total=0;
    }
    printf("\nMaior consumo no mes %d do ano %d = %d",y+1,x+2016,energy[x][y]);
    return 0;
}