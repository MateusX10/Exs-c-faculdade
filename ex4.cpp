#include <stdio.h>


float CalculaMedia(float n1, float n2){
	float media;
	media = (n1 + n2) / 2;
	return media;
}

char DeterminaSituacaoAluno(float media){
	char situacao[40];
	if (media >= 6){
		printf("aprovado");
	}
	
	else if(media >= 4){
		printf("Recupera��o");
	}
	
	else if(media < 4){
		printf("Reprovado");
	}
}

int main(){
	float n1, n2, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	
	media = CalculaMedia(n1, n2);
	printf("Sua media foi de %.1f, logo voce esta ", media);
	DeterminaSituacaoAluno(media);
	return (0);
}
