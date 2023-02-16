//algoritmo "ex28"   
// Função :28. Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584 funcionários de acordo com os 
// seguintes critérios: 
// a) 50% para aqueles que ganham menos do que três salários mínimos; 
// b) 20% para aqueles que ganham entre três até dez salários mínimos; 
// c) 15% para aqueles que ganham acima de dez até vinte salários mínimos; 
// d) 10% para os demais funcionários. 
// Leia o nome do funcionário, seu salário e o valor do salário mínimo. Calcule o seu novo salário reajustado. 
//Escrever o nome do funcionário, o reajuste e seu novo salário. Calcule quanto à empresa vai aumentar sua folha de pagamento. 
// Autor : Mateus Henrique de Souza Medeiros (apenas comentei o código, mas não fui eu quem desenvolveu o programa


//Importa biblioteca de entrada  e saída de dados, possibilitando comandos como printf e scanf
#include <stdio.h> 
//Importa biblioteca de entrada e saída de dados
#include <iostream> 

//Função Principal
int main() 
{ 

//Declara 4 variáveis do tipo ponto flutuante
float reajuste,salario,sminimo,aumento; 
//Declara variável do tipo char/str de até 25 caracteres
char nome[25]; 
//Declara 2 variáveis do tipo inteiro
int i,fim; 
//Imprime uma mensagem informando ao usuário que ele deve digitar o valor do salário mínimo
printf("Informe o valor do salario minimo\n"); 
//Função de entrada de dados por parte do usuário, guardando o resultado na variável "sminimo"
scanf("%f",&sminimo); 
//Atribui o valor "584" a variável "fim"
fim=584; 
//Atribui valor "0" a variável "aumento"
aumento=0; 
//Faz um for de um intervalo de 0 até o valor da variável "fim", incrementando 1
for(i=0;i<fim;i++){ 
//Imprime uma mensagem pedindo que informe o nome do funcionário
printf("Informe o nome do %d funcionario:\n",i+1); 
//Função que permiteo  input de dados do usuário
scanf("%s",&nome); 
//Imprimena tela uma mensagem pedindo que informe o salário
printf("Informe o salario em R$:\n"); 
//Faz o input de dados para a variável salário
scanf("%f",&(salario)); 
//If o salário for menor que o produto do salário mínimo por 3, então...
if ((salario) < (3*(sminimo))){ 
//Faz o reajuste salário de 50%
reajuste=(0.5)*(salario); 
//Senão...
} else { 
//If o salário for maior/igual ao salário mínimo multiplicado por 3 e o salário for menor ou igual a 10 multiplicado pelo salário mínimo, então...
if (((salario) >= (3*(sminimo))) && ((salario)<=(10*(sminimo)))) { 
//Faz o reajuste salário de 20%
reajuste=(0.2)*(salario); 
//Senão...
}else{ 
//If o salário for maior que o produto do salário mínimo por 10 e o salário for menor ou igual ao produto do salário mínimo por 20, então...
if (((salario) > (10*(sminimo))) && ((salario)<=(20*(sminimo)))) { 
//Faz o resjuste salarial de 15%
(reajuste)=(0.15)*(salario); 
//Senão...
}else{ 
//Faz o reajuste salarial de 10%
(reajuste)=(0.10)*(salario); 
} 
} 
} 
//Imprime na tela o reajuste salarial recebido pelo funcionário
printf("%s recebeu (reajuste) de %1.2f \n",nome,(reajuste)); 
//Imprime na tela o antigo e novo salário do funcionário, respectivamente
printf("O novo (salario) passou de R$ %1.2f para R$ %1.2f\n",(salario),((salario)+(reajuste))); 
//Calcula aumento
aumento=(aumento)+(reajuste); 
} 
//Imprime aumento na folha
printf("O aumento na folha foi de R$ %1.2f\n",aumento); 
//Pausa no programa
system("Pause >NULL"); 
} 

