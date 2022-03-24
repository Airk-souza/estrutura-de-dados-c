#include <stdio.h>

	 int main(void){
	
	 int numeros[10];
	 int i;

	 for (i = 0; i < 10; ++i) {
	 	printf("Informe o numero da posicao %d:\n", i);
		scanf("%d", &numeros[i]);
	 }

	 for (i = 0; i< 10; ++i) {
	 	printf("Valor na posicao %d é: %d. \n",i , numeros[i]);
	 }
	return 0;
}
