//algoritmo "ex18"
// Fun��o : Fa�a um algoritmo que receba a idade de 75 pessoas e mostre mensagem informando "maior de idade" e "menor de
 // idade" para cada pessoa. Considere a idade a partir de 18 anos como maior de idade.
// Autor : Mateus Henrique de Souza Medeiros (n�o sou o autor real do c�digo, apenas o documentei
// Data :        
// Se��o de Declara��es

//Biblioteca usada para a manipula��o do teclado e mouse
#include <stdio.h>
//Biblioteca usada para o I/O do console
#include <conio.h>
//Biblioteca matem�tica com fun��es matem�ticas �teis
#include <math.h>
//Biblioteca para a entrada e sa�da de dados
#include <iostream>


//Main Function
main()
   {
   	//Declara duas vari�veis do tipo inteiro
      int idade,x;
      //Declara uma vari�vel do tipo char/str de at� 30 caracters
      char nome[30];
      // Inicio Comandos
      //La�o for que, em um intervalo de 1 at� 3, pede ao usu�rio que informe o nome e idade, verifique se o sujeito � maior de idade ou o contr�rio
      for(x=1;x<=3;x++)
      {
      printf("Informe Nome: ");
      scanf("%s",nome);
      printf("Digite idade: ");
      scanf("%d",&idade);
         if(idade>=18)
         {
         printf("<><><><><><><><><><>STATS<><><><><><><><><><><>\n");
         printf("[%s] e maior de IDADE\n",nome);
         printf("<><><><><><><><><><>STATS<><><><><><><><><><><>\n");
         }
         else
         {
         printf("<><><><><><><><><><>STATS<><><><><><><><><><><>\n");
         printf("[%s] e menor de IDADE\n",nome);
         printf("<><><><><><><><><><>STATS<><><><><><><><><><><>\n");
         } 
      }
      system("PAUSE > null");  
   }

