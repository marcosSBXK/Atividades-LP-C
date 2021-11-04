#include<stdio.h>
int main(){
    int P,D,i,j,total=0,maior=0,x,y,z,sequencia=1;

    printf("Insira o numero de paises que deseja armazenar: ");
    scanf("%d",&P);
    char paises[P][51];
    for(i=0;i<=P;i++){
        if(i>0){
            printf("\nDigite o nome do %d%c pais: ",i,248);
        }
        gets(paises[i]);
    }

    printf("\nInsira o numero de dias que deseja armazenar: ");
    scanf("%d",&D);
    int contagio[P][D];
    printf("\nDigite o numero de contagios do dia:\n");
    for(i=0;i<P;i++){
        for(j=0;j<D;j++){
            printf("%s - Dia %d: ",paises[i+1],j+1);
            scanf("%d",&contagio[i][j]);
        }
    }

    printf("\n\nNumero total de contagios por pais\n");
    for(i=0;i<P;i++){
        for(j=0;j<D;j++){
            total+=contagio[i][j];
        }
        printf("%s: %d\n",paises[i+1],total);
        total=0;
    }

    printf("\nDia com maior numero de contagio por pais\n");
    for(i=0;i<P;i++){
        for(j=0;j<D;j++){
            if(contagio[i][j]>maior){
                maior=contagio[i][j];
                x=i;
                y=j;
            }
        }
        printf("%s: %d (%d)\n",paises[i+1],y+1,contagio[x][y]);
        maior=0;
    }

    printf("\nDia com maior numero contagio\n");
    for(j=0;j<D;j++){
        for(i=0;i<P;i++){
            total+=contagio[i][j];
        }
        if(total>maior){
            maior=total;
            z=j;
        }
        total=0;
    }
    printf("%d: %d\n",z+1,maior);

    printf("\nMaior sequencia crescente de contagios por pais\n");
    maior=0;
    for(i=0;i<P;i++){
        for(j=0;j<D-1;j++){
            if(contagio[i][j]<contagio[i][j+1]){
                sequencia++;
                if(sequencia>maior){
                    maior=sequencia;
                }
            }
            else{
                sequencia=1;
            }
        }
        printf("%s: %d\n",paises[i+1],maior);
        sequencia=1;
        maior=0;
    }
}