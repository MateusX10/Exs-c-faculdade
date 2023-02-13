//algoritmo "ex23"
// Função : Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor
// que 25 ou igual a 40.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o código em si não fui eu quem desenvolveu)
// Data : 13/02/23      
// Seção de Declarações 


//Biblioteca de entrada e saída de dados, semelhante ao stdio.h
#include <iostream>
//Biblioteca que permite o I/O do console
#include <conio.h>
//Biblioteca que possibilita entrada e saída de dados, possibilitando o uso de comandos como "printf" (output) e scanf (input)
#include <stdio.h>
//Biblioteca com funções matemáticas
#include <math.h>
//Biblioteca que possibilita emular comandos do DOS (do windows)  ou do terminal (do linux)
#include <stdlib.h>

//Essa é a função principal
main()
     {
     	//Declara apenas uma variável do tipo inteiro
         int numero;
         // Seção de comandos
         //Imprime uma mensagem na tela pedindo ao usuário que informe um valor
            printf("Informe um Numero: ");
            //Função que faz a entrada de dados
            scanf("%d",&numero);
            //Se VAR número for igual a "40", então...
               if(numero==40)
                 {
                 	//Imprime na tela o número digitado (40)
                   printf("Numero digitado 40");
                 } 
				 //Se VAR número for maior do que "80"...           
                   if(numero>80)
                   
                     {
                     	//Imprima mensagem informando que é um número maior que 80
                       printf("Numero maior que 80");
                     }
                     //Caso contrário/senão...
                    else
                     {
                     	//Se o número for menor que 25, então...
                       if(numero<25)
                          { 
                          //Imprima na tela uma mensagem informando que o número é menor do que 26
                            printf("Numero Menor que 25");
                          }     
                     }
    	//Dá um "pause" no programa
        system("PAUSE > null");
      }       

////////////////////////////////////////////////////////////////////////////////////

