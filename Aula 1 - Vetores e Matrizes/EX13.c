#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j;
    printf("\nDigite um valor para m: ");
    scanf("%d",&m);
    int v1[m];
    printf("Digite um valor para n: ");
    scanf("%d",&n);
    int v2[n];
    printf("Digite os valores da primeira sequencia:\n");
    for(i=0;i<m;i++){
        scanf("%d",&v1[i]);
    }
    printf("\nDigite os valores da segunda sequencia:\n");
    for(i=0;i<n;i++){
        scanf("%d",&v2[i]);
    }

    int v3[m+n];
    for(i=0;i<m;i++){
        v3[i]=v1[i];
    }
    for(j=0;j<n;j++){
        v3[j+m]=v2[j];
    }
    printf("\n");
    for(i=0;i<m+n;i++){
        printf("%d ",v3[i]);
    }
    printf("\n");

    int counter,aux;
    for(counter=0;counter<m+n;counter++){
        for(i=0;i<m+n-1;i++){
            if(v3[i]>v3[i+1]){
                aux=v3[i];
                v3[i]=v3[i+1];
                v3[i+1]=aux;
            }
            if(v3[i]==v3[i+1]){
                for(int x=i;x<m+n-1;x++){
                    v3[x]=v3[x+1];
                }
                n--;
            }
        }
    }   
    for(i=0;i<m+n;i++){
        printf("%d ",v3[i]);
    }
    return 0;
}