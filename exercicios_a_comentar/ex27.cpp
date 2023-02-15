////////////////////////////////////////////////////////////////////////////////////////////////////////
//algoritmo "ex27"                                                                   
// Fun��o : 27. A concession�ria de ve�culos "CARANGO" est� vendendo os seus ve�culos com desconto. 
// Fa�a um algoritmo que calcule e exiba o valor do desconto e o valor a ser pago pelo cliente. 
// O desconto dever� ser calculado sobre o valor do ve�culo de acordo com o combust�vel (�lcool - 25%, gasolina - 21% ou diesel -14%). 
// Com valor do ve�culo zero encerra entrada de dados. Informe total de desconto e total pago pelos clientes. 
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o c�digo, o programa em si n�o foi desenvolvido por mim)
// Data : 14/02/23
// Se��o de Declara��es 

//Biblioteca que permite entrada e s�ida de dados: manipula��o do teclado e mouse
#include <stdio.h> 
//Biblioteca que tamb�m permite entrada e sa�da de dados
#include <iostream> 

//Fun��o principal 
int main() 
{ 

//Declara 5 vari�veis do tipo inteiro
float vf,des,vv,td,tp; 
//Declara uma vari�vel do tipo char
char combustivel; 
//vf = Valor, final des=desconto, vv=valor veiculo, td=total desconto, tp=total pago 
//Atribui 0 a vari�vel "td"
td=0; 
//Atribui 0 a vari�vel "tp"
tp=0; 
//Imprime na tela uma mensagem informando ao usu�rio que informe o valor do ve�culo
printf("informe o valor do veiculo. (Valor 0 encerra a entrada de dados)\n"); 
//Fun��o que permitir� que o usu�rio fa�a o input de dados
scanf("%f",&vv); 
//Enquanto a vari�vel "vv" for maior do que 0, fa�a...
while (vv > 0){ 
//Atribui "N" a vari�vel "combust�vel"
combustivel='N'; 
	{ 
	//Imprime uma mensagem pedindo ao usu�rio que informe o tipo de combust�vel
	printf("Informe o tipo de combustivel\n\n"); 
	//Primeira op��o: "Alcool"
	printf("A - Alcool\n"); 
	//Segunda op��p: Gasolina
	printf("G - Gasolina\n");
	//Terceira op��o: diesel 
	printf("D - Diesel\n"); 
	//Permite o input de dados, armazenandoo resultado na vari�vel "combust�vel"
	scanf("%s",&combustivel); 
	} 

	//Enquanto a vari�vel "combustivel" for diferente de "A" e de "G" e "D", fa�a...
	while ((combustivel !='A') && (combustivel !='G') && (combustivel !='D')); 
	//Escolha "combustivel"
	switch(combustivel) 
	{ 
	//Caso o conte�do da vari�vel seja "A"...
	case 'A': 
	//Calcula desconto de 25%
	des=(0.25)*vv; 
	//"Quebra" o switch case de modo que os demais cases n�o sejam executados
	break; 
	//Caso o conte�do da vari�vel seja "G"
	case 'G': 
	//Calcula desconto de 21%
	des=(0.21)*vv; 
	//Interrompe o switch case de modo que os demais cases n�o sejam executados
	break; 
	//Caso o conte�do da vari�vel seja "D"
	case 'D': 
	//Calcula desconto de 14%
	des=(0.14)*vv; 
	//Interrompe o switch case
	break; 
	} 
		//Calcula valor final
		vf=vv-des; 
		//Calcula total de descontos
		td=td+des;
		//Valor total pago pelos clientes 
		tp=tp+vf; 
		//Imprime na tela o valor do ve�culo com desconto
		printf("o valor do Veiculo com desconto de R$ %1.2f eh de R$ %1.2f\n",des,vf); 
		//Retoma o programa, perguntando ao usu�rio o valor do ve�culo
		printf("informe o valor do ve�culo. (Valor 0 encerra o programa)\n"); 
		//Recebe entrada de dados do usu�rio
		scanf("%f",&vv); 
		} 
		//Imprime o valor total de descontos
		printf("Valor total de descontos: R$ %1.2f\n", td); 
		//Imprime valor total pago pelos clientes
		printf("Valor total pago pelos clientes: R$ %1.2f\n", tp); 
		//D� um "pause" no sistema
		system("Pause >NULL"); 
} 


