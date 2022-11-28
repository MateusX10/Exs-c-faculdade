#include <stdio.h>
#define MAX 10

int main(){
	int vet[MAX];
	int i;
	
	for (i=0; i < 5; i++){
		printf("Informe o %d valor: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for (i=0; i<5; i++){
		printf("\n%d", vet[i]);
	}
	
	return (0);
}
