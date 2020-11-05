# Problema 0
## Algoritmos de Ordenação
### Caio Nery Matos Santos

Para o trabalho, através de uma busca em alguns materiais como o "Algorithms Fourth Edition Part II" do Robert Sedgewick e Kevin Wayne, decidi usar o least-significant-digit first(LSD) string sort ou radix sort, pois se encaixa na proposta pedida de encontrar um algoritmo de ordenação que é capaz de ordenar lexicograficamente sequencias alfanuméricas e que possua complexidade menor que O(n²) e diferente de O(n.log(n)).

O Radix Sort ou Ordenação da Raiz é um algoritmo estável de ordenação que ordena itens identificados por chaves únicas, cada chave vai ser uma sequência de caracteres ou números, no nosso caso é uma string composta por 4 letras e 3 números, onde o algoritmo processa os dígitos individualmente.

A complexidade do Radix Sort, dado n número com x dígitos, onde cada dígito pode assumir até k valores possíveis, sendo um algoritmo que funciona de "forma linear" vai ser O(x(n+k)), pois a cada dígito iremos percorrer os dígitos na mesma posição de cada palavra no nosso vetor.
O código foi formado por duas funções, além do main. Onde a primeira função (gerarPlaca) sorteia números entra os valores da Tabela ASCII para as letras do alfabeto maiúsculas ou dos números de 0 a 9 e adicionam esses valores como char na string que é a placa, logo depois essa placa vai ser adicionada ao vetor.

A segunda função (radix) recebe o vetor de elementos que são as placas, que possuem comprimento máximo constante e por isso torna o Radix Sort mais eficiente, e então a função ordena as strings dígito-a-dígito, dessa forma tornando possível que ordenemos lexicograficamente sequencias alfanuméricas, usando uma ordenação estável para ordenar nosso conjunto de placas.

Para esse trabalho, decidi utilizar um vetor de strings para guardar as placas que serão lidas do arquivo de texto, arquivo este, gerado através da biblioteca <fstream> e preenchido pela função gerarPlaca baseado na quantidade de placas definida pelo usuário, que é declarada no geradorPlaca.h e descrita no geradorPlaca.cpp. De forma que minha função radix que ordena as placas irá ler do vetor de strings e ordena-lo através do método citado no começo desse texto.