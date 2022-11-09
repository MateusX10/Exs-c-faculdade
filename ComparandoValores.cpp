#include <stdio.h>

void VerificaMaiorValor(int n1, int n2, int n3){
	if (n1 > n2 && n1 > n3){
		printf("\n%d e o maior numero", n1);
	}
	else if (n2 > n1 && n2 > n3){
		printf("\n%d e o maior numero", n2);
	}
	
	else if (n3 > n1 && n3 > n2){
		printf("%d e o maior numero", n3);
	}
	else if (n1 == n2 && n2 == n3){
		printf("\nNumeros sao iguais: %d", n1);
	}
}

void VerificaMenorValor(int n1, int n2, int n3){
	if (n1 > n2 && n2 < n3){
		printf("\n%d e o menor numero", n2);
	}
	
	else if (n2 > n1 && n1 < n3){
		printf("\n%d e o menor numero", n1);
	}
	
	else if (n3 < n1 && n3 < n2){
		printf("\n%d e o  menor numero", n3);
	}
	
}


int main(){
	int n1, n2, n3;
	printf("\nInforme um valor: ");
	scanf("%d", &n1);
	printf("\nInforme outro valor: ");
	scanf("%d", &n2);
	printf("\nInforme o ultimo valor: ");
	scanf("%d", &n3);
	VerificaMaiorValor(n1, n2, n3);
	VerificaMenorValor(n1, n2, n3);
	printf("\nEncerrando...");
}
