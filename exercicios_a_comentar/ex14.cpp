//algoritmo "ex14"
// Fun��o : Escrever um algoritmo que leia dois valores inteiro distintos e informe qual � o maior.
// Autor : EU
// Data :        
// Se��o de Declara��es

//Biblioteca muito usada em c para a manipula��o do teclado/mouse
#include <stdio.h>
//Biblioteca usada no I/O do console
#include <conio.h>
//Biblioteca matem�tica que det�m fun��es deveram uteis
#include <math.h>
//Biblioteca para a entrada e sa�da de dados 
#include <iostream>


//Prazer, esta � a fun��o principal!
main()
      {
      //Declara 2 vari�veis "v1" e "v2" inteiras	
      int v1,v2;
      // Inicio Comandos
      //Um t�tulo
      printf("==============Dois Valores MAIOR==============\n");
      //Imprime uma mensagem pedindo ao usu�rio que digite um n�mero
      printf("Digite Primeiro Valor: ");
      //Por sua vez, o n�mero digitado pelo usu�rio ser� armazenado na vari�vel v1
      scanf("%d",&v1);
      //Usu�rio � informado que precisa digitar um n�mero
      printf("Digite Segundo Valor: ");
      //Fun��o usada na entrada de dados por parte do usu�rio, onde por sua vez o resultado do input de dados ser� armazenado numa vari�vel "v2"
      scanf("%d",&v2);
      {
    //"Se v1 for maior que v2, fa�a..."
      if(v1>v2)
      //...imprima "primeiro valor � maior"
      printf("Primeiro Valor e MAIOR\n");
      //"Caso contr�rio/sen�o"
      else
      //"V2 � maior que v1?"
        if(v2>v1)
        //"Se sim, ent�o imprima apra mim que o segundo valor � maior
        printf("Segundo Valor e MAIOR\n");
        //Sen�o...
        else
        //Informe ao usu�rio que os valores s�o iguais
        printf("Valores IGUAIS\n");
    //D� uma pausa no sistema
      system("Pause>null");
       }
      }

