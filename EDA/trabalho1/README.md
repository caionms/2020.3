# Caio Nery Matos Santos
## Atividade - Listas Encadeadas - As Variantes

***Observação para teste: Meu programa considera que o arquivo .txt possui um elemento a ser adicionado em cada linha, dessa forma para rodar o programa, no terminal deve-se dar /make -> ./lista NomeDoSeuArquivo.txt .***

A partir da implementação da Lista Duplamente Encadeada e da Lista Circular, as vantagens mais visíveis são a maior facilidade na movimentação (poder escolher qual é o provável caminho mais eficiente até o seu objetivo) e controle da lista em relação a Lista Simplesmente Encadeada. 
Além disso, existem vantagens nos métodos também, por exemplo, na Lista Duplamente Encadeada a complexidade para a exclusão do último elemento da lista é de O(1), pois nós temos o nó final como um dos atributos. Enquanto que na Lista Simplesmente Encada, a complexidade para a exclusão do último elemento da lista é de O(n), já que é necessário percorrer a lista através dos nós para chegar no último elemento.
No entanto, na Lista Duplamente Encadeada, ocorre um maior gasto de espaço, pois é necessário mais nós para o controle da lista. E na Lista Circular há uma maior complexidade nos métodos da classe.

***Observação: Não é necessário um atributo ponteiro apontando para o final da Lista Circular, utilizei no meu código para melhor organização, porém a lista continua funcionando como uma Lista Circular, onde o "último elemento" aponta como próximo elemento o "primeiro elemento" e o este por sua vez aponta como elemento anterior o "último elemento".***