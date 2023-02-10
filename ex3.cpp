// Função : Escrever um algoritmo para determinar o consumo médio de um automóvel //sendo fornecida a distância //total percorrida pelo automóvel e o total de combustível //gasto.
// Autor :EU
// Data :        
// Seção de Declarações 

//Manipulação de entrada e saíde de dados através do mouse e teclado
#include <stdio.h>
//I/O do console
#include <conio.h>
//Biblioteca que permite o uso de funções matemáticas
#include <math.h>
//Biblioteca de entreada e saída de dados
#include <iostream>

//função principal
main()
{	
	//define 3 variáveis do tipo inteiro
      int distancia,combustivel,cal;
      //Printa uma mensagem na tela
      printf("<><><><><>Calculo de consumo medio de combustivel<><><><><>\n");
      //Pede ao usuário a distância percorrida
      printf("Digite distancia percorrida:");
      //Função para a entrada de dados (resposta do usuário) sobre a distancia (inteiro)
      scanf("%d",&distancia);
      //printa e pede ao usuário o quantidade de combustivel gasto
      printf("Digite combustivel gasto:");
      //Função que permite ao usuário fazer o input de dados de combustível
      scanf("%d",&combustivel);
      //calcula o consumo médio
      cal=(distancia/combustivel);
      //Printa na tela o consumo médio
      printf("Cosumo Medio:%d",cal);
//Dá um break/pausa pro sistema, para ele "descansar" (apenas brincando)
system("PAUSE > null");     
      }
      

