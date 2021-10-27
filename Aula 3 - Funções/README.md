# Lista de Exercícios – Funções
1. Escreva um protótipo das funções descritas abaixo:<br>
a) numzeros()  espera um  int  como argumento e imprime o número de zeros de seu
argumento;<br>
b) max() espera dois argumentos do tipo int e devolve um int;<br>
c) n_to_char() espera um argumento do tipo int e devolve um char;<br>
d) digitos() espera um argumento do tipo int e outro do tipo double e devolve um int;<br>
e) random() não espera nenhum argumento e devolve um int.<br>
2. Criar um programa que dados 3 números inteiros, utilize uma função do tipo  void  que
imprima o maior desses números.
3. Escreva uma função de protótipo  void retangulo(int a, int c);  que desenha no
vídeo   um   retângulo   formado   por   asteriscos   " * "   com  a  linhas   de   altura   e  c  colunas   de
comprimento. Por exemplo, se for feita a seguinte chamada a função: retangulo(5, 10);<br>
A função deve desenhar no vídeo o seguinte retângulo:<br>
**********<br>
**********<br>
**********<br>
**********<br>
**********<br>
4. Encontre o erro em cada uma das seguintes funções e explique por que está errado:<br>
a) 
```
  int soma(int x, y) {
    int resultado;
    resultado = x + y;
    return resultado;
  }
```
b) 
```
  void sq(int a) {
    return  a * a;
  }
```
c) 
```
  int cubo(int x);
  {
    return x * x * x;
  }
```
d) 
```
  void salame(int num) {
    int num, i;
    for (i = 1; i <= num; i++)
      printf("Meu salame!\n");
  }
```
5. Faça uma função que recebe por parâmetro o raio de uma esfera (um int) e calcula e devolve
o seu volume (4πR³/3).
6. Escreva uma função que recebe como parâmetros dois inteiros positivos, a e b, e devolve o
MDC (Máximo Divisor Comum) de  a  e  b, calculado por meio do algoritmo de Euclides.
Exemplo:<br>

x | 1 | 1 | 1 | 2
------------ | ------------- | ------------ | ------------- | -------------
24 | 15 | 9 | 6 | 3
9 | 6 | 3 | 0 | 

7. Faça uma função que verifique se um número inteiro é perfeito ou não. Um valor é dito
perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito,
6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano.
8. Faça uma função que recebe, por parâmetro, a altura em metros (alt) e o sexo de uma pessoa e
retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7
x alt - 58 e ,para mulheres, peso ideal = 62.1 x alt - 44.7. 
9. Escreva uma função para calcular o fatorial de um número natural.
10. Considere a função para calcular o fatorial de um número natural implementado na questão
anterior e escreva um programa que recebe dois números naturais (n e k) como parâmetros da
função main()  e calcula e imprime:<br>
a) O número de permutação Pn:  Pn=n!<br>
b) O número de arranjos An,k:  An , k = n! / (n−k!) <br>
c) O número de combinações Cn,k:  Cn , k = n! / k!∗ (n−k)! <br>
11. Criar uma função para calcular xy, dados como parâmetros x (um número real) e y (um número
natural). Restrição: não é permitido utilizar a função pow.
12. Escreva uma função de protótipo double hipotenusa(double x, double y); que calcula
e devolve o comprimento da hipotenusa de um triângulo retângulo cujos catetos são dados
pelos parâmetros  x  e  y. Lembre-se que   hipotenusa=√(x² + y²). Dica: utilize a função da
questão anterior  para obter  os quadrados dos catetos  e a função  sqrt  para obter  a raiz
quadrada.
13. A função floor, definida no arquivo math.h, arredonda seu argumento (um número do tipo
double) para o maior inteiro que não seja maior que esse argumento, na prática, isso significa
devolver a parte inteira do argumento. Entretanto, o valor de retorno da função floor é um
double.   Crie   uma   função   de   protótipo  int   arredondar_para_int(double   n);  que
arredonda seu parâmetro n para o inteiro mais próximo. Dica: some 0.5 a n e utilize a função
floor. Escreva um programa que leia vários números e use a função arredondar_para_int
para arredondar cada um desses números para o inteiro mais próximo.
14. Escreva uma função de protótipo double arredondar(double n, int c); que arredonda
o   valor   de  n  para   um   número   com   precisão   de  c  casas   decimais.   Por   exemplo,
arredondar(5.78351,   1)  devolve  5.8,  arredondar(5.78351,   2) devolve  5.78,
arredondar(5.78351, 3) devolve  5.784. Dica:   utilize   a  função  arredondar_para_int
passando seu argumento multiplicado por 10^c, e depois divida o valor de retorno da função por
10^c.
15. Escreva uma função de protótipo void init_vetor(int a[], int n, int val); que
inicialize o vetor a com n elementos com o valor de val.
16. Escreva uma função que recebe uma string e um caractere como parâmetros e devolve a
posição da 1ª ocorrência do caractere na string. Caso o caractere não esteja contido na string, a
função deve devolver -1.
17. Escreva uma função que recebe um vetor de strings com até 20 caracteres cada e o número de
strings do vetor como parâmetros, e devolve verdadeiro se o vetor está em ordem alfabética
(crescente), ou falso, caso contrário. A função deve ter o seguinte protótipo:<br>
`bool esta_ordenado(char vetor[][21], int n);`
18. Escreva uma função que receba como parâmetro uma matriz quadrada de ordem n de inteiros e
devolve verdadeiro se ela é uma matriz triangular superior, ou falso, caso contrário.  Matriz
triangular superior é uma matriz onde todos os elementos de posições acima da diagonal
principal são diferentes de 0 e todos os elementos demais elementos  são iguais a 0.
19. Escreva uma função que receba uma matriz A bidimensional de valores reais e um valor real x,
e multiplique todos os elementos de A por x.
20. Escreva uma função que recebe um inteiro m e devolve true (verdadeiro) se m é primo ou
false (falso), caso contrário.
21. Escreva um programa que receba um número inteiro não-negativo n e imprima os n primeiros
números primos. Utilize os parâmetros da  main()  para receber o valor de  n  e a função da
questão anterior.
22. Considere os grupos de uma ou mais diretivas seguidas pelos códigos que as utilizam abaixo.
Qual é o código resultante em cada caso? É um código válido? Assuma que as variáveis foram
declaradas.<br>

a)
```
#define KPH 95  /* Km por hora */
dist = KPH * tempo;
```
b)
```
#define METROS 4
#define POD METROS + METROS
plort = METROS * POD;
```
c)
```
#define SEIS = 6;
num = SEIS;
```
d)
```
#define NEW(x) x + 5
y = NEW(y);
berg = NEW(berg) * lob;
est = NEW(berg) / NEW(y);
nilp = lob * NEW(-berg);
```
23. Corrija a definição no item d) da questão anterior para torná-la mais confiável.
24. Escreva um programa que use uma macro  MINIMUM2  para determinar o menor entre dois
valores numéricos.
25. Escreva um programa que use uma macro MINIMUM3 para determinar o menor de três valores
numéricos recebidos via argumentos da função main(). A macro MINIMUM3 deve usar a macro
MINIMUM2 definida um exercício anterior.
