//algoritmo "ex6"
// Fun��o : Ler dois valores para as vari�veis A e B, 
//e efetuar as trocas dos valores de forma que a vari�vel A passe a 
//possuir o  valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. //Apresentar os valores trocados.
// Autor : EU
// Data :        
// Se��o de Declara��es 

//Biblioteca usada na manipula��o do mouse e teclado
#include <stdio.h>
//Biblioteca para I/O do console
#include <conio.h>
//Biblioteca que permite o uso de fun��es matem�ticas
#include <math.h>
//Biblioteca usada na entrada e sa�da de dados
#include <iostream>

//Fun��o principal
main()
      {
    //Declara 3 vari�veis do tipo inteiro
      int a,b,troca;
      // Inicio COMANDOS
      //Imprime na tela e pede ao usu�rio o valor num�rico da vari�vel A
      printf("Digite o valor(numerico) da variavel A: ");
      //Fun��o para o input de dados do usu�rio na qual os dados ser�o atribu�dos a vari�vel "a"
      scanf("%d",&a);
      //Printa e pede o valor num�rico da VAR "B"
      printf("Digite o valor(numerico) da variavel B: ");
      //Fun��o usado como input de dados para o usu�rio
      scanf("%d",&b);
      //Atribui o valor da VAR 'a" a VAR "troca"
      troca=a;
      //Atribu� a "a" o conte�do da vari�vel de "b"
      a=b;
      //Atribui o conte�do da VAR "B"  a vari�vel "A"
      b=troca;
      // Mostrar trocas
      //Mostra na tela uma mensagem um tanto atrante a um programador
      printf("===========================\n");
      //Printa na tela o novo valor de A
      printf("O novo valor de A e: \n",a);
      //Printa na tela o novo valor de B
      printf("O novo valor de B e: \n",b);
      printf("===========================\n");
      //D� um "pause" no sistema
      system("PAUSE > null");  
      }
      
      
