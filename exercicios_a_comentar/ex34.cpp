// Autor :  Mateus Henrique de Souza Medeiros (o c�digo n�o foi desenvolvido por mim, eu apenas o comentei)
// Fun��o :  34. A escola "APRENDER" faz o pagamento de seus professores por hora/aula. Fa�a um algoritmo que calcule e exiba o sal�rio de
// um professor. Sabe-se que o valor da hora/aula segue a tabela abaixo:
// Professor N�vel 1 R$12,00 por hora/aula
// Professor N�vel 2 R$17,00 por hora/aula
// Professor N�vel 3 R$25,00 por hora/aula

//Biblioteca usada na manipula��o de teclado e mouse: entrada e sa�da de dados
#include <stdio.h>   
//Biblioteca usada ne entrada e sa�da de dados
#include <iostream> 
//Fun��o Principal
int main()
{
	//Declara vari�vel do tipo ponto flutuante
float ha;
//Declara vari�vel do tipo inteiro
int nivel;
//Declara vari�vel do tipo char/str
char nome[25];
//Imprime na tela uma mensagem pedindo ao usu�rio que informe o nome do professor
printf("Informe o nome do professor\n");
//Fun��o usada para o input de dados por parte do usu�rio
scanf("%s",&nome);
//Imprime na tela uma mensagem pedindo ao usu�rio que digite o total de horas trabalhadas
printf("informe o total de horas/aula\n");
//Fun��o usada na entrada de dados
scanf("%f",&ha);
//Imprime uma mensagem pedindo ao usu�rio que informe o n�vel do professor
printf("Informe o nivel do professor\n");
//Fun��o usada para a entrada de dados por parte do usu�rio, onde s� ser�o aceitos inputs do tipo int
scanf("%d",&nivel);
//Escolha "n�vel"
switch(nivel){
	//Caso o conte�do da vari�vel seja "1"
   case 1:
   	//Imprime  na tela o sal�rio
   printf("O salario de %s eh R$ %1.2f",nome,((ha)*12));
   //interrompe o switch de modo que os demais switchs n�o sejam executados
   break;
   //Caso o conte�do da vari�vel "nivel" seja 2
   case 2:
   //Imprime na tela
   printf("O salario de %s eh R$ %1.2f",nome,((ha)*17));
   //Interrompe o switch case
   break;
   //Caso o conte�do da vari�vel "nivel" seja igual a 3
   case 3:
   	//Imprime o sal�rio
   printf("O salario de %s eh R$ %1.2f",nome,((ha)*25));
   //Interrompe o switch case
   break;
   //Caso nenhum dos cases seja executado...
  default:
  	
  	//� um n�vel inv�lido
   printf("Nivel invalido");
   //Interrompe o switch case
   break;
}
//D� um "pause" no sistema
system("Pause >NULL");
}


