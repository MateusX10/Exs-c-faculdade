//algoritmo "ex2"
// Fun��o : Fa�a um algoritmo que receba dois n�meros e ao final mostre a soma, //subtra��o, 
// multiplica��o e a divis�o dos n�meros lidos.
// Autor : EU
// Data :        
// Se��o de Declara��es

// Biblioteca de manipula��o de mouse e teclado
#include <stdio.h>
//Fornece I/O de console
#include <conio.h>
//Biblioteca que permite a utiliza��o de fun��es matem�ticas
#include <math.h>
//biblioteca de entrada e sa�da de dados
#include <iostream>

//fun��o principal
main()
      {
    //Define 2 vari�veis de ponto flutuante
      float n1,n2;
      // Inicio Comandos
      //imprime algo na tela
      printf("==============  + - x / ==============\n");
      //Imprime na tela uma mensagem pedindo para o usu�rio digitar um valor
      printf("Informe o Primeiro valor: ");
      //Fun��o para o input de dados por parte do usu�rio
      scanf("%f",&n1);
      //Imprime na tela uma mensagem pedindo para o usu�rio digitar um valor
      printf("Informe o Segundo valor: ");
      //Faz exatamente o mesmo que o scanf anterior, mas com vari�veis diferentes a qual o valor ser� atribu�do
      scanf("%f",&n2);
      //Imprime na tela uma mensagem com o intuito de deixar o programa mais belo
      printf("============== <>HADUKEN !<> ==============\n");
      //Printa na tela a soma entre n1 e n2
      printf("\nSOMA: %f",n1+n2);
      //Printa na tela o resultado da subtra��o entre n1 e n2
      printf("\nSUBTRACAO: %f",n1-n2);
      //Imprime na tela a multiplica��o de ambas as vars
      printf("\nMULTIPLICACAO: %f",n1*n2);
      //Divis�o de ambas as vars
      printf("\nDIVISAO: %f",n1/n2);
      //D� um "pause" no programa 
      system("PAUSE > null"); 
      }


