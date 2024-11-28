/*Faça um programa em C que calcule a área de um
retângulo, para isso o programa deve ler a altura e a
base. O cálculo deve ser feito em uma função. Após
calcular o programa deve imprimir o valor da área do
retângulo*/

#include <stdio.h>

//Função para calcular a area do retangulo.
float area_retangulo(float altura, float base) {
    return altura * base;
}

//Função principal.
int main(void) {
    float altura;
    float base;

    //Entrada de dados.
    printf("Digite a altura do retangulo:\n");
    scanf("%f",&altura);

    printf("Digite a base do retangulo:\n");
    scanf("%f",&base);

    //Chama a função.
    float area = area_retangulo(altura, base);

    //Imprimi o resultado
    printf("Area do retangulo: %.2f\n", area);

    return 0;
}