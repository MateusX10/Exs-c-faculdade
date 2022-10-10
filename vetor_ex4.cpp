#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int main(){
	int vet[MAX];
	int l,cont, usuario_num;
	bool exist;
	cont = usuario_num = 0;
	exist = false;
	for (cont; cont <= MAX; cont++){
		vet[cont] = rand() % 20;
		printf("\n%d", vet[cont]);
		
	} 
	printf("\nInsira um numero para verificar se ele existe no vetor: ");
	scanf("%d",&usuario_num);
	for (cont=0; cont <= MAX; cont++){
		if (usuario_num == vet[cont]){
			printf("O numero %d existe no vetor!", usuario_num);
			exist = true;
			break;
		} 
		
	}
	if (! exist){
		printf("O numero %d nao existe no vetor", usuario_num);
	}
	
	

	return (0);
}
