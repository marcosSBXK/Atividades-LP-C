# Lista de Exercícios – Estruturas
1. O que está errado nas definições das estruturas em C abaixo:<br>
a) structure ponto { int x, y; };<br>
b) struct { int x; int y; };<br>
c) struct ponto ( int x; int y; );<br>
d) struct ponto { int x; int y; }<br>

2. Considere a estrutura data abaixo:
```
  struct data {
     int dia;
     char mes[10];
     int ano;
  };
```
Quais   instruções   inicializam   corretamente   o   valor   do   membro  dia  com   17,   o   de  mes
"junho" e o valor de ano com 2020?<br>
a) struct data dt1 = { 17, "junho", 2020 };<br>
b) struct data dt2 = { 17, .ano = 2020, "junho" };<br>
c) struct data dt3 = { .mes = "junho", 2020, .dia = 17 };<br>
d) struct data dt4 = { .ano = 2020, .dia = 17, "junho" };<br>
e) struct data dt5 = { .ano = 2020, .mes = "junho", 17 };<br>

3. Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os
seguintes campos:
* marca: string de tamanho 30
* ano: inteiro 
* cor: string de tamanho 15 
* preco: real<br>

a) Escrever a definição da estrutura carro.<br>
b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20.<br>

Crie um menu para:<br>
c) Cadastrar um carro no vetor vetcarros.<br>
d) Listar todos os carros com preço menor ou igual a um valor fornecido pelo usuário;<br>
e) Listar todos os carros de uma determinada marca fornecida pelo usuário;<br>

4. Escreva um programa em C que define estruturas para representar as seguintes entidades:<br>
a) Processador: tem como características a frequência e o fabricante;<br>
b) Monitor:   tem   como   características   o   tamanho   (em   polegadas),   o   tipo   (LCD,   CRT,
Plasma, LED, etc.) e o fabricante;<br>
c) Computador: tem como características o processador, o monitor, a capacidade de disco
rígido e de memória RAM.<br>
O programa deve cadastrar n computadores e depois listar os dados daqueles computadores
com processador com frequência superior 2 GHz, com monitor maior que 17” e capacidade
de memória RAM maior ou igual a 4 GB.
5. Considere   que   exista   uma   estrutura   com   os   seguintes   membros:  codigo_cliente  e
nome_cliente  e   uma   outra   estrutura   com   os   seguintes   membros:  num_compra,
valor_compra, codigo_cliente. Faça um programa que:
* Inclua clientes, não permitindo que dois clientes possuam o mesmo código;
* Inclua compras, verificando se o código do cliente informado já está cadastrado. Caso não
esteja, não permita a inclusão. O número da compra deve ser um número sequencial gerado
pelo programa;
* Liste todos os clientes cadastrados;
* Liste todas as compras de um determinado cliente, dado seu código;
* Remova um determinado cliente. Antes de executar a remoção, verifique se o cliente possui
alguma compra. Se possuir, mostrar a mensagem “Exclusão não permitida”. Caso contrário,
proceder a exclusão.
6. Faça um programa que utilize as seguintes informações:


Consultas | Pacientes | Médicos
--------- | --------- | -------
Número do prontuário | Código do paciente | Código do médico
Data da consulta | Nome do paciente | Nome
Horário da consulta | Sexo | Especialidade
Código do médico | Idade | 
Código do paciente | | 

* Crie rotinas para realizar a inclusão no cadastro de médicos e pacientes;
* Crie rotinas para listar todos os médicos e pacientes cadastrados;
* Crie uma rotina para cadastrar uma consulta. Verifique se o código do médico e do paciente
existem. Não permita que duas ou mais consultas sejam marcadas no mesmo dia e horário
para o mesmo médico;
* Crie   uma   rotina   para   mostrar   todas   as   consultas   realizadas   por   um   médico   numa   data
qualquer, escolhidos pelo usuário.
7. Considere as definições abaixo:
```
  typedef union {
      int ivalue;
      double dvalue;
      char str[20];
  } flexivel;
```
Quais das instruções abaixo são corretas?
```
  (   ) flexivel var1 = {"fatec"};
  (   ) flexivel var2 = {.dvalue = 2.5} ;
          printf("%d\n", var2.ivalue);
  (   ) flexivel var3[] = {{5}, {.dvalue = 0.75}, {.str = "teste"}};
  (   ) union flexivel var4 = {10}; 
  (   ) flexivel var5 = {5, .dvalue = 7.5, .str = "OK"};
```
8. Declare   uma   enumeração   chamada  resposta  que   defina   as   constantes  nao,  sim  e
talvez com os valores 0, 1 e 2, respectivamente
9. Declare   uma   enumeração   chamada  direcoes  que   defina   as   constantes  norte,  sul,
leste e oeste com os valore 90, 270, 0 e 180, respectivamente.
10. Quais os valores das constantes da enumeração definida a seguir?<br>
`typedef enum { EU = 1, TU, ELE, NOS = 10, VOS, ELES } pronome_reto;`
