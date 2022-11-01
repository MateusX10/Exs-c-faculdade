#include <stdio.h>

int main() {
  int mat[4][6];
  int i, j, TotalAcidentes;

  for (i=0; i < 4; i++){
    for (j=0; j < 6; j++){
      printf("Cruzamento [%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
      if (mat[i][j] > 0){
        TotalAcidentes = TotalAcidentes + mat[i][j];
      }
  }
    }

  for (i=0; i<4; i++){
    for (j=0; j<6; j++){
      printf("\nNúmero de acidentes do cruzamento [%d][%d]: %d", i, j, mat[i][j]);
    }
  }
  printf("\nTotal de acidentes nos cruzamentos: %d", TotalAcidentes);
  
  return 0;
}