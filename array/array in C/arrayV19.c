/*Um armazém trabalha com 100 mercadorias diferentes identificadas pelos números inteiros de 1 a 100. O 
dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele tem uma tabela que 
indica, para cada mercadoria, o preço de venda. Escreva um algoritmo para calcular o faturamento mensal do 
armazém. A tabela de preços é fornecida seguida pelos números das mercadorias e as quantidades vendidas. 
Quando uma mercadoria não tiver nenhuma venda, é informado o valor zero no lugar da quantidade.*/

#include <stdio.h>

#define NUM_MERCADORIAS 100

int main(void) {
    float precos[NUM_MERCADORIAS + 1];
    int vendas[NUM_MERCADORIAS + 1];
    double faturamentoTotal = 0;

    for(int i = 1; i <= NUM_MERCADORIAS; i++) {
        printf("Digite os precos das mercadorias:\n");
        printf("Mercadoria %d:\n", i);
        scanf("%f",&precos[i]);
    }

    for(int i = 1; i <= NUM_MERCADORIAS; i++) {
        printf("Digite as quantidades vendidas:\n");
        scanf("%d",&vendas[i]);
        if(vendas[i] == 0) {
            printf("0 Vendas\n");
        }else {
            printf("Quantidade vendida: %d:\n", vendas[i]);
        } 
    }

    for(int i = 1; i <= NUM_MERCADORIAS; i++) {
        faturamentoTotal += precos[i] * vendas[i];
    }
    printf("Faturamento mensal total: R$%.2f\n",faturamentoTotal);

    return 0;
}