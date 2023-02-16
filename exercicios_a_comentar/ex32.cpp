// Ex: 32
// Função : 32. Dados três valores A, B e C, em que A e B são números reais e C é um caractere, pede-se para imprimir o 
// resultado da operação de A por B se C for um símbolo de operador aritmético; caso contrário deve ser 
// impressa uma mensagem de operador não definido. Tratar erro de divisão por zero. 
// Autor : Mateus Henrique de Souza Medeiros (o código não foi feito por mim, apenas o comentei)

//Inclue biblioteca que controla I/O de dados
#include <stdio.h> 
//Controla entrada e saída de dados
#include <iostream> 

//Função Principal
int main() 
{ 

//Declara 2 variáveis do tipo ponto flutuante
float a,b; 
//Declara variável do tipo char/str
char c; 
//Imprime na tela uma mensagem pedindo ao usuário que informe um número
printf("informe um valor para A\n"); 
//Faz o input de dados para o usuário
scanf("%f",&a); 
//Imprime na tela uma mensagem pedindo ao usuário que informe um valor para B
printf("Informe um valor para B\n"); 
//Função que permite a entrada de dados por parte do usuário, recebendo valores do tipo ponto flutuante e guardando-o numa var "b"
scanf("%f",&b); 
//Escolha um operador aritimético
printf("Informe um operador para a operação\n"); 
//Operador aritmético de adição
printf("Adicao: +\n"); 
//Operador aritmético de substração
printf("Subtracao: -\n"); 
//Operador aritmético de divisão
printf("Divisao: /\n"); 
//Operador aritmético de multiplicação
printf("Multiplicacao: *\n"); 
//Função usada para a entrada de dados por parte do usuário
scanf("%s",&c); 
//Escolha "c"
switch(c){ 
//Caso o conteúdo da variável "c" seja equivalente a "/"...
case '/': 
//If b for diferente de 0, então...
if (b!=0) { 
//Imprime na tela o resultado da divisão
printf("o resultado da divisao eh %1.2f\n",(a/b)); 
//Caso contrário
}else{ 
//Imprime na tela uma excessão de divisão por 0
printf("Operacao nao realizada: Divisao por zero\n"); 
} 
//Caso a operação escolhida seja de multiplicação
case '*': 
//Imprime na tela o resultado da multiplicação
printf("o resultado da multiplicacao eh %1.2f\n",(a*b)); 
//Interrompe o switch case de modo que os demais não sejam executados
break; 
//Caso a operação optada seja de subtração...
case '-': 
//Imprime na tela o resultado da subtração
printf("o resultado da subtracao eh %1.2f\n",(a-b)); 
//Interrompe o switch case
break; 
//Caso a operação escolhida seja de adição...
case '+': 
//Imprime o resultado da adição
printf("o resultado da adicao eh %1.2f\n",(a+b)); 
//Interrompe o switch case de modo que os outros cases não sejam executados
break; 
//Se nenhum dos cases for executado, então...
default: 
//É um operador inválido
printf("Operador invalido\n"); 
//Intemrrompe switch
break; 
} 
//Dá uma pausa no programa
system("Pause >NULL"); 
} 

