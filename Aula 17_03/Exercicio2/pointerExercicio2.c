#include <stdio.h>

int main(int argc, char const *argv[])
{
		int inteiro = 10;
	 	double decimal = 2.5;
	 	char  caractere ='b';

	 	int *i;
	 	double *d;
	 	char *c;

	 	i = &inteiro;
	 	d = &decimal;
	 	c = &caractere;


	 	printf("%d %c %f \n", inteiro, caractere, decimal);

	 	*i = 20;
	 	*d = 5.0;
	 	*c = 'f';

	 	printf("%d %c %f \n", inteiro, caractere, decimal);

	return 0;
}