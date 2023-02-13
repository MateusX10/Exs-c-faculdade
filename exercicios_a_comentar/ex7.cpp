//algoritmo "ex7"
// Função : Ler uma temperatura em graus Celsius e apresentá-la convertida em graus //Fahrenheit. A fórmula de conversão é:
// F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
// Autor : EU
// Data :        
// Seção de Declarações

//Biblioteca usada para a manipulação de teclado e mouse
#include <stdio.h>
//Biblioteca destinada a I/O do console
#include <conio.h>
//Biblioteca que contém funções matemáticas úteis
#include <math.h>
//Biblioteca para a entrada e saída de dados
#include <iostream>

//Função principal
main()
      {
    //Declara 2 variáveis do tipo ponto flutuante
      float C,F;
      // Inicio Comandos
      //Printa na tela um "título"
      printf("============== Temperatura System ==============\n");
      //Imprime e pede ao usuário para informar um valor em graus celsius
      printf("Digite o valor em Celsius: ");
      //Função destinada para o usuário realizar o input de dados (para a VAR "c")
      scanf("%f",&C);
      //Faz a conversão de graus celsius para fahrenheit e atribui o resultado a uma variável "F"
      F=((9*C+160)/5);
      //Mais um título
      printf("============== Em Fahrenheit ==============\n");
      //Printa na tela a média
      printf("Media:%2.2f\n",F);
      //Outro título
      printf("============== Em Fahrenheit ==============\n");
      //Dá um 'pause' no sistema
      system("PAUSE > null"); 
      }

