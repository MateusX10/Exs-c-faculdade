//algoritmo "ex18"
// Função : Faça um algoritmo que receba a idade de 75 pessoas e mostre mensagem informando "maior de idade" e "menor de
 // idade" para cada pessoa. Considere a idade a partir de 18 anos como maior de idade.
// Autor : Mateus Henrique de Souza Medeiros (não sou o autor real do código, apenas o documentei
// Data :        
// Seção de Declarações

//Biblioteca usada para a manipulação do teclado e mouse
#include <stdio.h>
//Biblioteca usada para o I/O do console
#include <conio.h>
//Biblioteca matemática com funções matemáticas úteis
#include <math.h>
//Biblioteca para a entrada e saída de dados
#include <iostream>


//Main Function
main()
   {
   	//Declara duas variáveis do tipo inteiro
      int idade,x;
      //Declara uma variável do tipo char/str de até 30 caracters
      char nome[30];
      // Inicio Comandos
      //Laço for que, em um intervalo de 1 até 3, pede ao usuário que informe o nome e idade, verifique se o sujeito é maior de idade ou o contrário
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

