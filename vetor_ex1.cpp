#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int main(){
	int vet[MAX];
	int l,cont;
	cont = 0;
	for (cont; cont <= MAX; cont++){
		vet[cont] = rand() % 20;
		printf("\n%d", vet[cont]);
	}
	printf("%s", "\n\n\nimprimindo os valores em ordem inversa\n");
	for (cont=MAX; cont >= 0; cont--){
		printf("\n%d", vet[cont]);
	}

	return (0);
}
