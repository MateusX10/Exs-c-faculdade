// Ex: 31
// Autor : Mateus Henrique de Souza Medeiros


//Inclue bibliotecas de I/O de dados
#include <stdio.h> 
#include <iostream> 
// Se��o de Declara��es 

//Fun��o principal
int main() 
{ 
//Declara 3 vari�veis do tipo int
int x,j,i; 
//Declara vetor de 3 posi��es
int v[3]; 
// Se��o de Comandos 
//For de 3 itera��es, incremento 1
for (i=0;i<3;i++) 
{ 
//Imprime na tela uma mensagem pedindo ao usu�rio que informe um n�mero
printf("Informe o numero %d\n",i+1); 
//Fun��o que permite o input de dados 
scanf("%d",&v[i]); 
} 
//For de 3 itera��es e 1 incremento
for (i=0;i<3;i++) 
{ 
//For de 3 itera��es e 1 incremento

//Organiza em ordem crescente
for (j=0;j<3;j++) 
{ 
if (v[i]<v[j]) { 
x=v[i]; 
v[i]=v[j]; 
v[j]=x; 
} 
} 
} 

//Imprime "ordem crescente"
printf("ordem crescente!\n"); 
//For de 3 itera��es e 1 incremento
for (i=0;i<3;i++) 
{ 
//Imprime a posi��o "i" do vetor
printf("%d\n",v[i]); 
} 
/*Ordem decrescente 
printf("ordem decrescente!\n"); 
for (i=2;i>=0;i--) 
{ 
printf("%d\n",v[i]); 
} 
*/ 

//D� um "pause" no programa
system("Pause >NULL"); 
} 

