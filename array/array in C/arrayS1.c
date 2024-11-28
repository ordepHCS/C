/*Faça um programa que realize a leitura dos seguintes dados relativos
Aluno: matricula, nome, codigo da disciplina, nota1, nota2.
Considere uma turma de ate 10 alunos
armazenar os dados em um vetor e exibir na tela os dados.*/

#include <stdio.h>

#define TAMANHO_VETOR 10

struct Aluno {
    char matricula[50];
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
};

int main(void) {
    struct Aluno alunos[TAMANHO_VETOR];
    float media;

    printf("Digite os dados do aluno:\n");
    for(int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Matricula:\n");
        scanf("%s",alunos[i].matricula);

        printf("Nome:\n");
        scanf("%s",alunos[i].nome);

        printf("Codigo da disciplina:\n");
        scanf("%d",&alunos[i].codigoDisciplina);

        printf("Nota 1:\n");
        scanf("%f",&alunos[i].nota1);

        printf("Nota 2:\n");
        scanf("%f",&alunos[i].nota2);
    }
 
    for(int i = 0; i < TAMANHO_VETOR; i++) {
        media = (alunos[i].nota1 + alunos[i].nota2)/2;
        printf("Matricula: %s\n Aluno: %s\n Codigo: %d\n Nota 1: %.2f\n Nota 2: %.2f\n Media: %.2f\n",alunos[i].matricula,alunos[i].nome,
        alunos[i].codigoDisciplina,alunos[i].nota1,alunos[i].nota2,media);
        if(media >= 7.0) {
            printf("Aprovado\n");
        }else {
            printf("Reprovado\n");
        }
    }

    return 0;
}