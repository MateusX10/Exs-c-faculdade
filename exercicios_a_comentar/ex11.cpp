//algoritmo "ex11"
// Função : Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se que o preço de
// custo receberá um acréscimo de acordo com um percentual informado pelo usuário.
// Autor : EU
// Data :        
// Seção de Declarações

//Biblioteca muito utilizada em c para manipular as ações do teclado e mouse
#include <stdio.h>
//Biblioteca usada no I/O do console
#include <conio.h>
//Biblioteca matemática com funções muito úteis
#include <math.h>
//Biblioteca usada na entrada e saída de dados
#include <iostream>

//Esta é a função principal
main()
      {
    //Declara 3 variáveis do tipo ponto flutuante
      float custo,percent,venda;
      // Inicio Comandos
      //Escreve na tela um título muito bonito
      printf("==============Produtos Like a Boss==============\n");
      //Printa na tela uma mensagem pedindo ao usuário que digite o custo do produto
      printf("Digite o custo do produto: ");
      //Esta função permitirá que o usuário efetue a entrada de dados para a variável custo
      scanf("%f",&custo);
      //Também escreve na tela uma mensagem pedindo algo ao user, mmas deste vez o percentual de venda
      printf("Digite o percentual para venda: ");
      //E por sua vez, a função abaixo permite o input de dados por parte do usuário para a variável "porcent"
      scanf("%f",&percent);
      //Calcula o percent (<<< acréscimo >>>)
      percent=((percent/100)*custo);
      //Valor da venda
      venda=percent+custo;
      printf("============== <>Acrescimo<> ==============\n");
      printf("O valor de venda é: %f\n",venda);
      printf("============== <>Acrescimo<> ==============\n");
      system("PAUSE > null"); 
      }


