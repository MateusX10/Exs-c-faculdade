#include <stdio.h>

int main(void) {
  int mat[2][3], soma_mat[2][3];
  int i,j;
  for (i=0; i<2; i++){
    for (j=0; j<3; j++){
      printf("Valor da posição [%d][%d] da matriz: ", i,j);
      scanf("%d", &mat[i][j]);
      
    }
    }

  for (i=0; i<2; i++){
    for (j=0; j<3; j++){
      printf("\nValor da posição [%d][%d] da matriz: ", i, j);
      soma_mat[i][j] = (mat[i][j] * mat[i][j]);
      printf("%d", soma_mat[i][j]);
    }
  }
  
  return 0;
}