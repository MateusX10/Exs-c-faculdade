//algoritmo "ex15"
// Fun��o : Fa�a um algoritmo que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200.
// Autor : Mateus Henrique de Souza Medeiros (apenas comentei o c�digo, mas o c�digo n�o foi desenvolvido por mim)
// Data : 11/02/23
// Se��o de Declara��es


//Uma biblioteca t�o �til e usada que imagino que voc� j� saiba a fun��o dela
#include <stdio.h>
//Biblioteca usada no I/O de dados
#include <conio.h>
//Uma biblioteca matem�tica, acredito que sup�s que haja fun��es matem�ticas nela
#include <math.h>
//Biblioteca usada na entrada e sa�da de dados
#include <iostream>


//J� apresentei ela uma vez, mas n�o custa nada fazer de novo: esta � a main funtion, muito prazer!
main()
      {
    //Declara vari�vel do tipo inteiro 
      int v1;
      // Inicio Comandos
      //Imprime um t�tulo bonito
      printf("==============Intervalos==============\n");
      //Imprime e pede ao usu�rio que digite um n�mero
      printf("Digite Um Valor: ");
      //Fun��o que permite que o usu�rio fa�a o input de dados, de fato �til
      scanf("%d",&v1);
      {
    //Verifica se o conte�do da vari�vel "v1" se encontra no intervalo de 100 a 200
      if(v1>=100 && v1<=200)
      //Ela est� no intervalo de 100 a 200?!�timo, diga isso ao usu�rio por mim
      printf("Esta no Intervalo 100 a 200\n");
    //Caso contr�rio...
      else
      //Ela n�o est� no intervalo de 100 a 200?Muito bem, diga isso ao usu�rio para mim
      printf("Fora do Intervalo 100 a 200\n");
      //Agora d� um "pause" no sistema at� que o usu�rio digite alguma coisa.
      system("Pause>null");
       }
      }

      



