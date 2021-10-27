# Lista de Exercícios – Strings
1. Qual a saída do programa abaixo?
```
#include <stdio.h>
#include <string.h>

int main() {
  char str1[40] = "arte de tudo ";
  char str2[40] = "Eu li p";
  char * str3 = "ao longo da viagem";
  strcat(str1, str3);
  strcat(str2, str1);
  puts(str2);
  return 0;
}
```
2. Escreva um programa que receba uma string do teclado e informe quantas letras maiúsculas
ela possui.
3. Escreva um programa que receba uma linha de texto, conte as  vogais e apresente o
histograma da frequência de cada uma delas. Considere que a linha de texto não contém
acentuação. Por exemplo:<br>
Linha de texto: “Os ultimos Jogos Olimpicos foram no Brasil”<br>
Histograma:<br>
a: ** (2)<br>
e: (0)<br>
i: **** (4)<br>
o: ******** (8)<br>
u:  * (1)<br>
4. Escreva um programa que receba uma string do teclado e informe se ela é palíndromo ou
não. Uma string é palíndromo quando pode ser lida tanto de trás para frente quanto de frente
para trás e possui exatamente a mesma sequência de caracteres. Por exemplo: “ASA”, “SUBI NO ONIBUS”.
Desconsidere os espaços.
5. Escreva um programa que receba uma string str, um inteiro p e um caractere ch, e insere o
caractere ch na posição p da string str. Se p for maior que o tamanho da string str, exiba uma
mensagem. Por exemplo, str = “programacao”, p = 3 e ch = 's', a string str passaria a ser
“prosgramacao”.
6. Escreva um programa que receba uma string de 0s e 1s, interprete essa string como um
número binário e informe o valor desse número na base decimal.
7. Escreva um programa para ler 6 nomes em um vetor de strings A. Depois formar um vetor
de strings B de tal forma que os elementos (nomes) estejam em ordem inversa a do vetor A.
8. Escreva um programa para ler 4 nomes em cada um dos vetores de strings A e B. Construir
um vetor de strings C, que será formada por um elemento do vetor A e por um elemento do
vetor B, intercaladamente.
9. Escreva um programa em C que dadas n strings, determine quantas dessas strings contém
uma string qualquer dada pelo usuário.
10. Escreva um programa que dados um inteiro  n  e um caractere  ch, solicite que o usuário
informe n palavras que começam com a letra ch. Se o usuário informar alguma palavra que
não comece com a letra  ch, o programa deve exibir uma mensagem informando que a
palavra não começa com a letra ch. No final o programa deve exibir as n palavras digitadas
pelo usuário que começam com a letra ch.<br><br>
Desafio:  [Problema   Criptografia   (1024)   do   URI   Online   Judge](https://www.urionlinejudge.com.br/judge/pt/problems/view/1024)
