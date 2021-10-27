# Lista de Exercícios – Ponteiros
1. Com base nos endereços abaixo e supondo que os valores digitados para a execução do
programa são: 10 e 20, responda as questões a seguir:

variável | v1 | v2 | soma | p1 | p2 | p3 | m
-------- | -- | -- | ---- | -- | -- | -- | --
valor | | | | | | | 
endereço | 0x1000 | 0x1004 | 0x1008 | 0x100C | 0x1010 | 0x1014 | 0x1018

```
#include <stdio.h> 
void funcao (int, int *, int *);
 
int main () { 
  int v1, v2, soma; 
  printf ("\nDigite dois valores: "); 
  scanf ("%d %d", &v1, &v2); 
  funcao (v1, &v2, &soma); 
  printf ("%d, %d, %d\n", v1, v2, soma); 
  return 0;
}

void funcao (int p1, int * p2, int * p3) { 
  int m; 
  m = p1 * *p2; 
  *p3 = p1 + *p2; 
  *p2 = m; 
}
```
a) Depois de executada a linha 13, quais são os valores de:<br>

p1 =<br>
p2 =<br>
p3 =<br>

b) Depois de executada a linha 15, qual é o valor de:<br>

m =<br>

c) Depois de executada a linha 17, quais são os valores de:<br>

p1 =<br>
p2 =<br>
p3 =<br>
v1 =<br>
v2 =<br>

d) O que é impresso no vídeo quando a linha 09 é executada?<br>

2. Escreva uma função que receba como parâmetro uma distância em metros e devolva, também
através de seus parâmetros, essa distância em polegadas, jardas e milhas.

Metro | Polegadas | Jardas | Milhas
----- | -- | -- | ----
1,0 | 39,37 | 1,0936 | 0,00062

3. Escreva um programa que dada uma sequência de distâncias em metro, informe essas distâncias
em polegadas, jardas e milhas. O programa deve terminar quando for informada uma distância
zero. Utilize a função do exercício anterior.
4. Escreva uma função que receba um tempo em segundos (um número inteiro) e devolva esse
tempo em horas, minutos e segundos (três inteiros). Faça um programa que leia do teclado um
tempo em segundos e imprima esse tempo em horas, minutos e segundos (use a sua função).
5. Escreva uma função que dado o raio (r) de uma circunferência, devolva seu diâmetro ( 2⋅r),
seu perímetro ( 2⋅π⋅r) e sua área ( π⋅r²).
6. Qual a saída do programa abaixo?
```
#include <stdio.h>

void fun1 (int x, int * y) {
  x = x + *y;
  *y = x * 2:
}
  
int fun2(int z) {
  z = z + 3;
  return z;
} 

int main () {
  int a = 5, b = 10;
  fun1(a, &b);
  printf ("a = %d\nb = %d\n", a, b);
  a = fun2(b);
  printf ("a = %d\nb = %d\n", a, b);
  return 0;
}
```
7. Escreva uma função de protótipo char * strupper(char * str); que converte todos os
caracteres de str para maiúsculo e devolve a string convertida. Use a notação de ponteiros para
percorrer a string str. Faça um programa que receba uma string do teclado e imprime essa string
com todas as letras em maiúsculo (use a função strupper).
8. Escreva uma função de protótipo int num_ocorrencias(const char * frase, const
char * palavra); que devolve o número de vezes que a palavra ocorre na frase. Exemplo:
para a palavra “ANA” e a frase: “ANA E MARIANA GOSTAM DE BANANA”. Temos que a
palavra ocorre 4 vezes na frase. Use a notação de ponteiros para percorrer as strings.
9. Escreva uma função de protótipo void somabit(int b1, int b2, int * vaium, int
* soma); que recebe três bits (inteiros entre 0 e 1) b1, b2, e *vaium e devolve um bit *soma
representando a soma dos três bits e um novo bit “vai-um” em *vaium.
10. Escreva um programa que leia dois números binários e calcula um número binário que é a soma
dos dois números dados. Utilize a função do exercício anterior.
11. Escreva um programa que dada uma matriz m x n de inteiros, crie um vetor de tamanho m de
inteiros que contém em cada posição o somatório dos elementos de uma linha da matriz, ou seja,
o 1º elemento do vetor deve conter o somatório dos elementos da 1ª linha da matriz, o 2º
elemento do vetor deve conter o somatório da 2ª linha da matriz, e assim por diante. Utilize a
notação de ponteiros para fazer referência aos elementos da matriz e do vetor.
12. Considerando que o valor de mat é 0x1000 (hexadecimal), assinale a alternativa que corresponde
à saída correta do programa abaixo:
```
#include <stdio.h>int main() {
int mat[2][3] = { {1, 2, 3},
                  {4, 5, 6} };
printf("%p\t%p\t%d\t%d\n",
        mat, *(mat) + 2,
        *(*(mat) + 1),
        *(*(mat + 1) + 2));
return 0;
}
```
```
(    )  0x1000   0x1008   4       6  
(    )  0x1000   0x1008   2       6
(    )  0x1000   3        4       5
(    )  1        3        0x1004  0x1024
(    )  0x1000   0x1002   2       6
```
