/*Escreva um algoritmo que leia um conjunto de 50 fichas correspondente à alunos e armazene-as em 
vetores, cada uma contendo, a altura e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se 
for feminino), e
calcule e imprima:
 - A maior e a menor altura da turma;
 - As mulheres com altura acima da média da altura das mulheres;
 - As pessoas com altura abaixo da média da turma.*/

#include <stdio.h>

int main(void) {
    int ficha[50];
    double altura;
    double mediaTurma = 1.80;
    double alturaMulheres[50];
    double mediaMulheres = 1.65;
    int codigoSexo;

    for(int i = 0; i < 50; i++) {
        ficha[i] = i;
    }

    for(int i = 0; i < 50; i++) {
        printf("Digite sua altura\n");
        scanf("%lf",&altura);
        ficha[i] = altura;
    }

    for(int i = 0; i < 50; i++) {
        printf("Digite 1 ou 2 (1 para masculino, 2 para feminino)\n");
        scanf("%d",&codigoSexo);
        if(codigoSexo == 1) {
            printf("Masculino\n");
        }else if(codigoSexo == 2) {
            printf("Feminino\n");
            printf("Digite sua altura novamente\n");
            scanf("%lf",&alturaMulheres);
        }    
    }

    double maior = ficha[0];
    double menor = ficha[0];

    for(int i = 0; i < 50; i++) {
        if(ficha[i] > maior) {
            maior = ficha[i];
        }
        if(ficha[i] < menor) {
            menor = ficha[i];
        }
    }
    
    printf("Maior: %.2lf\n", maior);
    printf("Menor: %.2lf\n", menor);

    for(int i = 0; i < 50; i++) {
        printf("%lf\n",alturaMulheres);
        if(alturaMulheres[i] > mediaMulheres) {
            printf("%.2lf esta acima da media.", alturaMulheres[i]);
        }
    }

    for(int i = 0; i < 50; i++) {
        if(ficha[i] < mediaTurma) {
            printf("%.2lf esta baixo da media da turma\n", ficha[i]);
        }
    }

    return 0;
}