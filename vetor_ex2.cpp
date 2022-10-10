#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int main(){
	int vet[MAX];
	int l,cont;
	int media, soma;
	cont = media = soma = 0;
	for (cont; cont <= MAX; cont++){
		vet[cont] = rand() % 20;
		printf("\n%d", vet[cont]);
		soma = vet[cont] + soma;
		media++;
	} 
	media = (soma / media);
	printf("\na media dos valores informados vale %d", media);
	

	return (0);
}
