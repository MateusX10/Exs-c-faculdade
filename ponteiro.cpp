#include <stdio.h>

int main(){
	
	int n1 = 2;
	
	int n2 = 5;
	
	int * ponteiro;
	
	int ** ptr_ptr;
	
	int * ponteiro2;
	
	int ** ptr_ptr2;
	
	ponteiro2 = &n2;
	
	ptr_ptr = &ponteiro;
	
	ponteiro = &n1;
	
	ptr_ptr2 = &ponteiro2;
	
	printf("Vari�vel n1 com o valor de %d est� no endere�o de mem�ria de ", n1);
	printf("%x", ponteiro);
	printf("\n%x", &n1);
	
	printf("\n\n\n\n");
	printf("Valor: %d", n2);
	printf("\n endere�o de mem�ria = %d", ponteiro2);
	
	printf("\n\n\n\n");
	
	printf("Endere�o de mem�ria de n1: %x", &n1);
	printf("\nEndere�o de mem�ria de n2: %x", &n2);
	
	printf("\n\n\n\n\n\n");
	
	printf("Ponteiro do ponteiro: %x", ptr_ptr);
	printf("\nPonteiro do ponteiro2: %x", ptr_ptr2);
	return (0);
	
}
