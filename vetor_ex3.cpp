#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int main(){
	int vet[MAX];
	int l,cont, maior_valor;
	cont = maior_valor = 0;
	for (cont; cont <= MAX; cont++){
		vet[cont] = rand() % 20;
		printf("\n%d", vet[cont]);
		
	} 
	for (cont=0; cont <= MAX; cont++){
		if (vet[cont] > maior_valor){
			maior_valor = vet[cont];		
		}
	}
	printf("\nO maior valor digitado foi %d", maior_valor);
	
	

	return (0);
}
