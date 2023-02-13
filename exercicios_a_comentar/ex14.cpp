//algoritmo "ex14"
// Função : Escrever um algoritmo que leia dois valores inteiro distintos e informe qual é o maior.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o código em si não fui eu quem desenvolveu)
// Data : 13/02/23      
// Seção de Declarações

//Biblioteca muito usada em c para a manipulação do teclado/mouse
#include <stdio.h>
//Biblioteca usada no I/O do console
#include <conio.h>
//Biblioteca matemática que detém funções deveram uteis
#include <math.h>
//Biblioteca para a entrada e saída de dados 
#include <iostream>


//Prazer, esta é a função principal!
main()
      {
      //Declara 2 variáveis "v1" e "v2" inteiras	
      int v1,v2;
      // Inicio Comandos
      //Um título
      printf("==============Dois Valores MAIOR==============\n");
      //Imprime uma mensagem pedindo ao usuário que digite um número
      printf("Digite Primeiro Valor: ");
      //Por sua vez, o número digitado pelo usuário será armazenado na variável v1
      scanf("%d",&v1);
      //Usuário é informado que precisa digitar um número
      printf("Digite Segundo Valor: ");
      //Função usada na entrada de dados por parte do usuário, onde por sua vez o resultado do input de dados será armazenado numa variável "v2"
      scanf("%d",&v2);
      {
    //"Se v1 for maior que v2, faça..."
      if(v1>v2)
      //...imprima "primeiro valor é maior"
      printf("Primeiro Valor e MAIOR\n");
      //"Caso contrário/senão"
      else
      //"V2 é maior que v1?"
        if(v2>v1)
        //"Se sim, então imprima apra mim que o segundo valor é maior
        printf("Segundo Valor e MAIOR\n");
        //Senão...
        else
        //Informe ao usuário que os valores são iguais
        printf("Valores IGUAIS\n");
    //Dá uma pausa no sistema
      system("Pause>null");
       }
      }

