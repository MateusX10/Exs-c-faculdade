//algoritmo "ex26"
//Fa�a um algoritmo que leia um n�mero de 1 a 5 e escreva por extenso.
// Caso o usu�rio digite um n�mero que n�o esteja neste intervalo, exibir mensagem: n�mero inv�lido.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o c�digo, o programa em si n�o foi desenvolvido por mim)
// Data : 14/02/23
// Se��o de Declara��es 


//Biblioteca de entrada e sa�da de dados
#include <iostream>
//Biblioteca que permite o I/O do console
#include <conio.h>
//Biblioteca que permite a entrada e sa�da de dados: manipula��o do teclado e mouse (printf e scanf)
#include <stdio.h>
//Biblioteca matem�tica que possui fun��es matem�ticas
#include <math.h>
//Biblioteca que permite emular todos os comandos do DOS (no caso do windows) e do terminal (no caso de S.Os baseados no Unix)
#include <stdlib.h>

//Main Function
main()
     {
     	//Declara vari�vel do tipo inteiraq
         int numero;
         {
            //se��o de comandos
            //Imprime na tela uma mensagem pedindo que informe um valor
            printf("Informe um Numero: ");
            //A fun��o abaixo permite que o user d� um input de dados pelo teclado, logo guardando o conte�do numa vari�vel
            scanf("%d",&numero);
            	//Verifica se o n�mero � maior ou igual a 1 ou se � menor ou igual a 5
                 if(numero>=1 && numero<=5)
                   {
                   	//Se sim, ent�o � mostrado na tela uma mensagem
                     printf("====== [NUMERO NO INTERVALO 1-5] ======");
                   }
                   //Sen�o...
                   else
                   {
                   	
					   //N�mero inv�lido
                    printf("()()()()()[NUMERO INVALIDO]()()()()()");  
                   }
          }
          //D� um "pause" no programa
          system("PAUSE > null");
     }                 
                          
////////////////////////////

