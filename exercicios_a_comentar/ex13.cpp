//algoritmo "ex13"
// Fun��o : Fa�a um algoritmo que receba um n�mero e mostre uma mensagem caso este n�mero seja maior que 10.
// Autor :Renan (ChuckBerry)
// Data :        
// Se��o de Declara��es

//Biblioteca utilizada na manipula��o do mouse e teclado
#include <stdio.h>
//Biblioteca utilizada no I/O do console
#include <conio.h>
//Biblioteca matematica com fun��es matem�ticas
#include <math.h>
//Biblioteca usada na entrada e sa�da de dados
#include <iostream>

//Main function
main()
      {
    //Declara vari�vel do tipo inteiro
      int numero;
      // Inicio Comandos
      //Um t�tulo ("maior")
      printf("==============Maior==============\n");
      printf("Digite um numero: ");
      scanf("%d",&numero);
      if(numero>10)
      printf("Numero Positivo");
      else
      return 0;
      system("Pause>null");
      }

