//algoritmo "ex26"
//Faça um algoritmo que leia um número de 1 a 5 e escreva por extenso.
// Caso o usuário digite um número que não esteja neste intervalo, exibir mensagem: número inválido.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o programa em si não foi desenvolvido por mim)
// Data : 14/02/23
// Seção de Declarações 


//Biblioteca de entrada e saída de dados
#include <iostream>
//Biblioteca que permite o I/O do console
#include <conio.h>
//Biblioteca que permite a entrada e saída de dados: manipulação do teclado e mouse (printf e scanf)
#include <stdio.h>
//Biblioteca matemática que possui funções matemáticas
#include <math.h>
//Biblioteca que permite emular todos os comandos do DOS (no caso do windows) e do terminal (no caso de S.Os baseados no Unix)
#include <stdlib.h>

//Main Function
main()
     {
     	//Declara variável do tipo inteiraq
         int numero;
         {
            //seção de comandos
            //Imprime na tela uma mensagem pedindo que informe um valor
            printf("Informe um Numero: ");
            //A função abaixo permite que o user dê um input de dados pelo teclado, logo guardando o conteúdo numa variável
            scanf("%d",&numero);
            	//Verifica se o número é maior ou igual a 1 ou se é menor ou igual a 5
                 if(numero>=1 && numero<=5)
                   {
                   	//Se sim, então é mostrado na tela uma mensagem
                     printf("====== [NUMERO NO INTERVALO 1-5] ======");
                   }
                   //Senão...
                   else
                   {
                   	
					   //Número inválido
                    printf("()()()()()[NUMERO INVALIDO]()()()()()");  
                   }
          }
          //Dá um "pause" no programa
          system("PAUSE > null");
     }                 
                          
////////////////////////////

