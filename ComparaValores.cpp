#include <stdio.h>

void VerificaMenorValor(int num1, int num2){
	if (num1 > num2){
		printf("\n%d é o menor valor", num2);
	}
	else if (num1 < num2){
		printf("\n%d é o menor valor", num1);
	}
	else if (num1 == num2){
		printf("\nAmbos os valores são iguais: %d", num1);
	}
}

int main(){
	int n1, n2;
	printf("\nInforme o 1º valor: ");
	scanf("%d", &n1);
	printf("\nInforme o 2º valor: ");
	scanf("%d", &n2);
	VerificaMenorValor(n1,n2);
	printf("\nEncerrando...");
	return (0);
}
