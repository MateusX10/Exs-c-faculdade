//algoritmo "ex1"
// Fun��o : Fa�a um algoritmo que receba dois n�meros e exiba o resultado da sua soma.
// Autor : EU
// Data :        
// Se��o de Declara��es



#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

//Fun��o principal
main()
      {
    //Declara vari�vel de ponto flutuante: n1 e n2
      float n1,n2;
      // Inicio Comandos
      //Imprime na tela caracteres
      printf("==============  ++++++ ==============\n");
      //Pede ao usu�rio para informar o primeiro valor
      printf("Informe o Primeiro numero: ");
      //Fun��o para fazer o input de dados do tipo ponto flutuante
      scanf("%f",&n1);
      //Exatamente o mesmo que a linha 23
      printf("Informe o Segundo numero: ");
      //Exatamente o mesmo que a linha 25
      scanf("%f",&n2);
      //imprime caracteres na tela.N�o � necessariamente importante para o funcionamento em si do programa, mas mais como uma forma de deixar o programa
      //est�ticamente mais bonito
      printf("============== <>SOMA !<> ==============\n");
      //imprime na tela "soma: [o valor da vari�vel n1] + [valor da vari�vel n2] --> � realizado a soma de ambas as vari�veis e printadas na tela
      printf("\nSOMA: %f",n1+n2);
      //d� um "pause" no sistema
      //system("PAUSE > null"); 
      }

