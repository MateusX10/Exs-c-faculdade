#include <stdio.h>
#include <string.h>

float Media(float n1, float n2){
	float media;
	media = (n1 + n2) /2;
	return media;
}

char situacao(float media){
	
	if (media >= 6){
		printf("\nAluno aprovado.Parabéns!");
	}
	
	else if (media >= 4){
		printf("Aluno em recuperação.Estude para recuperar a nota!");
	}
	
	else if (media < 4){
		printf("Aluno reprovado.Se esforce mais no ano que vem!");
		
	}
}

int main(){
	float n1, n2, media;
	char mensagem[100];
	
	printf("Informe um valor: ");
	scanf("%f", &n1);
	printf("Informe outro valor; ");
	scanf("%f", &n2);
	media = Media(n1, n2);	
	printf("\nA media vale %.2f", media);
	situacao(media);
	
	return 0;
	
	
}
