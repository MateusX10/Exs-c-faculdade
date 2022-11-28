#include <stdio.h>
#define MAX 3

int main(){
	int mat[MAX][MAX];
	int i, j, QuantidadeValoresAcima10;
	
	for (i=0; i < MAX; i++){
		for (j=0; j < MAX; j++){
			printf("Informe um valor para a posição [%d][%d] da matriz: ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for (i=0; i < MAX; i++){
		for (j=0; j < MAX; j++){
			printf("\n%d", mat[i][j]);
			if (mat[i][j] > 10){
				QuantidadeValoresAcima10 ++;
			}
		}
	}
	printf("\nQuantidade de valores acima de 10: %d", QuantidadeValoresAcima10);
}
