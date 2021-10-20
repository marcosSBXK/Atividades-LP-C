<div style="text-align: justify">
1. Um vetor é uma coleção de variáveis de: <br>
(   ) diferentes tipos de dados distribuídos pela memória; <br>
(   ) tipos de dados similares distribuídos pela memória; <br>
(   ) tipos de dados similares em sequência na memória; <br>
(   ) diferentes tipos de dados em sequência na memória.
2. Se um vetor é declarado como: <br>
float precos[10]; <br>
o laço abaixo é correto para acessar todos os elementos do vetor? <br>
for (i = 0; i <= 10; i++) { <br>
    scanf("%f", &precos[i]); <br>
}
3. A instrução abaixo é correta para inicializar um vetor? <br>
int vetor = { 1, 2, 3, 4, 5 };
4. Qual o valor de cada um dos elementos do vetor vet inicializado abaixo? <br>
int vet[5] = { [1] = 20, [4] = 1};
5. Desenvolva um programa que dada uma sequência de 8 números inteiros depois imprima todos os números pares digitados.
6. Escreva um programa que dada uma sequência de n números inteiros, imprimi-los em ordem inversa.
7. Desenvolva um programa para armazenar 15 números inteiros em um vetor e depois imprimir uma mensagem informando se os números estão em ordem crescente ou não.
8. Criar um programa que leia os elementos de um vetor de inteiros com 10 posições. Em seguida, troque o 1º elemento pelo último, o 2º pelo penúltimo, o 3º pelo antepenúltimo, e assim sucessivamente. Mostre o vetor depois das trocas.
9. Criar um programa em C que receba a temperatura média de cada mês do ano, em graus centígrados, e armazene essas temperaturas em um vetor. Imprimir as temperaturas de todos os meses, maior e a menor temperatura do ano e em que mês aconteceram. Suponha que não há meses com temperaturas iguais.
10. Tentando descobrir se um dado era viciado, um dono de cassino o lançou n vezes. Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.
11. Dada uma sequência de n números inteiros, determinar qual é a maior subsequência crescente nesta sequência. Por exemplo, seja n = 8, a sequência 5, 7, -1, 0, 3, 6, 6, 4, então a maior sequência crescente é -1, 0, 3, 6.
12. Calcular o valor do polinômio p(x) = a0x0 + a1x1 + ... + anxn em k pontos distintos. São dados os valores de n (grau do polinômio), de a0, a1, ..., an (coeficientes reais do polinômio), de k e dos pontos x1, x2, ..., xk.
13. Dados dois números naturais m e n e duas sequências ordenadas com m e n números inteiros, obter uma única sequência ordenada contendo todos os elementos das sequências sem repetição.
14. Dadas duas sequências com n números inteiros entre 0 e 9, interpretadas como dois números inteiros de n algarismos, calcular a sequência de números que representa a soma dos dois inteiros. Por exemplo, n = 6 <br>
1ª sequência    8 2 4 9 0 3 <br>
2ª sequência    + 3 5 6 7 1 0 <br>
                ------------- <br>
Resultado       1 1 8 1 6 1 3
15. (1ª fase da Maratona de Programação 2011) A divisão de Suprimentos de Botas e Calçados do Exército comprou um grande número de pares de botas de vários tamanhos para seus soldados. No entanto, por uma falha de empacotamento da fábrica contratada, nem todas as caixas entregues continham um par de botas correto, com duas botas do mesmo tamanho, uma para cada pé. O sargento mandou que os recrutas retirassem todas as botas de todas as caixas para reembalá-las, desta vez corretamente. Quando o sargento descobriu que você sabia programar, ele solicitou com a gentileza habitual que você escrevesse um programa que dada a lista contendo a descrição de cada bota entregue, determina quantos pares corretos de botas poderão ser formados no total. <br>
**Entrada**
A entrada contém vários casos de teste. A primeira linha de um caso de teste contém um inteiro N indicando o número de botas individuais entregues. Cada uma das N linhas seguintes descreve uma bota, contendo um número inteiro M e uma letra L, separados por um espaço em branco. M indica o número do tamanho da bota e L indica o pé da bota: L = ‘D’ indica que a bota é para o pé direito, L = ‘E’ indica que a bota é para o pé esquerdo. 
Observação: o final da entrada coincide com o final do arquivo:
while (scanf("%d", &n) != EOF) {
**Saída**
Para cada caso de teste imprima uma linha contendo um único número inteiro indicando o número total de pares corretos de botas que podem ser formados. 
Restrições <br>
• 2 ≤ N ≤ 104 <br>
• N é par <br>
• 30 ≤ M ≤ 60 <br>
• L   {∈ {D, E} <br>
**Exemplos**
**Exemplo de entrada**|**Saída para o exemplo de entrada**
:--------------------------------------------------------
440 D                 |2
41                    |1
E41                   |
D40                   |
E638                  |
E39                   |
E40                   |
D38                   |
D40                   |
D37                   |
E                     |
16. Criar um programa em C que leia os elementos de uma matriz inteira n x n e: <br>
a. escreva os elementos da diagonal principal; <br>
b. escreva todos os elementos, exceto os elementos da diagonal principal; <br>
c. escreva os elementos da diagonal secundária.
17. Escreva um programa em C que declare uma matriz 10 x 10. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.
18. Qual o valor de cada um dos elementos da matriz mat inicializa abaixo?
int mat[4][5] = { { [1] = 10}, [3] = { 15, [4] = -1 } };
19. Implemente um programa que dadas duas matrizes n x m de números reais e escreva uma terceira com os maiores elementos entre as duas primeiras.
20. Desenvolva um programa em C para entrar com os valores para uma matriz An x m. Gerar e imprimir
At. A matriz transposta é gerada trocando linha por coluna.
21. Escreva um programa em C que gere uma matriz 5 x 6 de inteiros. Leia também um valor inteiro x. O programa deverá fazer uma busca desse valor na matriz e, ao final escrever sua localização (linha e coluna) ou uma mensagem de “não encontrado”.
22. Implemente um programa em C que exibe um triângulo de Pascal de ordem n, para 1 < n <= 20. Considere uma matriz quadrada de ordem n, o triângulo de Pascal segue a seguinte regra de formação: <br>
a) todos os elementos da primeira coluna da matriz são iguais a 1; <br>
b) todos os elementos da diagonal principal da matriz também são iguais a 1; <br>
c) para os demais elementos são obtidos pela soma do elemento da mesma coluna na linha de cima com o seu vizinho esquerdo; <br>
d) os elementos acima da diagonal principal não são exibidos. <br>
Abaixo é mostrado um triângulo de Pascal de ordem 5: <br>
1 <br>
1 1 <br>
1 2 1 <br>
1 3 3 1 <br>
1 4 6 4 1
23. Criar um programa em C que carregue uma matriz 12 x 4 com os valores das vendas de uma loja, em que cada linha represente um mês do ano, e cada coluna, uma semana do mês. Calcule e imprima: <br>
a) O total vendido em cada mês; <br>
b) O total vendido em cada semana durante todo o ano; <br>
c) O total vendido no ano.
24. A empresa Evite Desperdício tem registrado numa tabela os consumos mensais de energia elétrica dos anos 2016-2018. Cada linha representa um ano e cada coluna um mês. Considerando esses dados, fazer um programa em C que imprima: <br>
a) o consumo médio em cada um dos meses destes 3 anos; <br>
b) o mês/ano em que a empresa gastou mais energia nestes 3 anos. Considere que não há empate.
25. Criar um programa em C que deixe entrar com valores para uma matriz de ordem n e verificar se ela é ou não uma matriz triangular superior. Matriz triangular superior é uma matriz onde todos os elementos de posições acima da diagonal principal são diferentes de 0 e todos os elementos demais elementos são iguais a 0.
26. Criar um programa em C que deixe entrar com valores para uma matriz de ordem n e verifique se ela é ou não uma matriz identidade. Matriz identidade é aquela em que todos os elementos da diagonal principal são iguais a 1 e os demais elementos são iguais a 0.
</div>