#include <stdio.h>
struct dados{
	char nome[50];
	char endereco[40];
	int idade;

};

int main(void){

	struct dados pessoa;

	printf("Digite seu nome: \n");
	gets(pessoa.nome);
	
	printf("Informe sua idade: \n");
	scanf("%d", &pessoa.idade);
	getchar();
	//fflush (stdin);

	printf("Informe seu endereco: \n");
	gets(pessoa.endereco);

	printf("Nome: %s, Idade: %d, Endereço: %s",pessoa.nome, pessoa.idade, pessoa.endereco);
	printf("\n");	
	return 0;
}
