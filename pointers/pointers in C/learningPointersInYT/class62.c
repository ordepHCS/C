//Ponteiros "char, int, double".
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	/*printf("Endereco de X = %d - Valor X = %d\n", pX, *pX);
	printf("Endereco de Y = %d - Valor Y = %2.lf\n", pY, *pY);
	printf("Endereco de Z = %d - Valor de Z = %c\n", pZ, *pZ);*/
	
	/*double soma = *pX + *pY;
	printf("Valor da soma: %lf\n", soma); R = 30.50*/
	
	/*int *resultado;
	resultado = 6487548; //Recebe o endereço de X.
	printf("Valor de X : %d\n", *resultado);*/
	
	return 0;
}