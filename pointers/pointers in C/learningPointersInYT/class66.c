// Passar ponteiro como parametro de uma funcao
#include <stdio.h>

void testeVariavel(int x) {
    ++x;
    //printf("x: %d\n", x);
}
void testePonteiro(int *pX) {
    ++*pX;
}
int main(void) {
    void testeVariavel(int x);
    void testePonteiro(int *pX);
    int teste = 1;
    int *pTeste = &teste;

    //testeVariavel(teste);
    testePonteiro(pTeste);

    printf("%d\n", teste);

    return 0;
}