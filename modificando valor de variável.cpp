#include <stdio.h>

void ModificaValorDeVariavel(int *ptr){
	*ptr = *ptr + 10;
}

int main(){
	
	int n1 = 5;
	
	ModificaValorDeVariavel(&n1);
	
	printf("O novo valor da variável vale %d", n1);
	
	return (0);
}
