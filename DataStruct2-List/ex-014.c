/* 14 - As tabelas de hash são fundamentais em computação devido à sua eficiência em operações de inserção, busca e deleção. 
Você está desenvolvendo um sistema de gerenciamento de usuários que requer acesso rápido às informações de cada usuário por meio de um identificador único 
como um nome de usuário ou ID. 

Explique como uma tabela de hash funciona, destacando o papel da função hash na determinação da posição de armazenamento dos dados. 

R = uma tabela de hash e uma estrutura de dados que mapeia chaves para valores permitindo uma busca mais rapida
e utilizada uma função hash que e uma função matematica que converte char para valores ASCII que e um numero unico que representa o char
e depois soma esses valores para ter um total e depois esse total e divido pelo tamanho da tabela e o resto da divisao e usado como indice

ex = tabela hash: table_size = 10;
     e uma chave key = "cat"
     'c' = 99;
     'a' = 97;
     't' = 116;

soma dos valores ASCII = 99 + 97 + 116 = 312

modulo com o tamanho da tabela = 312 % 10 = 2

"cat" recebe a chave = 2

este e um exemplo de uma forma basica de uma função de hash

Descreva o que são colisões em tabelas de hash e porque elas ocorrem. 

R = colisoes em tabelas hash acontecem quando a função de hash gera o mesmo indice para
diferentes chaves

ex = "Pedro" = hash key = 10
     "Rafaella" = hash key = 10

     esses dois nomes geraram o mesmo indice e eles vao "competir" pela mesma posição na tabela

e elas acontecem porque a tabela de hash tem um numero fixo de posições entao e inevitavel que diferentes entradas possam
gerar o mesmo indice.

Apresente pelo menos dois métodos para resolver colisões em tabelas de hash, explicando as vantagens e desvantagens de cada um. 

R = 1 - como foi citado em sala um metodo para resolver uma colisao em uma tabela de hash e usando listas encadeadas ou seja
em vez de armazenar o valor diretamente na posicao indicada pelo indice a tabela de hash armazena uma lista para cada indice
e quando acontecer uma colisão o novo valor e adicionado a lista existente no indice

esse metodo e bem simples de implementar porem pode ser ruim e lento caso acorra muitas colisões porque as listas vao ficar longas
e uma lista encadeada funciona navegando indice por indice ate chegar no elemento

    2 - na minha pesquisa sobre alguns outros metodos para lidar com essas colisoes eu escolhi o metodo perfect hashing
    o perfect hashing tentar criar uma funcao hash que nao causa colisões usando uma tecnica que mapeia chaves exclusivamente para indices da tabela

    o perfect hashing e dividido em duas fases = construção da função hash e funções de hash secundarias
*/