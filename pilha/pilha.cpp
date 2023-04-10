// Autor: Mateus Henrique de Souza Medeiros


#include <stdio.h>
#include <stdlib.h>
#define MAX 5


// Struct de dados da pilha
typedef struct{
	int elementos[MAX];
	int posicao=0;
}lista;


// Fun��es de est�tica do sistema



// Quebra linha.
void QuebrarLinha(int QuantidadeQuebrasDeLinha){
	
	// Par�metro 1: Quantidade de linhas a serem quebradas
	
	for (int ini=0; ini < QuantidadeQuebrasDeLinha; ini++){
		printf("\n");
	}
}



// Imprime uma "linha" com o intuito de um sistema mais limpo :)
void line(bool QuebrarLinhaNoComeco, int QuantidadeQuebrasDeLinha){
	
	// Par�metro 1: "Voc� quer quebrar linha no come�o do c�digo antes que o programa abaixo seja executado???
	// Par�metro 2:  "Quantas linhas voc� quer quebrar???"
	if (QuebrarLinhaNoComeco){
		QuebrarLinha(QuantidadeQuebrasDeLinha);
	}
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	
}



// Imprime t�tulo
void title(char msg[100]){
	
	// Par�metro 1: basicamente a mensagem que ser� imprimida na tela
	QuebrarLinha(2);
	line(false, 0);
	printf("%s", msg);
	QuebrarLinha(1);
	line(false, 0);
}




// Mostra menu de op��es
void menu(){
	line(true, 1);
	printf(">>> Menu: \n\n[ 1 ] - Empilhar \n[ 2 ] - Desempilhar \n[ 3 ] - Mostrar topo \n[ 4 ] - Sair ");
	//line();
}



// Fun��es de verifica��o do sistema


// Verifica se a pilha est� vazia
bool PilhaEstaVazia(lista &p){
	if (p.posicao == 0){
		return true;
	}
	
	else{
		return false;
	}
}



// Verifica se a pilha est� cheia
bool PilhaEstaCheia(lista &p){
	if (p.posicao == MAX){
		return true;
	}
	
	else {
		return false;
	}
}


// Fun��es de manipula��o de pilha do sistema


// Adiciona valor a pilha
int AdicionarElementoNoTopoDaPilha(lista &p){
	
	if (PilhaEstaCheia(p)){
		printf("\n\nOps, pilha cheia :(");
	}
	
	else {
		int valor=0;
		printf("\n\nValor a ser adicionado a pilha: ");
		scanf("%d", &valor);
		p.elementos[p.posicao++] = valor;
		printf("\n<<< Valor %d adicionado ao topo da pilha com sucesso! >>>", valor);
	}
	
}


// Mostra o topo da pilha
int MostrarTopoDaPilha(lista &p){
	
	if (PilhaEstaVazia(p)){
		printf("\n\nOps, pilha vazia! :(");
	}
	
	else {
		printf("\n\nTopo da pilha: %d", (p.elementos[p.posicao - 1]));	
	}
	
}



int RetirarElementoDaPilha(lista &p){
	
	if (PilhaEstaVazia(p)){
		printf("\n\nOps, pilha vazia! :(");
	}
	
	else {
		printf("\n\nElemento %d removido da pilha com sucesso! :)", p.elementos[p.posicao - 1]);
		p.posicao--;
	}
}



// Main Function
int main(){
	lista pilha;
	int EscolhaUsuario=0;
	
	
	
	// Enquanto Verdadeiro
	while (1){
		menu();
		line(true, 1);
		printf("\n\nSua escolha: ");
		scanf("%d", &EscolhaUsuario);	
		// Decis�o do usu�rio
		
		// Usu�rio optou por adicionar um elemento na pilha
		if (EscolhaUsuario == 1){
			title("<<< EMPILHAR >>>");
			AdicionarElementoNoTopoDaPilha(pilha);
		}
		
		// Usu�rio optou por retirar um elemento da pilha
		else if (EscolhaUsuario == 2){
			title("<<< DESEMPILAHAR >>>");
			RetirarElementoDaPilha(pilha);
		}
		
		// Usu�rio optou por mostrar o topo da pilha
		else if (EscolhaUsuario == 3){
			//line();
			//printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
			title("<<< MOSTRAR TOPO >>>");
			//line();
			MostrarTopoDaPilha(pilha);
		}
		
		// Usu�rio optou por sair do programa :(
		else if (EscolhaUsuario == 4){
			title("<<< Sair do programa ._. >>>");
			break;
		}
		
		else{
			title("Opcao invalida :(");
		}
		printf("\n\n\n");
		system("pause");
		system("cls");
	}
	return 0;
}


