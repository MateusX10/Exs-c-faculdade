//algoritmo "ex8"
// Fun��o : Elaborar um algoritmo que efetue a apresenta��o do valor da convers�o em //real (R$) de um valor lido em d�lar
// (US$). O algoritmo dever� solicitar o valor da cota��o do d�lar e tamb�m a //quantidade de d�lares dispon�veis com o usu�rio.
// Autor : EU
// Data :        
// Se��o de Declara��es


//Biblioteca destina para a manipula��o do teclado/mouse
#include <stdio.h>
//Libre destinada a I/O de dados
#include <conio.h>
//Biblioteca muito �til para usar fun��es matem�ticas
#include <math.h>
//Biblioteca para a entrada e s�ida de dados
#include <iostream>

//Fun��o principa�=l
main()
      {
    //Declara 2 VARs, ambas do tipo ponto flutuante
      float cotacao,us;
      // Inicio Comandos
      //Um t�tulo elegante
      printf("============== Money Like a Boss ==============\n");
      //Imprime e pede ao usu�rio que inform a cota��o do d�lar
      printf("Informe Cotacao DOLAR: ");
      //Fun��o para a entrada de dados por parte do usu�rio, onde os dados ser�o armazenados na vari�vel "cotacao", do tipo float
      scanf("%f",&cotacao);
      //Printa na tela uma mensagem e pede ao usu�rio que informe a quantidade de  d�lar
      printf("Informe Quantidade de dolar: ");
      //Permite ao usu�rio fazer a entrada de dados atrav�s do teclado
      scanf("%f",&us);
      //Um t�tulo
      printf("============== <>Money<> ==============\n");
      printf("Conversao em (R$):%f\n",us/cotacao);
      printf("============== <>Money<> ==============\n");
      system("PAUSE > null"); 
      }

