#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 6

int main(){
	int mat[MAX][MAX];
	int i, j;
	
	for (i=0; i < MAX; i++){
		for (j=0; j < MAX; j++){
			if (i == j){
				mat[i][j] = rand()%20;
		}
			else{
				mat[i][j] = 0;
			}
	}
	
}
	
	for (i=0; i < MAX; i++){
		for (j=0; j < MAX; j++){
			printf("[ %d ]", mat[i][j]);
			
		}
		printf("\n");
	}
}
