#include <stdio.h>
#include <conio.h>



float CalculaMedia(float nota1, float nota2){
  return (nota1 + nota2) / 2;

  }
  
void DeterminaSituacaoDoAluno(float med){
  if (med >= 6){
    printf("\nAprovado");
  }
  else if (med >= 4){
    printf("\nRecupera��o");
  }
  else if (med < 4){
    printf("\nReprovado");
    }
  else{
    printf("\nValor inv�lido");
  }
  }
  



int main() {
  float nota1=0, nota2=0, media=0;
  printf("Informe a 1� nota: ");
  scanf("%f", &nota1);
  printf("Informe a 2� nota: ");
  scanf("%f", &nota2);
  media = CalculaMedia(nota1, nota2);
  DeterminaSituacaoDoAluno(media);
  printf("\nEncerrando...");
}



