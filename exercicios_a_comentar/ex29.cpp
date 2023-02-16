// Ex: 29
// Autor : Renan D Costa, Mateus Henrique de Souza Medeiros (apenas comentei o código, mas não fui eu quem desenvolveu o programa)


//Inclue a biblioteca de entrada e saída de dados
#include <stdio.h> 
//Também inclui libre de I/O de dados
#include <iostream> 

//Main Function
int main() 
{ 

//Declara variável do tipo inteiro
int mes; 

//Imprime na tela uma mensagem
printf("Entre com o numero do mes:\n"); 
//Faz input e guarda input na variável mes
scanf("%d",&mes); 
//Escolha "mes"
switch(mes){ 
//Caso o mes seja janeiro...
case 1: 
//Imprima janeiro na tela
printf("Janeiro\n"); 
//Interrompe o switch case
break; 
//Caso o mês seja "fevereiro"
case 2: 
//Imprime na tela "fevereiro"
printf("Fevereiro\n"); 
//Interrompe o switch case
break; 
//Caso o mes seja março
case 3: 
//Imprime março na tela
printf("Marco\n"); 
//Interrompe o switch case
break; 
//Caso o mês seja abril
case 4: 
//Imprime na tela "abril"
printf("Abril\n"); 
//Interrompe o switch case
break; 
//Caso o mês seja "maio"
case 5: 
//Imprime na tela "maio"
printf("Maio\n"); 
//Interrompe o switch case
break; 
//Caso o mês seja "junho"
case 6: 
//Imprime na tela "junho"
printf("Junho\n"); 
]//Interrompe o switch case
break; 
//Caso o mês seja "julho"
case 7: 
//Imprime na tela "Julho"
printf("Julho\n"); 
//Interrompe o switch case
break; 
//Caso o mês seja agosto
case 8: 
//Imprime na tela "agosto"
printf("Agosto\n"); 
//Interrompe o switch case
break; 
//Caso o mês seja setembro..
case 9: 
//Imprime na tela "setembro"
printf("Setembro\n"); 
//Interrompe o switch case
break; 
//Caso o mês seja "outubro"
case 10: 
//Imprime na tela "outubro"
printf("Outubro\n"); 
//Interrompe o switch case
break; 
//Caso o mês seja novembro
case 11: 
//Imprime na tela "Novembro"
printf("Novembro\n"); 
//Interrompe o switch case
break; 
//Caso o mês seja o último mês do ano
case 12: 
//Imprima o último mês do ano
printf("dezembro\n"); 
//Interrompe o switch case
break;
//Se o usuário digitar um número de mês inválido 
default: 
//É um mês inválido
printf("Mes invalido\n"); 
//Interrompe o switch case
break; 
} 
//Dá um "pause" no programa
system("Pause >NULL"); 
} 

