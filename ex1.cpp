//algoritmo "ex1"
// Função : Faça um algoritmo que receba dois números e exiba o resultado da sua soma.
// Autor : EU
// Data :        
// Seção de Declarações



#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

//Função principal
main()
      {
    //Declara variável de ponto flutuante: n1 e n2
      float n1,n2;
      // Inicio Comandos
      //Imprime na tela caracteres
      printf("==============  ++++++ ==============\n");
      //Pede ao usuário para informar o primeiro valor
      printf("Informe o Primeiro numero: ");
      //Função para fazer o input de dados do tipo ponto flutuante
      scanf("%f",&n1);
      //Exatamente o mesmo que a linha 23
      printf("Informe o Segundo numero: ");
      //Exatamente o mesmo que a linha 25
      scanf("%f",&n2);
      //imprime caracteres na tela.Não é necessariamente importante para o funcionamento em si do programa, mas mais como uma forma de deixar o programa
      //estéticamente mais bonito
      printf("============== <>SOMA !<> ==============\n");
      //imprime na tela "soma: [o valor da variável n1] + [valor da variável n2] --> é realizado a soma de ambas as variáveis e printadas na tela
      printf("\nSOMA: %f",n1+n2);
      //dá um "pause" no sistema
      //system("PAUSE > null"); 
      }

