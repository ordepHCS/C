#include <stdio.h>

#define ALUNO_VALUE 2
#define ARRAY_NAME_VALUE 100
#define ARRAY_CURSO_VALUE 50

typedef struct {
    char nome[ARRAY_NAME_VALUE];
    int idade;
    char curso[ARRAY_CURSO_VALUE];
} Aluno;

void selectionSort(Aluno alunos[], int n) {
    int minIndex;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (alunos[j].idade < alunos[minIndex].idade) {
                minIndex = j;
            }
        }
        Aluno temp = alunos[i];
        alunos[i] = alunos[minIndex];
        alunos[minIndex] = temp;
    }
}

int main(void) {
    Aluno alunos[ALUNO_VALUE];
    int n = ALUNO_VALUE;

    for (int i = 0; i < n; i++) {
        printf("Digite seu nome:\n");
        scanf("%s", alunos[i].nome);

        printf("Digite sua idade:\n");
        scanf("%d", &alunos[i].idade);

        printf("Digite seu curso:\n");
        scanf("%s", alunos[i].curso);
    }

    selectionSort(alunos, n);

    printf("Alunos ordenados por idade (do mais novo ao mais velho):\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Curso: %s\n\n", alunos[i].curso);
    }
    printf("O aluno mais novo e: %s com %d anos.\n", alunos[0].nome, alunos[0].idade);
    printf("O aluno mais velho e: %s com %d anos.\n", alunos[n - 1].nome, alunos[n - 1].idade);
    return 0;
}
