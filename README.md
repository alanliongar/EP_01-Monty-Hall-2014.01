# EP_01-Monty-Hall - 05/06/2014
<html>
<head>
  EP01: Problema do Silvio Santos
</head>
<body>

<center><h2>Introdu&ccedil;&atilde;o</h2></center>

O <b><a href="http://pt.wikipedia.org/wiki/Problema_de_Monty_Hall">problema de Monty Hall</a></b>, tamb&eacute;m conhecido por paradoxo de Monty Hall 
&eacute; um problema matem&aacute;tico e 
paradoxo que surgiu a partir de um show de audit&oacute;rio televisivo dos Estados 
Unidos chamado <i><a href="http://www.letsmakeadeal.com/">Let's Make a Deal</a></i>, exibido na d&eacute;cada de 1970.
No Brasil ficou conhecido como Problema do Silvio Santos.
<p>
O jogo consiste no seguinte: Silvio Santos (o apresentador) apresentava 3 portas fechadas ao concorrente, sabendo que atr&aacute;s de uma delas est&aacute; um carro (pr&eacute;mio bom) e que as outras t&ecirc;m pr&ecirc;mios de pouco valor, como por exemplo, bodes.

<ul>
    <li>Na primeira etapa o concorrente escolhe uma porta (que ainda não é aberta), na esperança de escolher aquela com o carro;</li>
    <li>A seguir, Silvio Santos, que sabe o que está atrás de cada porta, abre uma das outras duas portas que o concorrente não escolheu, atrás da qual sempre haverá um bode;</li>
    <li>Silvio então perguntará ao concorrente se ele deseja manter a escolha da porta (feita no início do jogo), ou se deseja trocar pela outra porta que se encontra fechada.</li>
    <li>O concorrente decide se quer trocar de porta ou não, e o jogo termina com o concorrente ganhando um carro ou um bode.</li>
</ul>

Qual &eacute; a estrat&eacute;gia mais l&oacute;gica? Ficar com a porta escolhida inicialmente ou mudar de porta? Com qual das duas portas ainda fechadas o concorrente tem mais probabilidade de ganhar? Por qu&ecirc;?

<center><h2>Tarefa 01:</h2></center>

Este exerc&iacute;cio-programa consiste de duas etapas.
Na primeira,
a sua tarefa ser&aacute; escrever um programa 
em linguagem C para simular uma rodada do jogo descrito acima. 
O seu programa dever&aacute; desempenhar o papel do Silvio Santos enquanto 
o usu&aacute;rio do programa desempenhar&aacute; o papel do concorrente. 
O seu programa dever&aacute; implementar os seguintes passos:

<ul>
    <li><b>O sorteio:</b> o programa escolhe, sem mostrar ao usu&aacute;rio, a porta atr&aacute;s da qual ser&aacute; colocado o carro.</li>
    <li><b>Primeira escolha:</b> o usu&aacute;rio escolhe a porta onde ele espera encontrar o carro.</li>
    <li><b>Abertura de uma porta:</b> o programa indica uma porta, diferente da escolhida pelo usu&aacute;rio, atr&aacute;s da qual se encontra um bode.</li>
    <li><b>Segunda escolha:</b> o usu&aacute;rio escolhe mudar ou n&atilde;o de porta.</li>
    <li><b>Final:</b> o programa declara o pr&ecirc;mio ganho pelo usu&aacute;rio: um carro ou um bode.</li>
</ul>

Para realizar os sorteios, voc&ecirc; deve incluir algumas bibliotecas adicionais e chamar
no in&iacute;cio do c&oacute;digo a fun&ccedil;&atilde;o <b>srand</b>, seguindo o esqueleto 
de c&oacute;digo abaixo:

  <pre class="brush: c">
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;time.h&gt;

int main(){
  /*Colocar aqui a declara&ccedil;&atilde;o das vari&aacute;veis*/

  srand(time(NULL));

  /*Colocar aqui o seu c&oacute;digo*/

  return 0;
}
  </pre>


As primeiras linhas incluem as bibliotecas necess&aacute;rias 
para uso em seu programa. A seguir, 
o gerador de 
<b>n&uacute;meros pseudo-aleat&oacute;rios</b>
&eacute; inicializado com o valor 
do tempo do rel&oacute;gio do computador
atrav&eacute;s da chamada da fun&ccedil;&atilde;o <tt>srand(time(NULL));</tt>. 
Para informa&ccedil;&otilde;es mais detalhadas sobre n&uacute;meros pseudo-aleat&oacute;rios,  
clique <a href="https://www.ime.usp.br/~pmiranda/mac110_1s14/EPs/ep01/numeros_aleatorios.html">aqui</a>.

<p>
A fun&ccedil;&atilde;o que gera n&uacute;meros aleat&oacute;rios 
em C &eacute; a <tt>rand()</tt>. Ela gera n&uacute;meros entre 0 e RAND_MAX, 
que &eacute; uma constante definida em <i>stdlib.h</i>.
Para fazer um sorteio
dentro de uma faixa de valores diferente podemos usar opera&ccedil;&otilde;es 
matem&aacute;ticas, 
como o operador de resto da divis&atilde;o: %.
<br>
Por exemplo, para fazer com que uma vari&aacute;vel 'x' receba um valor entre 0 e 9, 
fazemos: 
<font color="000000">
<pre class="saida">
x = rand() % 10;
</pre>
</font>

<br>
Para fazer com que 'x' receba um valor entre 1 e 10, fazemos:
<font color="000000">
<pre class="saida">
x = 1 + ( rand() % 10 );
</pre>
</font>

<h3>Observa&ccedil;&otilde;es:</h3>
<p>
<ul>
<li>Para o programa escolher a porta do bode, ele deve considerar dois casos. 
No primeiro caso, a escolha do usu&aacute;rio &eacute; de uma porta com um bode. 
Com isso, a escolha de outra porta com bode &eacute; &uacute;nica. No segundo caso, a escolha do usu&aacute;rio &eacute; da porta com o carro. Nesse caso, sobram duas portas com bodes. A escolha de qual das portas dever&aacute; ser aberta e mostrada ao usu&aacute;rio dever&aacute; ser feita atrav&eacute;s de sorteio.</li>

<li>O seu programa dever&aacute; finalizar depois de executar uma e somente uma 
simula&ccedil;&atilde;o do jogo.</li>

<li>As &uacute;nicas constru&ccedil;&otilde;es (comandos, fun&ccedil;&otilde;es, etc) da linguagem C que voc&ecirc; poder&aacute; usar em seu programa s&atilde;o as constantes deste enunciado e as dadas em aula.</li>
</ul>

<h3>Exemplos de partidas:</h3>
<p>
Nos exemplos, tudo que aparece em <font color="FF0000"><b>vermelho</b></font> foi digitado pelo usu&aacute;rio.
<p>
Exemplo 1:
<font color="000000">
<pre class="saida">
Problema das portas do Silvio Santos.
Escolha a porta onde esta o carro (1-3): <font color="FF0000"><b>2</b></font>
Silvio mostra que a porta 3 tem um bode.
Quer mudar de porta? (sim=1/nao=0): <font color="FF0000"><b>1</b></font>
Parabens, voce ganhou um carro!
</pre>
</font>

Exemplo 2:
<font color="000000">
<pre class="saida">
Problema das portas do Silvio Santos.
Escolha a porta onde esta o carro (1-3): <font color="FF0000"><b>1</b></font>
Silvio mostra que a porta 2 tem um bode.
Quer mudar de porta? (sim=1/nao=0): <font color="FF0000"><b>0</b></font>
Parabens, voce ganhou um bode!
</pre>
</font>


<center><h2>Tarefa 02:</h2></center>

O objetivo dessa segunda etapa &eacute;
realizar v&aacute;rias simula&ccedil;&otilde;es do jogo,
fazendo uma an&aacute;lise emp&iacute;rica da probabilidade
de ganhar o carro para cada uma das respostas, de modo a responder a
pergunta:
"Com qual das duas portas ainda fechadas o concorrente tem mais probabilidade de ganhar?"
<p>
O seu programa dever&aacute; implementar os seguintes passos: 

<ul>
<li><b>Leitura dos dados:</b> O novo programa deve solicitar o n&uacute;mero total de 
simula&ccedil;&otilde;es do jogo que ser&atilde;o realizadas
(ex: 10000), e tamb&eacute;m para qual das op&ccedil;&otilde;es 
o usu&aacute;rio deseja estimar a probabilidade de ganhar o carro: 
Porta escolhida inicialmente ou mudar de porta.</li>
<br>
<li><b>Durante cada simula&ccedil;&atilde;o do jogo:</b></li>
<br>
<ul> 
<li>A primeira escolha do participante entre as 3 portas fechadas deve ser feita
aleatoriamente por sorteio.</li>
<li>A segunda escolha do participante (se escolhe mudar ou n&atilde;o de porta)
ser&aacute; sempre a mesma lida no in&iacute;cio do programa.</li>
</ul>
<br>
<li><b>Final:</b> Ap&oacute;s a execu&ccedil;&atilde;o de todas as 
simula&ccedil;&otilde;es, o programa deve imprimir o percentual de 
vit&oacute;rias (n&uacute;mero de vezes que ganhou o carro dividido 
pelo total de simula&ccedil;&otilde;es).</li>
</ul>

<h3>Observa&ccedil;&otilde;es:</h3>
<p>
<ul>
<li>Utilize o c&oacute;digo da primeira tarefa como base, 
fazendo apenas as modifica&ccedil;&otilde;es necess&aacute;rias.</li>
</ul>

<h3>Exemplo de execu&ccedil;&atilde;o:</h3>
<p>
No exemplo, tudo que aparece em <font color="FF0000"><b>vermelho</b></font> foi digitado pelo usu&aacute;rio.

<font color="000000">
<pre class="saida">
Problema das portas do Silvio Santos.
Numero de iteracoes da simulacao: <font color="FF0000"><b>10000</b></font>
Quer mudar de porta? (sim=1/nao=0): <font color="FF0000"><b>0</b></font>
Ganhou o carro em 33.36% das vezes.
</pre>
</font>


<center><h2>INFORMA&Ccedil;&Otilde;ES SOBRE ENTREGA:</h2></center>

<ul>

<li>A primeira tarefa deve ser entregue em um arquivo com nome <tt>tarefa01.c</tt>
e a segunda parte em um arquivo <tt>tarefa02.c</tt></li>
<br>
<li>Certifique-se de que os seus programas foram realmente depositados no site do PACA. 
Para sua maior seguran&ccedil;a, imprima a p&aacute;gina de confirma&ccedil;&atilde;o 
de entrega.</li>
<br>
<li>
Os arquivos de c&oacute;digo devem ter um cabe&ccedil;alho de coment&aacute;rio com o seguinte formato: 
<font color="000000">
<pre class="saida">
/***************************************************************
 **                                                           **
 **   Fulano de Tal (&eacute; o nome do aluno)          N&uacute;mero USP   **
 **                                                           **
 ***************************************************************/

  [Seu programa]
</pre>
</font>
</li>
</ul>
  <br>
</body>
</html>
