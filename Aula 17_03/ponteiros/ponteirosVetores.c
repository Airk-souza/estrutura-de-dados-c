#include <stdio.h>
#include <stdlib.h>

	int main(int argc, char const *argv[])
	{
		int v[3] ={9,6,7};

		int *p = v;

		printf("%d\n", *p);
		printf("%d\n", p[1]);
		printf("%d\n", *(p+2));


		return 0;
	}