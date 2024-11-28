/*Faça um progarama que armazene em um registro de dados (estrutura composra) os dados de um funcionario
de uma empresa, compostos de:
Nome, Idade, Sexo(M/F), CPF, Data de Nascimento, Código do setor onde trabalha(0-99),
Cargo que ocupa(String de ate 30 char) e Salario.
Os dados devem ser digitados pelo usuario, armazenados na estrututra e exibidos na tela.*/

#include <stdio.h>

struct Funcionario {
    char nome[50];
    int idade;
    char sexo[50];
    char cpf[50];
    char dataNascimento[50];
    char codigoSetor[99];
    char cargo[30];
    double salario;
};

int main(void) {
    struct Funcionario funcionarios;

    //Entrada de dados.
    printf("Digite seu nome:\n");
    scanf("%s",funcionarios.nome);

    printf("Digite sua idade:\n");
    scanf("%d",&funcionarios.idade);

    printf("Digite seu sexo:\n");
    scanf("%s",funcionarios.sexo);

    printf("Digite seu CPF:\n");
    scanf("%s",funcionarios.cpf);

    printf("Digite sua data de nascimento:\n");
    scanf("%s",funcionarios.dataNascimento);

    printf("Digite o codigo do seu setor:\n");
    scanf("%s",funcionarios.codigoSetor);

    printf("Digite seu cargo:\n");
    scanf("%s",funcionarios.cargo);

    printf("Digite seu salario:\n");
    scanf("%lf",&funcionarios.salario);

    printf("\n");
    
    //Imprimir os dados armazenados pelo usuario.
    printf("Nome: %s\n",funcionarios.nome);
    printf("Idade: %d\n",funcionarios.idade);
    printf("Sexo: %s\n",funcionarios.sexo);
    printf("CPF: %s\n", funcionarios.cpf);
    printf("Data de nascimento: %s\n",funcionarios.dataNascimento);
    printf("Codigo do setor: %s\n", funcionarios.codigoSetor);
    printf("Cargo: %s\n",funcionarios.cargo);
    printf("Salario: %.2lf\n",funcionarios.salario);

    return 0;
}