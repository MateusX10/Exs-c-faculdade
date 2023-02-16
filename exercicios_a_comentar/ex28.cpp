//algoritmo "ex28"   
// Fun��o :28. Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584 funcion�rios de acordo com os 
// seguintes crit�rios: 
// a) 50% para aqueles que ganham menos do que tr�s sal�rios m�nimos; 
// b) 20% para aqueles que ganham entre tr�s at� dez sal�rios m�nimos; 
// c) 15% para aqueles que ganham acima de dez at� vinte sal�rios m�nimos; 
// d) 10% para os demais funcion�rios. 
// Leia o nome do funcion�rio, seu sal�rio e o valor do sal�rio m�nimo. Calcule o seu novo sal�rio reajustado. 
//Escrever o nome do funcion�rio, o reajuste e seu novo sal�rio. Calcule quanto � empresa vai aumentar sua folha de pagamento. 
// Autor : Mateus Henrique de Souza Medeiros (apenas comentei o c�digo, mas n�o fui eu quem desenvolveu o programa


//Importa biblioteca de entrada  e sa�da de dados, possibilitando comandos como printf e scanf
#include <stdio.h> 
//Importa biblioteca de entrada e sa�da de dados
#include <iostream> 

//Fun��o Principal
int main() 
{ 

//Declara 4 vari�veis do tipo ponto flutuante
float reajuste,salario,sminimo,aumento; 
//Declara vari�vel do tipo char/str de at� 25 caracteres
char nome[25]; 
//Declara 2 vari�veis do tipo inteiro
int i,fim; 
//Imprime uma mensagem informando ao usu�rio que ele deve digitar o valor do sal�rio m�nimo
printf("Informe o valor do salario minimo\n"); 
//Fun��o de entrada de dados por parte do usu�rio, guardando o resultado na vari�vel "sminimo"
scanf("%f",&sminimo); 
//Atribui o valor "584" a vari�vel "fim"
fim=584; 
//Atribui valor "0" a vari�vel "aumento"
aumento=0; 
//Faz um for de um intervalo de 0 at� o valor da vari�vel "fim", incrementando 1
for(i=0;i<fim;i++){ 
//Imprime uma mensagem pedindo que informe o nome do funcion�rio
printf("Informe o nome do %d funcionario:\n",i+1); 
//Fun��o que permiteo  input de dados do usu�rio
scanf("%s",&nome); 
//Imprimena tela uma mensagem pedindo que informe o sal�rio
printf("Informe o salario em R$:\n"); 
//Faz o input de dados para a vari�vel sal�rio
scanf("%f",&(salario)); 
//If o sal�rio for menor que o produto do sal�rio m�nimo por 3, ent�o...
if ((salario) < (3*(sminimo))){ 
//Faz o reajuste sal�rio de 50%
reajuste=(0.5)*(salario); 
//Sen�o...
} else { 
//If o sal�rio for maior/igual ao sal�rio m�nimo multiplicado por 3 e o sal�rio for menor ou igual a 10 multiplicado pelo sal�rio m�nimo, ent�o...
if (((salario) >= (3*(sminimo))) && ((salario)<=(10*(sminimo)))) { 
//Faz o reajuste sal�rio de 20%
reajuste=(0.2)*(salario); 
//Sen�o...
}else{ 
//If o sal�rio for maior que o produto do sal�rio m�nimo por 10 e o sal�rio for menor ou igual ao produto do sal�rio m�nimo por 20, ent�o...
if (((salario) > (10*(sminimo))) && ((salario)<=(20*(sminimo)))) { 
//Faz o resjuste salarial de 15%
(reajuste)=(0.15)*(salario); 
//Sen�o...
}else{ 
//Faz o reajuste salarial de 10%
(reajuste)=(0.10)*(salario); 
} 
} 
} 
//Imprime na tela o reajuste salarial recebido pelo funcion�rio
printf("%s recebeu (reajuste) de %1.2f \n",nome,(reajuste)); 
//Imprime na tela o antigo e novo sal�rio do funcion�rio, respectivamente
printf("O novo (salario) passou de R$ %1.2f para R$ %1.2f\n",(salario),((salario)+(reajuste))); 
//Calcula aumento
aumento=(aumento)+(reajuste); 
} 
//Imprime aumento na folha
printf("O aumento na folha foi de R$ %1.2f\n",aumento); 
//Pausa no programa
system("Pause >NULL"); 
} 

