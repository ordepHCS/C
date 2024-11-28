/*Uma grande firma deseja saber quais os três empregados mais recentes. Fazer um algoritmo para ler um 
número indeterminado de informações (máximo de 300) contendo o número do empregado e o número de 
meses de trabalho deste empregado e imprimir os três mais recentes.
Observações: A última informação contém os dois números iguais a zero. Não existem dois empregados 
admitidos no mesmo mês*/

#include <stdio.h>

#define NUM_INFORMACOES 300

int main(void) {
   int empregados[NUM_INFORMACOES];
   int mesesTrabalho[NUM_INFORMACOES];
   int numEmpregado;
   int contador = 0;
   
   do {
    printf("Digite o numero (ou 0 para cancelar)\n");
    scanf("%d",&numEmpregado);
    if(numEmpregado == 0)
        break;
    printf("Digite o numero de meses:\n");
    scanf("%d",&mesesTrabalho[contador]);
    
    empregados[contador] = numEmpregado;
    contador++;

    } while(contador < NUM_INFORMACOES);

    //nesta questão foi aplicado uma matriz.
    //Método da bolha(organização) aprendi com ia :)
    /*Ordena os valores em forma decrescente entao a posição atual e comparada com a prox posição 
    e se a posição atual for maior que a posição posterior é realizada a troca de valores na posição.*/
    for(int i = 0; i < contador; i++) {
        for(int j = 0; j < contador - i - 1; j++) {
            if(mesesTrabalho[j] < mesesTrabalho[j + 1]) {
                int tempoMeses = mesesTrabalho[j];
                mesesTrabalho[j] = mesesTrabalho[j + 1];
                mesesTrabalho[j + 1] = mesesTrabalho;

                int tempoEmpregado = empregados[j];
                empregados[j] = empregados[j + 1];
                empregados[j + 1] = tempoEmpregado;
            }
        }
    }

    printf("3 empregados mais recentes sao:\n\n");
    for(int i = 0; i < (contador < 3 ? contador : 3); i++) {//"?" operador ternário: cria expressões condicionais. ":" operador ternário: separa as expressões que devem ser avaliadas.
        printf("Empregado %d: %d meses de trabalho\n", empregados[i], mesesTrabalho[i]);
    }

    return 0;
}