//algoritmo "ex23"
// Fun��o : Fa�a um algoritmo que receba um n�mero e mostre uma mensagem caso este n�mero seja maior que 80, menor
// que 25 ou igual a 40.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o c�digo, o c�digo em si n�o fui eu quem desenvolveu)
// Data : 13/02/23      
// Se��o de Declara��es 


//Biblioteca de entrada e sa�da de dados, semelhante ao stdio.h
#include <iostream>
//Biblioteca que permite o I/O do console
#include <conio.h>
//Biblioteca que possibilita entrada e sa�da de dados, possibilitando o uso de comandos como "printf" (output) e scanf (input)
#include <stdio.h>
//Biblioteca com fun��es matem�ticas
#include <math.h>
//Biblioteca que possibilita emular comandos do DOS (do windows)  ou do terminal (do linux)
#include <stdlib.h>

//Essa � a fun��o principal
main()
     {
     	//Declara apenas uma vari�vel do tipo inteiro
         int numero;
         // Se��o de comandos
         //Imprime uma mensagem na tela pedindo ao usu�rio que informe um valor
            printf("Informe um Numero: ");
            //Fun��o que faz a entrada de dados
            scanf("%d",&numero);
            //Se VAR n�mero for igual a "40", ent�o...
               if(numero==40)
                 {
                 	//Imprime na tela o n�mero digitado (40)
                   printf("Numero digitado 40");
                 } 
				 //Se VAR n�mero for maior do que "80"...           
                   if(numero>80)
                   
                     {
                     	//Imprima mensagem informando que � um n�mero maior que 80
                       printf("Numero maior que 80");
                     }
                     //Caso contr�rio/sen�o...
                    else
                     {
                     	//Se o n�mero for menor que 25, ent�o...
                       if(numero<25)
                          { 
                          //Imprima na tela uma mensagem informando que o n�mero � menor do que 26
                            printf("Numero Menor que 25");
                          }     
                     }
    	//D� um "pause" no programa
        system("PAUSE > null");
      }       

////////////////////////////////////////////////////////////////////////////////////

