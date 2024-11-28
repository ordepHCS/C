/*Numa corrida há 10 corredores, de número de inscrição de 1 a 10. Faça um algoritmo que leia os valores 
do número do corredor e o seu respectivo tempo na corrida. Além disso, o programa deve imprimir a 
qualificação e o tempo de corrida, do primeiro ao décimo colocado, identificando o número de inscrição do 
corredor referente àquela colocação. Suponha que não há tempos iguais.*/

#include <stdio.h>

#define NUM_CORREDORES 10

int main(void) {
    int numeros[NUM_CORREDORES];
    float tempo[NUM_CORREDORES];

    for(int i = 0; i < NUM_CORREDORES; i++) {
        printf("Digite o seu numero de corredor:\n");
        scanf("%d",&numeros[i]);

        printf("Digite o tempo de corrida:\n");
        scanf("%f",&tempo[i]);
    }

    for(int i = 0; i < NUM_CORREDORES; i++) {
        for(int j = 0; j < NUM_CORREDORES; j++) {
            if(tempo[i] < tempo[j]) {
                int tempoNumero = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = tempoNumero;

                float tempoTempo = tempo[i];
                tempo[i] = tempo[j];
                tempo[j] = tempoTempo;
            }
        }
    }

    for(int i = 0; i < NUM_CORREDORES; i++) {
        printf("%d lugar: Corredor %d | Tempo: %.2f segundos\n", i + 1, numeros[i], tempo[i]); 
    }

    return 0;
}