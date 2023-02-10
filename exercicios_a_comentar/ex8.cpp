//algoritmo "ex8"
// Função : Elaborar um algoritmo que efetue a apresentação do valor da conversão em //real (R$) de um valor lido em dólar
// (US$). O algoritmo deverá solicitar o valor da cotação do dólar e também a //quantidade de dólares disponíveis com o usuário.
// Autor : EU
// Data :        
// Seção de Declarações


//Biblioteca destina para a manipulação do teclado/mouse
#include <stdio.h>
//Libre destinada a I/O de dados
#include <conio.h>
//Biblioteca muito útil para usar funções matemáticas
#include <math.h>
//Biblioteca para a entrada e sáida de dados
#include <iostream>

//Função principaç=l
main()
      {
    //Declara 2 VARs, ambas do tipo ponto flutuante
      float cotacao,us;
      // Inicio Comandos
      //Um título elegante
      printf("============== Money Like a Boss ==============\n");
      //Imprime e pede ao usuário que inform a cotação do dólar
      printf("Informe Cotacao DOLAR: ");
      //Função para a entrada de dados por parte do usuário, onde os dados serão armazenados na variável "cotacao", do tipo float
      scanf("%f",&cotacao);
      //Printa na tela uma mensagem e pede ao usuário que informe a quantidade de  dólar
      printf("Informe Quantidade de dolar: ");
      //Permite ao usuário fazer a entrada de dados através do teclado
      scanf("%f",&us);
      //Um título
      printf("============== <>Money<> ==============\n");
      printf("Conversao em (R$):%f\n",us/cotacao);
      printf("============== <>Money<> ==============\n");
      system("PAUSE > null"); 
      }

