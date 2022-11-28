#include <stdio.h>

char ValidaEscolha(int escolha){
	if (escolha == 1){
		printf("Bom dia");
	}
	
	else if(escolha == 2){
		printf("Boa tarde");
		
	}
	
	else if (escolha == 3){
		printf("Boa noite");
	}
	
	else {
		printf("Você informou uma opcao invalido.Por favor, tente novamentre.");
	}
}

char MostraMenu(){
	printf("Menu: \n[ 1 ] - Bom dia \n[ 2 ] - Boa tarde \n[ 3 ] - Boa noite");
}

int main(){
	int escolha;
	
	MostraMenu();
	
	printf("\nFaca  a sua escolha: ");
	scanf("%d", &escolha);
	
	ValidaEscolha(escolha);
	
	return (0);
}
