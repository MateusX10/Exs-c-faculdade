//algoritmo "ex9"
// Função : Faça um algoritmo que receba um valor que foi depositado e exiba o valor //com rendimento após um mês.
// Considere fixo o juro da poupança em 0,70% a. m.
// Autor :Renan (ChuckBerry), Mateus Henrique de Souza Medeiros (apenas comentei o código)
// Data :        
// Seção de Declarações

//Biblioteca utilizada para manipular mouse e teclado
#include <stdio.h>
//Biblioteca usada para a I/O do controle
#include <conio.h>
//Biblioteca com funções matemáticas úteis
#include <math.h>
//Entrada e saída de dados
#include <iostream>


//Main function
main()
      {
      	//Declara 2 variáveis do tipo ponto flutuante
      float dep,us;
		//Declara outra variável do tipo flutuante, já atribuindo um valor a ela
      float juros=0.7;
      // Inicio Comandos
      //Um cabeçalho 
      printf("============== Juros from HELL ==============\n");
      //Imprime na tela uma mensagem pedindo ao usuário que digitar o valor depositado
      printf("Digite o valor depositado: ");
      //Função usada para o usuário fazer o input de dados para a variável "dep"
      scanf("%f",&dep);
      //Mais um título.Isso de fato deixa o programa mais satisfatório de executar
      printf("============== <>Juros<> ==============\n");
      //Printa na tela o rendimento (juros * dep)
      printf("Rendimento:%f\n",juros*dep);
      //O último título
      printf("============== <>Juros<> ==============\n");
      //Dá uma pausa no sistema
      system("PAUSE > null"); 
      }

