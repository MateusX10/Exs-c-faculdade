#include <stdio.h>

int main(){
  int n1, cont;
  cont = 1;
  printf("Informe um valor: ");
  scanf("%d",&n1);
  for (cont; cont <= 10; cont++){
    printf("\n%d x %d = %d", n1, cont, n1 * cont);
  }
  return (0);
}