#include <stdio.h>

int main(){

  float gasolina_consumida, km_percor, tot;

  printf("Quantos km você percorreu? ");
  scanf("%f", &km_percor);
  printf("Gasolina consumida: ");
  scanf("%f", &gasolina_consumida);
  tot = km_percor/ gasolina_consumida;
  printf("O consumo médio de gasolina foi de %f", tot);
}