// Ex: 29
// Autor : Renan D Costa, Mateus Henrique de Souza Medeiros (apenas comentei o c�digo, mas n�o fui eu quem desenvolveu o programa)


//Inclue a biblioteca de entrada e sa�da de dados
#include <stdio.h> 
//Tamb�m inclui libre de I/O de dados
#include <iostream> 

//Main Function
int main() 
{ 

//Declara vari�vel do tipo inteiro
int mes; 

//Imprime na tela uma mensagem
printf("Entre com o numero do mes:\n"); 
//Faz input e guarda input na vari�vel mes
scanf("%d",&mes); 
//Escolha "mes"
switch(mes){ 
//Caso o mes seja janeiro...
case 1: 
//Imprima janeiro na tela
printf("Janeiro\n"); 
//Interrompe o switch case
break; 
//Caso o m�s seja "fevereiro"
case 2: 
//Imprime na tela "fevereiro"
printf("Fevereiro\n"); 
//Interrompe o switch case
break; 
//Caso o mes seja mar�o
case 3: 
//Imprime mar�o na tela
printf("Marco\n"); 
//Interrompe o switch case
break; 
//Caso o m�s seja abril
case 4: 
//Imprime na tela "abril"
printf("Abril\n"); 
//Interrompe o switch case
break; 
//Caso o m�s seja "maio"
case 5: 
//Imprime na tela "maio"
printf("Maio\n"); 
//Interrompe o switch case
break; 
//Caso o m�s seja "junho"
case 6: 
//Imprime na tela "junho"
printf("Junho\n"); 
]//Interrompe o switch case
break; 
//Caso o m�s seja "julho"
case 7: 
//Imprime na tela "Julho"
printf("Julho\n"); 
//Interrompe o switch case
break; 
//Caso o m�s seja agosto
case 8: 
//Imprime na tela "agosto"
printf("Agosto\n"); 
//Interrompe o switch case
break; 
//Caso o m�s seja setembro..
case 9: 
//Imprime na tela "setembro"
printf("Setembro\n"); 
//Interrompe o switch case
break; 
//Caso o m�s seja "outubro"
case 10: 
//Imprime na tela "outubro"
printf("Outubro\n"); 
//Interrompe o switch case
break; 
//Caso o m�s seja novembro
case 11: 
//Imprime na tela "Novembro"
printf("Novembro\n"); 
//Interrompe o switch case
break; 
//Caso o m�s seja o �ltimo m�s do ano
case 12: 
//Imprima o �ltimo m�s do ano
printf("dezembro\n"); 
//Interrompe o switch case
break;
//Se o usu�rio digitar um n�mero de m�s inv�lido 
default: 
//� um m�s inv�lido
printf("Mes invalido\n"); 
//Interrompe o switch case
break; 
} 
//D� um "pause" no programa
system("Pause >NULL"); 
} 

