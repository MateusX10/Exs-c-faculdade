#include <stdio.h>

int VerificaOMenorValor(int n1, int n2){
	if (n1 < n2){
		printf("O menor valor é %d", n1);
	}
	
	else if (n2 < n1){
		printf("O menor valor é %d", n2);
	}
	
	else if (n1 == n2){
		printf("Ambos os números são iguais.");
	}
	
	else {
		printf("Você informou valores invalidos.");
	}
}

int main(){
	int n1, n2;
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &n1);
	printf("Informe o segundo valor: ");
	scanf("%d", &n2);
	VerificaOMenorValor(n1, n2);
}
