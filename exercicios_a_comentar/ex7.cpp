//algoritmo "ex7"
// Fun��o : Ler uma temperatura em graus Celsius e apresent�-la convertida em graus //Fahrenheit. A f�rmula de convers�o �:
// F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
// Autor : EU
// Data :        
// Se��o de Declara��es

//Biblioteca usada para a manipula��o de teclado e mouse
#include <stdio.h>
//Biblioteca destinada a I/O do console
#include <conio.h>
//Biblioteca que cont�m fun��es matem�ticas �teis
#include <math.h>
//Biblioteca para a entrada e sa�da de dados
#include <iostream>

//Fun��o principal
main()
      {
    //Declara 2 vari�veis do tipo ponto flutuante
      float C,F;
      // Inicio Comandos
      //Printa na tela um "t�tulo"
      printf("============== Temperatura System ==============\n");
      //Imprime e pede ao usu�rio para informar um valor em graus celsius
      printf("Digite o valor em Celsius: ");
      //Fun��o destinada para o usu�rio realizar o input de dados (para a VAR "c")
      scanf("%f",&C);
      //Faz a convers�o de graus celsius para fahrenheit e atribui o resultado a uma vari�vel "F"
      F=((9*C+160)/5);
      //Mais um t�tulo
      printf("============== Em Fahrenheit ==============\n");
      //Printa na tela a m�dia
      printf("Media:%2.2f\n",F);
      //Outro t�tulo
      printf("============== Em Fahrenheit ==============\n");
      //D� um 'pause' no sistema
      system("PAUSE > null"); 
      }

