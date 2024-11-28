/*Elabore um programa que leia um valor e imprima:
1 - se o valor é par ou ímpar
2 - se é divisível por 5
3 - seu fatorial.
4 -  sua tabuada*/

#include <stdio.h>

//Var Global.
int valor;

//Função para Par ou Impar.
void valo_par_impar() {
    if(valor %2 == 0) {
        printf("O valor e: Par\n");
    }else {
        printf("O valor e: Impar\n");
    }
}

//Função para os valores divididos por 5.
void dividido_por_cinco() {
    if(valor %5 == 0) {
        printf("O valor e divisivel por 5\n");
    }else {
        printf("O valor nao e divisivel por 5\n");
    }
}

//Função para o fatorial dos valores.
double fatorial() {
    double fatorial = 1;
    for(int i = 1; i <= valor; i++) {
        fatorial *= i;
    }
    return fatorial;
}

//Função para a tabuada do valor.
void tabuada() {
    printf("Tabuada do: %d\n",valor);
    for(int i = 0; i <= 10; i++) {
        int resultado = valor * i;
        printf("%d x %d = %d\n", valor, i, resultado);
    }
}

//Função principal.
int main(void) {
    
    //Entrada de dados.
    printf("Digite um valor:\n");
    scanf("%d",&valor);

    //Chamando as funções e imprimindo os dados com base no valor digitado.
    valo_par_impar();
    dividido_por_cinco();
    printf("Fatorial de %d! e: %.2lf\n", valor, fatorial());
    tabuada();

    return 0;

}

