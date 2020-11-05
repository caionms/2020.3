# Caio Nery Matos Santos
## Começando a pensar encadeado
1. Para poder implementar a `remoção lógica`, eu criei um vetor de mesmo tamanho do vetor principal, formado por booleanos, onde o índice que aponta para o elemento no vetor principal, aponta para verdadeiro (caso a posição esteja livre) ou falso (caso a posição esteja ocupada) no vetor secundário. Por isso a váriavel que guarda a útima posição se tornou descartável, já que todas as posições não são mais ocupadas em ordem.

2. Como agora a váriavel que guarda a última posição perdeu o sentido, eu a retirei, dessa forma precisei modificar os construtores para agora criar e preencher o vetor de booleanos com verdadeiro, apontando que todas as posições estão livres, caso o vetor esteja vazio. E no construtor que passa outro objeto como parâmetro, eu copiava o vetor de booleanos e copiava os valores do vetor principal apenas quando na posição de mesmo índice no vetor secundário estava falso(posição ocupada).

  Criei um novo método chamado TesteLivre, que testa a partir do vetor de booleanos, se existe alguma posição livre no meu vetor principal. Além disso, modifiquei o método de posição livre, para me retornar o índice da primeira posição livre utilizando o vetor de booleanos também.

  No método para inserir um elemento, eu utilizei a o método de TesteLivre que eu criei, caso retorne verdadeiro, eu preencho dado passado como parâmetro na primeira posição livre, utilizando o método PosicaoLivre que eu modifiquei. 

  No método de buscar um elemento, eu fiz um looping por todos os elementos do vetor e testava caso a posição no vetor de booleanos for falsa, ou seja essa posição está ocupada, e se o valor no vetor principal for igual a chave passada como parâmetro, eu modifico a variável de posição passada como parâmetro para ser igual ao índice da posição do elemento encontrado e retorno verdadeiro.

  No método de remover um elemento, eu utilizava a função de buscar elemento, caso retornasse verdadeiro, eu modificava a posição retornada pela função no vetor de booleanos para verdadeiro, dessa forma meu programa vai entender que aquela posição está livre.

3. Através dos meus testes, constatei que minha implementação de remoção lógica funciona.