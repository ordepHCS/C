/*Construa um algoritmo para calcular a média de valores PARES e ÍMPARES, de 50 números que serão 
digitados pelo usuário. Ao final o algoritmo deve mostrar estas duas médias. O algoritmo deve mostrar também 
o maior número PAR digitado e o menor número ÍMPAR digitado. Esses dados devem ser armazenados em 
um vetor. Além disso, devem ser impressos os valores PARES maiores que a média PAR, bem como os 
valores ÍMPARES menor que a média ÍMPAR.*/

#include <stdio.h>

int main(void) {
    int valorPar[50];
    int valorImpar[50];
    int valor;
    int quantidadePar = 0;
    int quantidadeImpar = 0;
    double mediaPar = 0;
    double mediaImpar = 0;

    for(int i = 0; i < 50; i++) {
        printf("Digite um valor\n");
        scanf("%d",&valor);
        if(valor %2 == 0) {
            valorPar[quantidadePar] = valor;
            printf("%d e par\n", valorPar[quantidadePar]);
            quantidadePar++;
        }else {
            valorImpar[quantidadeImpar] = valor;
            printf("%d e impar\n", valorImpar[quantidadeImpar]);
            quantidadeImpar++;
        }
    }

    for(int i = 0; i < 50; i++) {
        mediaPar += valorPar[i];
    }
    mediaPar /= quantidadePar;

    for(int i = 0; i < 50; i++) {
        mediaImpar += valorImpar[i];
    }
    mediaImpar /= quantidadeImpar;

    printf("Media dos pares: %.2lf\n", mediaPar);
    printf("Media dos impares: %.2lf\n", mediaImpar);

    int maior = valorPar[0];
    int menor = valorImpar[0];
    
    for(int i = 0; i < 50; i++) {
        if(valorPar[i] > maior) {
            maior = valorPar[i];
        }
    }

    for(int i = 0; i < 50; i++) {
        if(valorImpar[i] < menor) {
            menor = valorImpar[i];
        }
    }
    
    printf("Maior numero par: %d\n", maior);
    printf("Menor numero impar: %d\n", menor);

    for(int i = 0; i < 50; i++) {
        if(valorPar[i] > mediaPar) {
            printf("%d\n",valorPar[i]);
        }
    }

    for(int i = 0; i < 50; i++) {
        if(valorImpar[i] < mediaImpar) {
            printf("%d\n", valorImpar[i]);
        }
    }

    return 0;
}