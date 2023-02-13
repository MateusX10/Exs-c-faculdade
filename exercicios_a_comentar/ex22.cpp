//algoritmo "ex22"
// Fun��o : Fa�a um algoritmo que receba o pre�o de custo e o pre�o de venda de 40 produtos. Mostre como resultado se
// houve lucro, preju�zo ou empate para cada produto. Informe media de pre�o de custo e do pre�o de venda.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o c�digo, o c�digo em si n�o fui eu quem desenvolveu)
// Data : 13/02/23 

// Se��o de Declara��es 

//Biblioteca utilizada na entrada e sa�da de dados 
#include <iostream>
//Biblioteca que permite I/O do console
#include <conio.h>
//Biblioteca que permite a entrada e sa�da de dados pelo teclado, belos exemplos do benef�cio desta libra s�o os comandos: "printf" e "scanf"
#include <stdio.h>
//Biblioteca com fun��es matem�ticas
#include <math.h>
//Biblioteca que possibilita a emula��o dos comandos do S.O
#include <stdlib.h>

//Main Function
main()
     {
    //De�lara muita vari�veis do tipo ponto flutuante
       float pc,pv,pcmedia,pvmedia; // pre�o custo e pre�o de venda
       //Declara var do tipo inteiro
       int x;
       //Faz um for de 1 at� 4, o bloco de c�digo abaixo ser� executado 4 vezes 
       for(x=1;x<4;x++)
           {              
           //Imprime um cabe�alho
           printf("<><><><><><><>Preco Custo e Preco Venda<><><><><><><>\n");
           //Imprime na tela uma mensagem
           printf("Informe Preco de Custo: ");
           //Fun��o de input de dados
           scanf("%f",&pc);
           //Cal�ula m�dia do pre�o de custo
           pcmedia=((pcmedia)+(pc));
           //Imprime uma mensagem na tela
           printf("Informe Preco de Venda: ");
           //Faz o input de dados guardando o resultado na var "pv"
           scanf("%f",&pv);
           //Calcula m�dia do pre�o de venda
           pvmedia=((pcmedia)+(pc));
           //Limpa a tela do console
           system("cls"); 
           //If pre�o de custo e pre�o de venda foram iguais, ent�o...
             if(pc==pv)
               {
               	//Cabe�alho que informa que houve um empate
                printf("---------------Houve Empate---------------\n\n");
               }
               //Caso contr�rio/sen�o...
               else
               {
               	//Se o pre�o de venda for superior ao pre�o de compra, ent�o...
                   if(pv<pc)
                   {
                   	//Imprima um cabe�alho que informa que houve preju�zo
                     printf("---------------Prejuizo---------------\n\n");
                   }
                   //Sen�o
                   else
                   {
                   	//Imprima na tela uma mensagem 	que informa que houve lucro
                       printf("---------------Houve Lucro---------------\n\n");
                   }  
               }  
            }
            //Imprime a m�dia do pre�o de custo
         printf("Preco Custo Media:%f",((pcmedia)/(40)));
         //Imprime m�dia do pre�o de venda
         printf("\nPreco Venda Media:%f",((pvmedia)/(40)));
         //D� um "pause" no sistema
         system("PAUSE > null");
         }


