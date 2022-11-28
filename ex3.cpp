#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	typedef struct
	{
		char nome[40];
		int idade;
		float peso;
		float altura;
	}pessoa;
	
	int i;
	
	pessoa dados_cliente; 
	
	strcpy(dados_cliente.nome, "Pedro Alvares");
	dados_cliente.idade = 99;
	dados_cliente.peso = 89.8;
	dados_cliente.altura = 1.88;
	
	printf("\n%s", dados_cliente.nome);
	printf("\n%s", dados_cliente.idade);
	printf("\n%f", dados_cliente.peso);
	printf("\n%f", dados_cliente.altura);
	
	
	
	return (0);
	
}
