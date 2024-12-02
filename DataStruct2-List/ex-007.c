/* 7 - Discorra sobre o uso das seguintes estruturas para implementação de 
   pilhas e filas. Explique as limitações, as vantagens e as restrições envolvidas. 

a) Lista linear com vetor 

   R = limitações: 1 - quando tem mais elementos do que o tamanho do vetor impedindo inserir novos elementos
                   2 - quando tem menos elementos do que o tamanho do vetor acaba tendo um desperdicio
                   de memoria quando a capacidade alocada nao esta sendo utilizada

       vantagens: 1 - e util quando se sabe a quantidade de valores que se vai trabalhar garantindo o uso eficiente da memoria
       evitando realocações

b) Lista simplesmente encadeadas 

   R = limitações: 1 - para acessar um elemento precisa percorrer a lista toda e isso pode ser ruim em listas grandes
                   2 - nao da para acessar diretamente um elemento como em vetores entao operacoes de busca ou inserção em
                   posições intermediarias mais lentas

       vantagens: 1 - nao tem necessidade de alocar memoria adicional alem dos nós evitando desperdicio de espaço
                  2 - facilita inserção e remoção de elementos por não ser necessario realocar ou ajustar outras posições         

c) Lista duplamente encadeada 

   R = limitações: 1 - cada nó armazena dois ponteiros o que aumenta o uso da memoria
                   2 - mais complexa de implementar e gerenciar comparanda com a linked list por conta
                   da necessidade de atualizar dois ponteiros para cada inserção e remoção
       
       vantagens: 1 -  mais facil de navegar tanto para frente quanto para tras na lista
                  2 - operações de inserção e remoção sao mais rapidas por ser feitas em qual quer
                  ponto da lista sem precisar percorrer desde o inicio                   
*/