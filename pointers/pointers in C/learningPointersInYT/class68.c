//Lista concatenada e funcao que retorna ponteiro
#include <stdio.h>

struct lista {
    int valor;
    struct lista *proximo;
};

struct lista *procurarValor(struct lista *pLista, int valor) {
    while(pLista != (struct lista *)0) {
        if(pLista->valor == valor) {
            return(pLista);
        } else {
            pLista = pLista->proximo;
        }
    }
    return(struct lista *)0;
}

int main(void) {
    struct lista *procurarValor(struct lista *pLista, int valor);
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = 0;

    int valor;
    printf("Digite valor da pesquisa:\n");
    scanf("%d",&valor);

    resultado = procurarValor(gancho, valor);

    if(resultado == NULL) {
        printf("Valor nao encontrado.\n");
    } else {
        printf("Valor: %d encontrado\n", resultado->valor);
    }

    return 0;
}