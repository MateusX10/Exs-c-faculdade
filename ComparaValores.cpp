#include <stdio.h>

void VerificaMenorValor(int num1, int num2){
	if (num1 > num2){
		printf("\n%d � o menor valor", num2);
	}
	else if (num1 < num2){
		printf("\n%d � o menor valor", num1);
	}
	else if (num1 == num2){
		printf("\nAmbos os valores s�o iguais: %d", num1);
	}
}

int main(){
	int n1, n2;
	printf("\nInforme o 1� valor: ");
	scanf("%d", &n1);
	printf("\nInforme o 2� valor: ");
	scanf("%d", &n2);
	VerificaMenorValor(n1,n2);
	printf("\nEncerrando...");
	return (0);
}
