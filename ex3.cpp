// Fun��o : Escrever um algoritmo para determinar o consumo m�dio de um autom�vel //sendo fornecida a dist�ncia //total percorrida pelo autom�vel e o total de combust�vel //gasto.
// Autor :EU
// Data :        
// Se��o de Declara��es 

//Manipula��o de entrada e sa�de de dados atrav�s do mouse e teclado
#include <stdio.h>
//I/O do console
#include <conio.h>
//Biblioteca que permite o uso de fun��es matem�ticas
#include <math.h>
//Biblioteca de entreada e sa�da de dados
#include <iostream>

//fun��o principal
main()
{	
	//define 3 vari�veis do tipo inteiro
      int distancia,combustivel,cal;
      //Printa uma mensagem na tela
      printf("<><><><><>Calculo de consumo medio de combustivel<><><><><>\n");
      //Pede ao usu�rio a dist�ncia percorrida
      printf("Digite distancia percorrida:");
      //Fun��o para a entrada de dados (resposta do usu�rio) sobre a distancia (inteiro)
      scanf("%d",&distancia);
      //printa e pede ao usu�rio o quantidade de combustivel gasto
      printf("Digite combustivel gasto:");
      //Fun��o que permite ao usu�rio fazer o input de dados de combust�vel
      scanf("%d",&combustivel);
      //calcula o consumo m�dio
      cal=(distancia/combustivel);
      //Printa na tela o consumo m�dio
      printf("Cosumo Medio:%d",cal);
//D� um break/pausa pro sistema, para ele "descansar" (apenas brincando)
system("PAUSE > null");     
      }
      

