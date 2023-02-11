//algoritmo "ex15"
// Função : Faça um algoritmo que receba um número e diga se este número está no intervalo entre 100 e 200.
// Autor : Mateus Henrique de Souza Medeiros (apenas comentei o código, mas o código não foi desenvolvido por mim)
// Data : 11/02/23
// Seção de Declarações


//Uma biblioteca tão útil e usada que imagino que você já saiba a função dela
#include <stdio.h>
//Biblioteca usada no I/O de dados
#include <conio.h>
//Uma biblioteca matemática, acredito que supôs que haja funções matemáticas nela
#include <math.h>
//Biblioteca usada na entrada e saída de dados
#include <iostream>


//Já apresentei ela uma vez, mas não custa nada fazer de novo: esta é a main funtion, muito prazer!
main()
      {
    //Declara variável do tipo inteiro 
      int v1;
      // Inicio Comandos
      //Imprime um título bonito
      printf("==============Intervalos==============\n");
      //Imprime e pede ao usuário que digite um número
      printf("Digite Um Valor: ");
      //Função que permite que o usuário faça o input de dados, de fato útil
      scanf("%d",&v1);
      {
    //Verifica se o conteúdo da variável "v1" se encontra no intervalo de 100 a 200
      if(v1>=100 && v1<=200)
      //Ela está no intervalo de 100 a 200?!ótimo, diga isso ao usuário por mim
      printf("Esta no Intervalo 100 a 200\n");
    //Caso contrário...
      else
      //Ela não está no intervalo de 100 a 200?Muito bem, diga isso ao usuário para mim
      printf("Fora do Intervalo 100 a 200\n");
      //Agora dê um "pause" no sistema até que o usuário digite alguma coisa.
      system("Pause>null");
       }
      }

      



