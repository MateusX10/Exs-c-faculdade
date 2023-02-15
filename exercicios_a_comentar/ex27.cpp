////////////////////////////////////////////////////////////////////////////////////////////////////////
//algoritmo "ex27"                                                                   
// Função : 27. A concessionária de veículos "CARANGO" está vendendo os seus veículos com desconto. 
// Faça um algoritmo que calcule e exiba o valor do desconto e o valor a ser pago pelo cliente. 
// O desconto deverá ser calculado sobre o valor do veículo de acordo com o combustível (álcool - 25%, gasolina - 21% ou diesel -14%). 
// Com valor do veículo zero encerra entrada de dados. Informe total de desconto e total pago pelos clientes. 
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o programa em si não foi desenvolvido por mim)
// Data : 14/02/23
// Seção de Declarações 

//Biblioteca que permite entrada e sáida de dados: manipulação do teclado e mouse
#include <stdio.h> 
//Biblioteca que também permite entrada e saída de dados
#include <iostream> 

//Função principal 
int main() 
{ 

//Declara 5 variáveis do tipo inteiro
float vf,des,vv,td,tp; 
//Declara uma variável do tipo char
char combustivel; 
//vf = Valor, final des=desconto, vv=valor veiculo, td=total desconto, tp=total pago 
//Atribui 0 a variável "td"
td=0; 
//Atribui 0 a variável "tp"
tp=0; 
//Imprime na tela uma mensagem informando ao usuário que informe o valor do veículo
printf("informe o valor do veiculo. (Valor 0 encerra a entrada de dados)\n"); 
//Função que permitirá que o usuário faça o input de dados
scanf("%f",&vv); 
//Enquanto a variável "vv" for maior do que 0, faça...
while (vv > 0){ 
//Atribui "N" a variável "combustível"
combustivel='N'; 
	{ 
	//Imprime uma mensagem pedindo ao usuário que informe o tipo de combustível
	printf("Informe o tipo de combustivel\n\n"); 
	//Primeira opção: "Alcool"
	printf("A - Alcool\n"); 
	//Segunda opçãp: Gasolina
	printf("G - Gasolina\n");
	//Terceira opção: diesel 
	printf("D - Diesel\n"); 
	//Permite o input de dados, armazenandoo resultado na variável "combustível"
	scanf("%s",&combustivel); 
	} 

	//Enquanto a variável "combustivel" for diferente de "A" e de "G" e "D", faça...
	while ((combustivel !='A') && (combustivel !='G') && (combustivel !='D')); 
	//Escolha "combustivel"
	switch(combustivel) 
	{ 
	//Caso o conteúdo da variável seja "A"...
	case 'A': 
	//Calcula desconto de 25%
	des=(0.25)*vv; 
	//"Quebra" o switch case de modo que os demais cases não sejam executados
	break; 
	//Caso o conteúdo da variável seja "G"
	case 'G': 
	//Calcula desconto de 21%
	des=(0.21)*vv; 
	//Interrompe o switch case de modo que os demais cases não sejam executados
	break; 
	//Caso o conteúdo da variável seja "D"
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
		//Imprime na tela o valor do veículo com desconto
		printf("o valor do Veiculo com desconto de R$ %1.2f eh de R$ %1.2f\n",des,vf); 
		//Retoma o programa, perguntando ao usuário o valor do veículo
		printf("informe o valor do veículo. (Valor 0 encerra o programa)\n"); 
		//Recebe entrada de dados do usuário
		scanf("%f",&vv); 
		} 
		//Imprime o valor total de descontos
		printf("Valor total de descontos: R$ %1.2f\n", td); 
		//Imprime valor total pago pelos clientes
		printf("Valor total pago pelos clientes: R$ %1.2f\n", tp); 
		//Dá um "pause" no sistema
		system("Pause >NULL"); 
} 


