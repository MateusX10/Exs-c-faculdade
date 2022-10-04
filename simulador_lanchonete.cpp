#include <stdio.h>

int main(){
	
	int cod_lanche, quant;
	float valor_lanche, tot;
	printf("Digite o código de seu lanche: ");
	scanf("%d", &cod_lanche);
	printf("Quantas unidades do lanche deseja comprar? ");
	scanf("%d", &quant);
	if (cod_lanche == 100) {
    valor_lanche = 12.20;
    tot = valor_lanche * quant;
    }
  else if (cod_lanche == 101) {
    valor_lanche = 9.30;
    tot = valor_lanche * quant;
    }
  else if (cod_lanche == 102) {
    valor_lanche = 11.50;
    tot = valor_lanche * quant;
    }
  else if (cod_lanche == 103) {
    valor_lanche = 12.20;
    tot = valor_lanche * quant;
    }
  else if (cod_lanche == 104) {
    valor_lanche = 14.30;
    tot = valor_lanche * quant;
    }
  else if (cod_lanche == 105) {
    valor_lanche = 6.0;
    tot = valor_lanche * quant;
    }
  
  else {
    printf("Opção inválida.Faça seu pedido novamente!");
    }
  
  printf("\nO lanche custa R$ %.2f", valor_lanche);
  printf("\nAo final, você pagará R$ %.2f", tot);
  return (0);
}