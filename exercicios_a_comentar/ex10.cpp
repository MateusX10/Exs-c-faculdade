//algoritmo "ex10"
// Função : A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) //prestações sem juros. Faça um 
//algoritmo que  receba um valor de uma compra e mostre o valor das prestações.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o código em si não fui eu quem desenvolveu)
// Data : 13/02/23 
// Seção de Declarações


//Biblioteca utilizada na manipulação de teclado e mouse
#include <stdio.h>
//Biblioteca de Input/output do console
#include <conio.h>
//Biblioteca com funções matemáticas úteis
#include <math.h>
//Biblioteca utilizada para a entrada e saída de dados
#include <iostream>


//Main Function
main()
      {
    //Declara uma variável do tipo float
      float compra;
      // Inicio Comandos
      //Imprime na tela um título
      printf("==============Mamao JHOW==============\n");
      //Printa na tela uma mensagem que pede ao usuário que digite o valor da compra
      printf("Digite valor da compra: ");
      //Função para o input de dados do usuário, onde o  resultado irá para a variável "compra", do tipo ponto flutuante
      scanf("%f",&compra);
      //Imprime na tela outro título de fato atraente.
      printf("============== <>Parcelamento<> ==============\n");
      //Imprime parcelamento da compra em 5X
      printf("Em 5X:%f\n",compra/5);
      //Título de fechamento
      printf("============== <>Parcelamento<> ==============\n");
      system("PAUSE > null"); 
      }




