/* Escreva um algoritmo que receba a altura de 10 atletas. Esse algoritmo deve imprimir a altura daqueles 
atletas que tem altura maior que a média*/

#include <stdio.h>

int main(void) {
    int vetor[10];
    double altura;
    double media = 1.80;

    for(int i = 0; i < 10; i++) {
        vetor[i] = i;
    }

    for(int i = 0; i < 10; i++) {
        printf("Digite sua altura\n");
        scanf("%lf",&altura);
        vetor[i] = altura;
    }

    for(int i = 0; i < 10; i++) {
        printf("%lf\n",vetor[i]);
        if(vetor[i] < media) {
            printf("Fora da media.\n");
        }
    }   
    
    return 0;
}