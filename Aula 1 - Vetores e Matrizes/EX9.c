#include<stdio.h>
int main(){
    int i,maior,menor;
    float temp[12];
    printf("Digite a temperatura de cada mes do ano:\n");
    for(i=0;i<12;i++){
        scanf("%f",&temp[i]);
    }
    for(i=0;i<12;i++){
        printf("\nTemperatura no mes %d\t- %.2f%cC",i+1,temp[i],248);
    }
    maior=menor=0;
    for(i=0;i<12;i++){
        if(temp[i]>temp[maior]){
            maior=i;
        }
        else if(temp[i]<temp[menor]){
            menor=i;
        }
    }
    printf("\nA maior temperatura foi de %.2f%cC no mes %d",temp[maior],248,maior+1);
    printf("\nA menor temperatura foi de %.2f%cC no mes %d",temp[menor],248,menor+1);
}