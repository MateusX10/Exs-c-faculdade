//algoritmo "ex17"
// Fun��o : Ler 80 n�meros e ao final informar quantos n�mero(s) est(�)�o no intervalo entre 10 (inclusive) e 150 (inclusive).
// Autor : Mateus Henrique de Souza Medeiros (n�o sou o autor real, apenas comentei o c�digo)
// Data :        
// Se��o de Declara��es

//Biblioteca que permite a manipula��o do teclado e mouse 
#include <stdio.h>
//Biblioteca de I/O do console
#include <conio.h>
//Biblioteca matem�tica que possui fun��es matem�ticas 
#include <math.h>
//Biblioteca usada para a entrada e sa�da de dados
#include <iostream>

//Fun��o principal
main()
   {
   	//Declara tr�s vari�veis do tipo inteiro
      int i,n1,intervalo;
      // Inicio Comandos
       {
       	//Faz um for (la�o de repeti��o) 
       for(i=1;i<=3;i++)
        {
        //Printa uma mensagem na tela pedindo para o usu�rio digitar um n�mero
        printf("Digite um numero");
        //Fun��o usada para o usu�rio ser capaz de dar input no seus dados atrav�s do teclado, guardando esses dados numa vari�vel (n1)
        scanf("%d",&n1);
        }                    
        //Se n1 estiver no intervalo entre 10 e 150...
           if(n1>=10 && n1<=150)
           {
           	//Intervalo incremento 1
           intervalo=intervalo+1;
           }
           //Imprime o conte�do da vari�vel intervalo
           printf("%d",intervalo);
        //D� um pause no sistema
         system("PAUSE > null");
       }
}

