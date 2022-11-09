#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i;
	
	typedef struct {
		
		int ra;
		float nota1;
		float nota2;
		char nome[40];
	}aluno;
	
	aluno dados_aluno;
	
	strcpy(dados_aluno.nome, "Joao Pedro");
	dados_aluno.ra = 987;
	dados_aluno.nota1 = 70;
	dados_aluno.nota2 = 90;
	printf("\n%s", dados_aluno.nome);
	printf("\n%d", dados_aluno.ra);
	printf("\n%f", dados_aluno.nota1);
	printf("\n%f", dados_aluno.nota2);
}
