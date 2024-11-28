/*Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias), não ocorreu temperatura 
inferior a 15oC nem superior a 40oC. As temperaturas verificadas em cada dia estão disponíveis em uma 
unidade de entrada de dados.
Fazer um algoritmo que calcule e imprima:
 - A menor temperatura ocorrida;
 - A maior temperatura ocorrida;
 - A temperatura média;
- O número de dias nos quais a temperatura foi inferior à temperatura média.*/

#include <stdio.h>

#define SIZE 121

int main(void) {
    int vetor[SIZE];
    int temperatura[SIZE];
    int mediaTemperatura;

    for(int i = 0; i < SIZE; i++) {
        printf("Digite uma temperatura:\n");
        scanf("%d",&temperatura[i]);
        vetor[i] = temperatura[i];
    }

    int maior = vetor[0];
    int menor = vetor[0];
    int soma = 0;

    for(int i = 0; i < SIZE; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
        soma += vetor[i];    
    }

    printf("Menor temperatura: %d\n", menor);
    printf("Maior temperatura: %d\n", maior);

    for(int i = 0; i < SIZE; i++) {
        mediaTemperatura = soma / SIZE;
    }
    printf("Media das temperaturas: %d\n", mediaTemperatura);

    for(int i = 0; i < SIZE; i++) {
        if(vetor[i] < mediaTemperatura) {
            printf("Temperatura inferior a media: %d\n",vetor[i]);
        }
    }

    return 0;
} 