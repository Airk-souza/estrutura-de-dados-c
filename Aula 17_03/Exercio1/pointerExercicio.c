#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 3, b = 5;
	int *p=&a, *q=&b;
// *p recebe a soma dos valores de *p e *q;
// *p agora vale 8;
// *q = 8 - 5;
// *q = 3;
// *p =  8-3;
// *p = 5;
//
// Portanto a = 5 e b = 3;	
	*p=*p + *q;
	*q=*p - *q;
	*p=*p - *q;

	printf("%d, %d \n" ,a ,b);
	


	return 0;

}

