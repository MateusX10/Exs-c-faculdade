// Ex: 30
// Fun��o :30. Fa�a um algoritmo que receba o nome a idade, o sexo e sal�rio fixo de um funcion�rio. 
// Mostre o nome e o sal�rio l�quido: 
// Autor : Mateus Henrique de Souza Medeiros (programa n�o foi feito por mim, apenas comentei-o

//Adiciona biblioteca de entrada e sa�da de dados
#include <stdio.h> 
#include <iostream> 
//Main Function
int main() 
{ 

//Declara vari�vel do tipo int
int idade; 
//declara vari�vel do tipo char
char nome[35]; 
char sexo; 
//Declara vari�vel do tipo float
float sf,sl; 
//Imprime na tela uma mensagem pedindo que digite o nome do funcion�rio
printf("Informe o nome do funcionario:\n"); 
//Fun��o que faz input dos dados do usu�rio, guardando o resultado numa vari�vel
scanf("%s",&nome); 
//Informe o sal�rio fixo
printf("Informe o salario fixo em R$:\n");
//Faz o input
scanf("%f",&sf); 
//Imprime na tela uma mensagem pedindo que informe a idade
printf("Informe a idade"); 
//Faz o input de dados do usu�rio
scanf("%d",&idade); 
//vari�vel "sexo" recebe "I"
sexo='I'; 
//Fa�a...
do { 
//Imprime na tela "informe o sexo"
printf("Informe o sexo: F ou M \n"); 
//Input de dados do usu�rio
scanf("%s",&sexo); 
} 
//Enquanto o sexo for diferente de "M" e "F", fa�a...
while ((sexo!='M') && (sexo!='F')); 
//Escolha "sexo"
switch(sexo){ 
//Caso o sexo seja feminino
case 'F': 
//If a idade for superior ou igual a 30 ent�o...
if (idade >=30){ 
//Sal�rio
sl=sf+200;
//Sen�o... 
}else{ 
//Sal�rio
sl=sf+80; 
} 
//Interrompe o switch case 
break; 
//Caso sexo seja "M"
case 'M': 
//If idade for maior/igual a 30...
if (idade >=30){ 
//Sal�rio l�quido recebe sal�rio fixo mais 100
sl=sf+100; 
//Sen�o
}else{ 
//Sal�rio l�quido recebe sal�rio fixo + 50
sl=sf+50; 
} 
//Interoompe switch
break; 
} //fim switch 
//Imprime o sal�rio l�quido
printf("O salario liquido de %s eh R$ %1.2f",nome,sl); 
//D� um "pause" no programa
system("Pause > NULL");
}
