//algoritmo "ex13"
// Função : Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 10.
// Autor :Renan (ChuckBerry), Mateus Henrique de Souza Medeiros (apenas comentei o código)
// Data :        
// Seção de Declarações

//Biblioteca utilizada na manipulação do mouse e teclado
#include <stdio.h>
//Biblioteca utilizada no I/O do console
#include <conio.h>
//Biblioteca matematica com funções matemáticas
#include <math.h>
//Biblioteca usada na entrada e saída de dados
#include <iostream>

//Main function
main()
      {
    //Declara variável do tipo inteiro
      int numero;
      // Inicio Comandos
      //Um título ("maior")
      printf("==============Maior==============\n");
      printf("Digite um numero: ");
      scanf("%d",&numero);
      if(numero>10)
      printf("Numero Positivo");
      else
      return 0;
      system("Pause>null");
      }

