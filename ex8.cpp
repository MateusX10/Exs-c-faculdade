#include <stdio.h>
#define MAX 5
#define MAX2 3

int main(){
	
	int mat[MAX][MAX2];
	int i, j, TotalAcidentes;
	
	for (i=0; i < MAX; i++){
		for (j=0; j < MAX2; j++){
		
		
		printf("Informe um valor para o cruzamento: [%d][%d]", i, j);
		scanf("%d", &mat[i][j]);
		if (mat[i][j] > 0){
			TotalAcidentes = TotalAcidentes + mat[i][j];
		}
	}
	}
	
	for (i=0; i < MAX; i++){
		for (j=0; j < MAX2; j++){
			printf("\nNúmero de acidentes no cruzamento [%d][%d]: ", i, j);
			printf("%d", mat[i][j]);
		}
	}
	
	printf("\nPrograma finalizado com um total de %d acidentes", TotalAcidentes);
	
	
}
