#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#define MAX 5;

int main(){
	int mat[5][5];
	int i, j, maior, maior_posicaoX, maior_posicaoY;
	
	for (i=0; i<5;i++){
		for (j=0; j<5;j++){
			mat[i][j] = rand()%50;
		
		}
		
	}
	maior = mat[0][0];
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if (mat[i][j] > maior){
				maior = mat[i][j];
				maior_posicaoX = i;
				maior_posicaoY = j;
			}
		}
	}
		
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("[%d] ", mat[i][j]);
			
		}
	printf("\n");
	}
	
	printf("\nO maior valor da matriz e %d na posicao [%d][%d]", maior, maior_posicaoX, maior_posicaoY);
	
	
	return (0);
}
