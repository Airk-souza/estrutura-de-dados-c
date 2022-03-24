#include <stdio.h>
#include <stdlib.h>

struct exemplo{
	int a;
	char b;
	float c;

};

int main(void){

	struct exemplo ex;
	printf("Informe o valor de a:\n");
	scanf("%d", &ex.a);
	getchar();

	printf("Informe o valor de b:\n");
	scanf("%c", &ex.b);
	getchar();

	printf("Informe o valor de c:\n");
	scanf("%f", &ex.c);
	getchar();

	printf("Valor de A: %d,\n Valor de B: %c,\n Valor de c: %2.f. \n" ,ex.a ,ex.b ,ex.c);
	printf("\n");
	return 0;


}
