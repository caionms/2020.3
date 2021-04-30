Roteiro:
1. Boa tarde, nossa dupla somos eu, Caio Nery e Luca Argolo, e decidimos para esse trabalho criar uma caixa de instrumentos, onde o usuário pode escolher um dos instrumentos da lista e tocar notas desse. Luca vai mostrar então como funciona o programa.

2. Para criar nosso programa, nós primeiro criamos uma classe instrumento que é uma classe abstrata, que possui um nome, um tipo e um método para tocar uma nota.
A partir dela através da herança criamos duas classes abstratas que são instrumento de corda e instrumento de sopro, e novamente por herança criamos os instrumentos disponiveis para nossa aplicação, que possuem um arraylist de notas que serão reproduzidas. 
Na versão atual do programa, esses instrumentos são guitarra, violão, violino, baixo, saxofone e flauta.

3. Para a criação da nossa aplicação utilizamos o Swing, para gerar nossa interface, fazendo sobreposição dos métodos das classes disponíveis dessa biblioteca, dessa forma temos a janela principal onde é possível escolher qual instrumento deseja tocar e ao clicar em um dos botões, abrimos uma nova janela com os botões das notas a serem tocadas.



Obs:

Sobrecarga: Não utilizamos sobrecarga no trabalho por não achar necessário para o projeto em questão.

Sobreposição: Utilizamos sobreposição nos métodos das classes das bibliotecas Swing e JavaFX.

Composição: Utilizamos composição, por exemplo na classe instrumento, um dos atributos dessa classe é um objeto da classe Tipo.

Herança: Utilizamos herança nas classes dos intrumentos, onde o instrumento de corda e de sopro são extensões de instrumento, e os instrumentos guitarra, violão, etc por sua vez são extensões das classes instrumentod e corda ou instrumento de sopro.

Ligação Dinâmica: Trabalhamos com ligação dinâmica, por exemplo quando nossa classe InstrumentoFrame, responsável por criar os botões com as notas, chama o método de tocar de um objeto instrumento (que não é especificado como instrumento de sopro ou instrumento de corda, muito menos como guitarra, violino, etc), pois nessa classe seu único atributo é um objeto da classe instrumento. / Trabalhamos com ligação dinâmica, por exemplo quando nossa classe CaixaDeMusica possui como atributos objetos da classe instrumentos, mas que são instâncias com o new com as classes de baixo, flauta, violão, etc. (dessa forma a classe instrumento vai ser o tipo de referência e os baixo, flauta, etc vão ser os tipos efetivos dos objetos referenciados)

Polimorfismo: Utilizamos polimorfismo, pois nossa classe CaixaDeInstrumentos enxerga apenas o objeto instrumento, ou seja ele não enxerga ou não sabe da existência do instrumento de sopro ou instrumento de corda, muito menos dos instrumentos em especificos, ele trabalha apenas com a classe instrumento.

Campos estáticos: Utilizamos campos estáticos por exemplo nos atributos estáticos da classe CaixaDeInstrumento, onde temos atributos estáticos para cada tipo de instrumento.

Cast: Não utilizamos cast no trabalho por não achar necessário para o projeto em questão.

Classes abstratas: Temos 3 classes abstratas no trabalho, Instrumento, InstrumentoDeSopro e InstrumetoDeCorda.

Interface: Não utilizamos interface no trabalho por não achar necessário para o projeto em questão.

Tratamentos de exceção: Não utilizamos tratamentos de exceção no trabalho por não achar necessário para o projeto em questão.

Pacotes: Usamos pacotes para organizar nosso projeto.
