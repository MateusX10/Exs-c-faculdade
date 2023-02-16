// Ex: 32
// Fun��o : 32. Dados tr�s valores A, B e C, em que A e B s�o n�meros reais e C � um caractere, pede-se para imprimir o 
// resultado da opera��o de A por B se C for um s�mbolo de operador aritm�tico; caso contr�rio deve ser 
// impressa uma mensagem de operador n�o definido. Tratar erro de divis�o por zero. 
// Autor : Mateus Henrique de Souza Medeiros (o c�digo n�o foi feito por mim, apenas o comentei)

//Inclue biblioteca que controla I/O de dados
#include <stdio.h> 
//Controla entrada e sa�da de dados
#include <iostream> 

//Fun��o Principal
int main() 
{ 

//Declara 2 vari�veis do tipo ponto flutuante
float a,b; 
//Declara vari�vel do tipo char/str
char c; 
//Imprime na tela uma mensagem pedindo ao usu�rio que informe um n�mero
printf("informe um valor para A\n"); 
//Faz o input de dados para o usu�rio
scanf("%f",&a); 
//Imprime na tela uma mensagem pedindo ao usu�rio que informe um valor para B
printf("Informe um valor para B\n"); 
//Fun��o que permite a entrada de dados por parte do usu�rio, recebendo valores do tipo ponto flutuante e guardando-o numa var "b"
scanf("%f",&b); 
//Escolha um operador aritim�tico
printf("Informe um operador para a opera��o\n"); 
//Operador aritm�tico de adi��o
printf("Adicao: +\n"); 
//Operador aritm�tico de substra��o
printf("Subtracao: -\n"); 
//Operador aritm�tico de divis�o
printf("Divisao: /\n"); 
//Operador aritm�tico de multiplica��o
printf("Multiplicacao: *\n"); 
//Fun��o usada para a entrada de dados por parte do usu�rio
scanf("%s",&c); 
//Escolha "c"
switch(c){ 
//Caso o conte�do da vari�vel "c" seja equivalente a "/"...
case '/': 
//If b for diferente de 0, ent�o...
if (b!=0) { 
//Imprime na tela o resultado da divis�o
printf("o resultado da divisao eh %1.2f\n",(a/b)); 
//Caso contr�rio
}else{ 
//Imprime na tela uma excess�o de divis�o por 0
printf("Operacao nao realizada: Divisao por zero\n"); 
} 
//Caso a opera��o escolhida seja de multiplica��o
case '*': 
//Imprime na tela o resultado da multiplica��o
printf("o resultado da multiplicacao eh %1.2f\n",(a*b)); 
//Interrompe o switch case de modo que os demais n�o sejam executados
break; 
//Caso a opera��o optada seja de subtra��o...
case '-': 
//Imprime na tela o resultado da subtra��o
printf("o resultado da subtracao eh %1.2f\n",(a-b)); 
//Interrompe o switch case
break; 
//Caso a opera��o escolhida seja de adi��o...
case '+': 
//Imprime o resultado da adi��o
printf("o resultado da adicao eh %1.2f\n",(a+b)); 
//Interrompe o switch case de modo que os outros cases n�o sejam executados
break; 
//Se nenhum dos cases for executado, ent�o...
default: 
//� um operador inv�lido
printf("Operador invalido\n"); 
//Intemrrompe switch
break; 
} 
//D� uma pausa no programa
system("Pause >NULL"); 
} 

