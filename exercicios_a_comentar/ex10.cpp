//algoritmo "ex10"
// Fun��o : A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) //presta��es sem juros. Fa�a um 
//algoritmo que  receba um valor de uma compra e mostre o valor das presta��es.
// Autor : EU
// Data :        
// Se��o de Declara��es


//Biblioteca utilizada na manipula��o de teclado e mouse
#include <stdio.h>
//Biblioteca de Input/output do console
#include <conio.h>
//Biblioteca com fun��es matem�ticas �teis
#include <math.h>
//Biblioteca utilizada para a entrada e sa�da de dados
#include <iostream>


//Main Function
main()
      {
    //Declara uma vari�vel do tipo float
      float compra;
      // Inicio Comandos
      //Imprime na tela um t�tulo
      printf("==============Mamao JHOW==============\n");
      //Printa na tela uma mensagem que pede ao usu�rio que digite o valor da compra
      printf("Digite valor da compra: ");
      //Fun��o para o input de dados do usu�rio, onde o  resultado ir� para a vari�vel "compra", do tipo ponto flutuante
      scanf("%f",&compra);
      //Imprime na tela outro t�tulo de fato atraente.
      printf("============== <>Parcelamento<> ==============\n");
      //Imprime parcelamento da compra em 5X
      printf("Em 5X:%f\n",compra/5);
      //T�tulo de fechamento
      printf("============== <>Parcelamento<> ==============\n");
      system("PAUSE > null"); 
      }




