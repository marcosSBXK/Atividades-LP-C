<p>Sua tarefa neste trabalho é desenvolver um módulo de funções em C que permita
receber e processar informações a respeito do número de contágios por Covid-19 em um
conjunto de países num determinado período de tempo.</p>
<p>A entrada de dados para o programa tem o seguinte formato: a primeira linha é
composto para o inteiro P, representando o número de países; as P linhas seguintes contém
uma string de, no máximo, 50 caracteres representando o nome de cada um dos países; depois
aparace uma linha contendo um inteiro D, representando o número de dias em que foi feita a
amostragem do número de contágios por Covid-19; as próximas P linhas contém D inteiros
cada, representando o número de contágios por Covid-19 em um país nos D dias.</p>
Por exemplo:<br>

```
3
Brasil
Estados Unidos
Argentina
10
482 502 487 352 323 1138 1119 1074 1146 1222
17050 19046 20093 19118 20463 25305 26756 28879 32525 33725
87 101 55 75 146 88 79 132 88 98
```

<p>No exemplo acima,  P  é igual 3, ou seja, são 3 países. Os nomes dos países são
“Brasil”, Estados Unidos” e “Argentina”. D é igual a 10, portanto, são 10 dias de amostragem.
O Brasil teve 482 casos no 1º dia, 502 no segundo, 487 no terceiro, e assim por diante. Os
Estados Unidos tiveram 17.050 no primeiro dia, 19.046 no segundo, 20.093 no terceiro, e
assim por diante. Enquanto a Argentina teve 87 casos no primeiro dia, 101 no segundo, 55 no
terceiro, e assim por diante.</p>
O programa deve fornecer as seguintes informações:<br>

```
a) O número total de contágios no período de D dias em cada país, no formato:
   nome-do-país: número-de-contágios
b) O dia e o número de contágios em que houve o maior número de contágios em cada país, no formato:
   nome-do-país: dia (número-de-contágios)
c) O dia e o número de contágios em que houve o maior número de contágios em todos os países, no formato:
   dia: número-de-contágios
d) O número de dias da maior sequência crescente de número de contágios em cada país, no formato:
   nome-do-país: maior-sequência-crescente
```
Para o exemplo mostrado, a saída do programa deve ser a seguinte:

```
Numero total de contagios por pais
Brasil: 7845
Estados Unidos: 242960
Argentina: 949
Dia com maior numero de contagios por pais
Brasil: 10 (1222)
Estados Unidos: 10 (33725)
Argentina: 5 (146)
Dia com maior numero de contagios
10: 35045
Maior sequencia crescente de contagios por pais
Brasil: 3
Estados Unidos: 7
Argentina: 3
```
