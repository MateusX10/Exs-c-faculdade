#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define TAM_MAX 7

int main(){
	int mat[TAM_MAX][TAM_MAX];
	int i,j;
	
	for (i=0; i < TAM_MAX; i++){
		for (j=0; j < TAM_MAX; j++){
			mat[i][j] = 0;
		}
	}
	
	for (i=0; i < TAM_MAX; i++){
		mat[i][i] = 1;
}
	
	for (i=0; i < TAM_MAX; i++){
		
		for (j=0; j < TAM_MAX; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
