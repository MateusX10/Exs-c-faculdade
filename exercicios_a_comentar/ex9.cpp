//algoritmo "ex9"
// Fun��o : Fa�a um algoritmo que receba um valor que foi depositado e exiba o valor //com rendimento ap�s um m�s.
// Considere fixo o juro da poupan�a em 0,70% a. m.
// Autor :Renan (ChuckBerry)
// Data :        
// Se��o de Declara��es

//Biblioteca utilizada para manipular mouse e teclado
#include <stdio.h>
//Biblioteca usada para a I/O do controle
#include <conio.h>
//Biblioteca com fun��es matem�ticas �teis
#include <math.h>
//Entrada e sa�da de dados
#include <iostream>


//Main function
main()
      {
      	//Declara 2 vari�veis do tipo ponto flutuante
      float dep,us;
		//Declara outra vari�vel do tipo flutuante, j� atribuindo um valor a ela
      float juros=0.7;
      // Inicio Comandos
      //Um cabe�alho 
      printf("============== Juros from HELL ==============\n");
      //Imprime na tela uma mensagem pedindo ao usu�rio que digitar o valor depositado
      printf("Digite o valor depositado: ");
      //Fun��o usada para o usu�rio fazer o input de dados para a vari�vel "dep"
      scanf("%f",&dep);
      //Mais um t�tulo.Isso de fato deixa o programa mais satisfat�rio de executar
      printf("============== <>Juros<> ==============\n");
      //Printa na tela o rendimento (juros * dep)
      printf("Rendimento:%f\n",juros*dep);
      //O �ltimo t�tulo
      printf("============== <>Juros<> ==============\n");
      //D� uma pausa no sistema
      system("PAUSE > null"); 
      }

