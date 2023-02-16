// Ex: 30
// Função :30. Faça um algoritmo que receba o nome a idade, o sexo e salário fixo de um funcionário. 
// Mostre o nome e o salário líquido: 
// Autor : Mateus Henrique de Souza Medeiros (programa não foi feito por mim, apenas comentei-o

//Adiciona biblioteca de entrada e saída de dados
#include <stdio.h> 
#include <iostream> 
//Main Function
int main() 
{ 

//Declara variável do tipo int
int idade; 
//declara variável do tipo char
char nome[35]; 
char sexo; 
//Declara variável do tipo float
float sf,sl; 
//Imprime na tela uma mensagem pedindo que digite o nome do funcionário
printf("Informe o nome do funcionario:\n"); 
//Função que faz input dos dados do usuário, guardando o resultado numa variável
scanf("%s",&nome); 
//Informe o salário fixo
printf("Informe o salario fixo em R$:\n");
//Faz o input
scanf("%f",&sf); 
//Imprime na tela uma mensagem pedindo que informe a idade
printf("Informe a idade"); 
//Faz o input de dados do usuário
scanf("%d",&idade); 
//variável "sexo" recebe "I"
sexo='I'; 
//Faça...
do { 
//Imprime na tela "informe o sexo"
printf("Informe o sexo: F ou M \n"); 
//Input de dados do usuário
scanf("%s",&sexo); 
} 
//Enquanto o sexo for diferente de "M" e "F", faça...
while ((sexo!='M') && (sexo!='F')); 
//Escolha "sexo"
switch(sexo){ 
//Caso o sexo seja feminino
case 'F': 
//If a idade for superior ou igual a 30 então...
if (idade >=30){ 
//Salário
sl=sf+200;
//Senão... 
}else{ 
//Salário
sl=sf+80; 
} 
//Interrompe o switch case 
break; 
//Caso sexo seja "M"
case 'M': 
//If idade for maior/igual a 30...
if (idade >=30){ 
//Salário líquido recebe salário fixo mais 100
sl=sf+100; 
//Senão
}else{ 
//Salário líquido recebe salário fixo + 50
sl=sf+50; 
} 
//Interoompe switch
break; 
} //fim switch 
//Imprime o salário líquido
printf("O salario liquido de %s eh R$ %1.2f",nome,sl); 
//Dá um "pause" no programa
system("Pause > NULL");
}
