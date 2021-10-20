#include<stdio.h>
#include<stdbool.h>
int main(){
    bool crescente = true;
    int seq[15],i;
    printf("Digite 15 numeros inteiros:\n");
    for(i=0;i<15;i++){
        scanf("%d",&seq[i]);
    }
    for(i=0;i<14;i++){
        if(seq[i]>=seq[i+1]){
            crescente = false;
            break;
        }
    }
    if(crescente){
        printf("\nOs numeros estao em ordem crescente\n");
    }
    else{
        printf("\nOs numeros nao estao em ordem crescente\n");
    }
    return 0;
}