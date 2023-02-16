// Ex: 36

// Autor :  Mateus Henrique de Souza Medeiros (o c�digo n�o foi desenvolvido por mim, eu apenas o comentei)
// Fun��o :36. Fa�a um algoritmo que calcule o valor da conta de luz de uma pessoa. Sabe-se que o c�lculo da conta de luz segue a tabela abaixo:
//Tipo de Cliente Valor do KW/h
//1 (Resid�ncia) 0,60
//2 (Com�rcio) 0,48
//3 (Ind�stria) 1,29


//Inclui biblioteca de entrada e sa�da de dados, permitindo fun��es como printf e scanf
#include <stdio.h>   
//Inclue biblioteca de entrada e sa�da de dados
#include <iostream> 
//Main  Function
int main()
{
//Declara vari�vel do tipo floaqt
float consumo;
//Declara vari�vel do tipo int
int tipo;
//Imprime na tela mensagem pedindo o consumo em kw/h
printf("Informe o consumo em kw/h\n");
//Permite o input de dados, assim o usu�rio consegue digitar dados
scanf("%f",&consumo);
//O tipo de cliente
printf("Informe o tipo de cliente\n");
//Residencial, comercial, industrial... qual?
printf("1-Residencia, 2-Comercio, 3-Industria\n");
//Fun��o que permite entrada de dados do usu�rio (tipo int), guardando resultado numa vari�vel "tipo"
scanf("%d",&tipo);
//Escolha "tipo"
   switch(tipo){
   	//Caso o conte�do da vari�vel seja "1"
                case 1:
                //Imprime valor da conta
                printf("O valor da conta eh %1.2f\n",(consumo)*(0.6));
                //Interrompe switch case
                break;  
                //Caso o conte�do da vari�vel seja 2
                case 2:
                //O valor da conta
                printf("O valor da conta eh %1.2f\n",(consumo)*(0.48));
                //Interrompe switch case
                break;  
                //Caso o conte�do da vari�vel seja igual a 3 ent�o
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
//D� uma "pause" no programa
system("Pause >NULL");
}

