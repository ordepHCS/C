/*1 - Crie um vetor Cadastro com 5 elementos
  2 - Permita ao usuario entrar com dados para preencher esses 5 cadstros
  3 - Encontre a pessoa com maior idade entre os cadastros
  4 - Encontre as pessoas do sexo masculino
  5 - Encontre as pessoas com salario maior que 1000
  6 - Imprima os dados*/

#include <stdio.h>

#define CADASTRO 5

struct Pessoa {
    char nome[50];
    int idade;
    int codigoSexo;
    double salario;
};

int main(void) {
    struct Pessoa pessoas[CADASTRO];
    int vetor[CADASTRO];

    for(int i = 0; i < CADASTRO; i++) {
        printf("Digite seu nome:\n");
        scanf("%s",pessoas[i].nome);

        printf("Digite sua idade:\n");
        scanf("%d",&pessoas[i].idade);

        printf("Digite o codigo do seu sexo (1 para masculino - 2 para feminino):\n");
        scanf("%d",&pessoas[i].codigoSexo);
        if(pessoas[i].codigoSexo == 1) {
            printf("Masculino.\n");
        }else if(pessoas[i].codigoSexo == 2) {
            printf("Feminino.\n");
        }else {
            printf("Error.\n");
        }

        printf("Digite seu salario:\n");
        scanf("%lf",&pessoas[i].salario);
    }

    int maior = vetor[0];

    for(int i = 0; i < CADASTRO; i++) {
        if(pessoas[i].idade > maior) {
            maior = pessoas[i].idade;
            printf("Pessoa com a maior idade e: %s com %d anos\n", pessoas[i].nome, pessoas[i].idade);
        }
    }
    printf("\n");
    printf("Todas as pessoas do sexo masculino:\n");
    for(int i = 0; i < CADASTRO; i++) {
        if(pessoas[i].codigoSexo == 1) {
            printf("Nome: %s\n", pessoas[i].nome);
        }
    }
    printf("\n");
    printf("Pessoas com salario maior que R$ 1000.00:\n");
    for(int i = 0; i < CADASTRO; i++) {
        if(pessoas[i].salario > 1000) {
            printf("Nome: %s\n", pessoas[i].nome);
        }
    }

    return 0;
}