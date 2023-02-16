// Ex: 36

// Autor :  Mateus Henrique de Souza Medeiros (o código não foi desenvolvido por mim, eu apenas o comentei)
// Função :36. Faça um algoritmo que calcule o valor da conta de luz de uma pessoa. Sabe-se que o cálculo da conta de luz segue a tabela abaixo:
//Tipo de Cliente Valor do KW/h
//1 (Residência) 0,60
//2 (Comércio) 0,48
//3 (Indústria) 1,29


//Inclui biblioteca de entrada e saída de dados, permitindo funções como printf e scanf
#include <stdio.h>   
//Inclue biblioteca de entrada e saída de dados
#include <iostream> 
//Main  Function
int main()
{
//Declara variável do tipo floaqt
float consumo;
//Declara variável do tipo int
int tipo;
//Imprime na tela mensagem pedindo o consumo em kw/h
printf("Informe o consumo em kw/h\n");
//Permite o input de dados, assim o usuário consegue digitar dados
scanf("%f",&consumo);
//O tipo de cliente
printf("Informe o tipo de cliente\n");
//Residencial, comercial, industrial... qual?
printf("1-Residencia, 2-Comercio, 3-Industria\n");
//Função que permite entrada de dados do usuário (tipo int), guardando resultado numa variável "tipo"
scanf("%d",&tipo);
//Escolha "tipo"
   switch(tipo){
   	//Caso o conteúdo da variável seja "1"
                case 1:
                //Imprime valor da conta
                printf("O valor da conta eh %1.2f\n",(consumo)*(0.6));
                //Interrompe switch case
                break;  
                //Caso o conteúdo da variável seja 2
                case 2:
                //O valor da conta
                printf("O valor da conta eh %1.2f\n",(consumo)*(0.48));
                //Interrompe switch case
                break;  
                //Caso o conteúdo da variável seja igual a 3 então
                case 3:
                //Imprime o valor da conta
                printf("O valor da conta eh %1.2f\n",(consumo)*(1.29));
                //Interrompe o switch case
                break;  
                //Se nenhum dos cases foi True
                default:
                	//Cliente invalido
                printf("Tipo de cliente invalido\n"); 
                //Interrompe switch case
                break;               
   }
//Dá uma "pause" no programa
system("Pause >NULL");
}

