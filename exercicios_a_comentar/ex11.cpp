//algoritmo "ex11"
// Fun��o : Fa�a um algoritmo que receba o pre�o de custo de um produto e mostre o valor de venda. Sabe-se que o pre�o de
// custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio.
// Autor : EU
// Data :        
// Se��o de Declara��es

//Biblioteca muito utilizada em c para manipular as a��es do teclado e mouse
#include <stdio.h>
//Biblioteca usada no I/O do console
#include <conio.h>
//Biblioteca matem�tica com fun��es muito �teis
#include <math.h>
//Biblioteca usada na entrada e sa�da de dados
#include <iostream>

//Esta � a fun��o principal
main()
      {
    //Declara 3 vari�veis do tipo ponto flutuante
      float custo,percent,venda;
      // Inicio Comandos
      //Escreve na tela um t�tulo muito bonito
      printf("==============Produtos Like a Boss==============\n");
      //Printa na tela uma mensagem pedindo ao usu�rio que digite o custo do produto
      printf("Digite o custo do produto: ");
      //Esta fun��o permitir� que o usu�rio efetue a entrada de dados para a vari�vel custo
      scanf("%f",&custo);
      //Tamb�m escreve na tela uma mensagem pedindo algo ao user, mmas deste vez o percentual de venda
      printf("Digite o percentual para venda: ");
      //E por sua vez, a fun��o abaixo permite o input de dados por parte do usu�rio para a vari�vel "porcent"
      scanf("%f",&percent);
      //Calcula o percent (<<< acr�scimo >>>)
      percent=((percent/100)*custo);
      //Valor da venda
      venda=percent+custo;
      printf("============== <>Acrescimo<> ==============\n");
      printf("O valor de venda �: %f\n",venda);
      printf("============== <>Acrescimo<> ==============\n");
      system("PAUSE > null"); 
      }


