#include <stdio.h>
#include <stdlib.h>
	int main(int argc, char const *argv[]){
		char *ponteiro;
		char letra ='a';
		ponteiro = &letra;

		printf("%d\n", ponteiro);
	}