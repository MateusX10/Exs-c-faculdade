// Autor :  Mateus Henrique de Souza Medeiros (o código não foi desenvolvido por mim, eu apenas o comentei)
// Função :  34. A escola "APRENDER" faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule e exiba o salário de
// um professor. Sabe-se que o valor da hora/aula segue a tabela abaixo:
// Professor Nível 1 R$12,00 por hora/aula
// Professor Nível 2 R$17,00 por hora/aula
// Professor Nível 3 R$25,00 por hora/aula

//Biblioteca usada na manipulação de teclado e mouse: entrada e saída de dados
#include <stdio.h>   
//Biblioteca usada ne entrada e saída de dados
#include <iostream> 
//Função Principal
int main()
{
	//Declara variável do tipo ponto flutuante
float ha;
//Declara variável do tipo inteiro
int nivel;
//Declara variável do tipo char/str
char nome[25];
//Imprime na tela uma mensagem pedindo ao usuário que informe o nome do professor
printf("Informe o nome do professor\n");
//Função usada para o input de dados por parte do usuário
scanf("%s",&nome);
//Imprime na tela uma mensagem pedindo ao usuário que digite o total de horas trabalhadas
printf("informe o total de horas/aula\n");
//Função usada na entrada de dados
scanf("%f",&ha);
//Imprime uma mensagem pedindo ao usuário que informe o nível do professor
printf("Informe o nivel do professor\n");
//Função usada para a entrada de dados por parte do usuário, onde só serão aceitos inputs do tipo int
scanf("%d",&nivel);
//Escolha "nível"
switch(nivel){
	//Caso o conteúdo da variável seja "1"
   case 1:
   	//Imprime  na tela o salário
   printf("O salario de %s eh R$ %1.2f",nome,((ha)*12));
   //interrompe o switch de modo que os demais switchs não sejam executados
   break;
   //Caso o conteúdo da variável "nivel" seja 2
   case 2:
   //Imprime na tela
   printf("O salario de %s eh R$ %1.2f",nome,((ha)*17));
   //Interrompe o switch case
   break;
   //Caso o conteúdo da variável "nivel" seja igual a 3
   case 3:
   	//Imprime o salário
   printf("O salario de %s eh R$ %1.2f",nome,((ha)*25));
   //Interrompe o switch case
   break;
   //Caso nenhum dos cases seja executado...
  default:
  	
  	//É um nível inválido
   printf("Nivel invalido");
   //Interrompe o switch case
   break;
}
//Dá um "pause" no sistema
system("Pause >NULL");
}


