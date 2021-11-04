Escreva um programa em C para controlar as movimentações de uma conta bancária.
O programa deve possuir as seguintes funcionalidades:<br>
* Cadastro de contas: deve permitir que sejam cadastradas as informações das contas
bancárias de clientes: número da conta, nome do cliente e saldo da conta. Utilize a
estrutura conta, mostrada posteriormente, para representar as informações da conta
bancária de um cliente. O número da conta deve ser um número sequencial gerado
automaticamente pelo sistema e mostrado no início do cadastro.
* Listagem das contas bancárias cadastradas: o sistema deve gerar uma listagem no
formato de tabela de todas as contas bancárias cadastradas, mostrando o número da
conta, nome do cliente e saldo da conta.
* Cadastro de uma movimentação: deve permitir que sejam cadastradas as informações
de uma movimentação (depósito ou saque) em uma conta bancária, previamente
cadastrada.   Utilize   a   estrutura  movimentacao,   mostrada   posteriormente,   para
representar as informações de uma movimentação, que pode ser um depósito ou um
saque. O sistema deve solicitar o número da conta e verificar se há uma conta bancária
cadastrada com este número. Caso negativo, exibir uma mensagem de erro e
interromper o depósito. Se houver uma conta bancária cadastrada com o número
fornecido, exibir o nome do cliente e solicitar a data, o tipo da movimentação (saque
ou depósito) e o valor da movimentação. Não deve ser permitido informar um valor
menor ou igual a zero. Após a realização da movimentação, o saldo da conta bancária
deve ser atualizado e exibido.
* Listagem das movimentações de uma conta bancária realizadas em um período: o
sistema deve solicitar o número da conta e duas datas, uma data inicial e final de um
período. Caso a conta bancária seja válida, exibir o nome do cliente e para cada
movimentação da conta no período informado, exibir no formato de tabela, a data, o
tipo (depósito ou saque) e o valor da movimentação. O sistema deve possibilitar que
esta listagem seja exibida no vídeo ou direcionada para um arquivo do tipo texto.

O   sistema   deverá   persistir   os   dados   dos   cadastros   em   arquivos.
