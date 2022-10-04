#include <stdio.h>

int main(){

  int idade_anos,idade_meses,idade_dias, idade_definit;
  
  printf("Sua idade (em anos): ");
  scanf("%d", &idade_anos);
  printf("Sua idade (em meses): ");
  scanf("%d", &idade_meses);
  printf("Sua idade (em dias): ");
  scanf("%d", &idade_dias);
  idade_definit = (idade_anos * 365) + (idade_meses * 30) + (idade_dias);
  printf("Sua idade em dias é %d", idade_definit);
    
}