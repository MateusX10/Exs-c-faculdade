//algoritmo "ex2"
// Função : Faça um algoritmo que receba dois números e ao final mostre a soma, //subtração, 
// multiplicação e a divisão dos números lidos.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o código em si não fui eu quem desenvolveu)
// Data : 13/02/23 
// Seção de Declarações

// Biblioteca de manipulação de mouse e teclado
#include <stdio.h>
//Fornece I/O de console
#include <conio.h>
//Biblioteca que permite a utilização de funções matemáticas
#include <math.h>
//biblioteca de entrada e saída de dados
#include <iostream>

//função principal
main()
      {
    //Define 2 variáveis de ponto flutuante
      float n1,n2;
      // Inicio Comandos
      //imprime algo na tela
      printf("==============  + - x / ==============\n");
      //Imprime na tela uma mensagem pedindo para o usuário digitar um valor
      printf("Informe o Primeiro valor: ");
      //Função para o input de dados por parte do usuário
      scanf("%f",&n1);
      //Imprime na tela uma mensagem pedindo para o usuário digitar um valor
      printf("Informe o Segundo valor: ");
      //Faz exatamente o mesmo que o scanf anterior, mas com variáveis diferentes a qual o valor será atribuído
      scanf("%f",&n2);
      //Imprime na tela uma mensagem com o intuito de deixar o programa mais belo
      printf("============== <>HADUKEN !<> ==============\n");
      //Printa na tela a soma entre n1 e n2
      printf("\nSOMA: %f",n1+n2);
      //Printa na tela o resultado da subtração entre n1 e n2
      printf("\nSUBTRACAO: %f",n1-n2);
      //Imprime na tela a multiplicação de ambas as vars
      printf("\nMULTIPLICACAO: %f",n1*n2);
      //Divisão de ambas as vars
      printf("\nDIVISAO: %f",n1/n2);
      //Dá um "pause" no programa 
      system("PAUSE > null"); 
      }


