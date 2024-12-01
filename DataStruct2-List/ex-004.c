// nao usei fontes de pesquisa ou algo que me ajude a responder pos a questão foi respondida em sala de aula
// mas o livro "Entendo Algoritmos" me ajudou bastante em seu cap sobre notacao big O

/*A função a seguir verifica se um número é primo. */
int primo(int n) {
    if (n == 2){
        return 1; // Verdadeiro
    }
    if (n <= 1) {
        return 0; // Falso
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // Falso
        }
    }
    return 1; // Verdadeiro
}

/* a) Qual é a complexidade temporal desse algoritmo no melhor caso? 

      R: quando n for 2 e O(1) se for maior que 2 mas e divisivel por algum numero menor por ex: 4 nesse caso depende muito da entrada porem o melhor caso seria O(n). 

   b) Qual é a complexidade temporal desse algoritmo no pior caso? 
      
      R: no pior caso o algoritmo vai verificar todos os valores de 2 ate n - 1 sem encontrar nenhum valor divisel o que pode acontecer caso nao seja primo
      nesse caso a complexidade do loop e O(n - 2) que simplica para O(n)
*/