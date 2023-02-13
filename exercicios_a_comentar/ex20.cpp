//algoritmo "ex20"
// Fun��o : A concession�ria de ve�culos CARANGO VELHO est� vendendo os seus ve�culos com desconto. Fa�a um
 // algoritmo que calcule e exiba o valor do desconto e o valor a ser pago pelo cliente de v�rios carros. O desconto
 // dever� ser calculado de acordo com o ano do ve�culo. At� 2000 - 12% e acima de 2000 - 7%. 
 
 //O sistema dever� perguntar se deseja continuar calculando desconto at� que a resposta seja: �(N) N�o� . Informar total de carros com ano at� 2000 e total geral.
// Autor :  EU
// Data :          
// Se��o de Declara��es 

//Biblioteca utilizada na manipula��o do teclado e mouse: entrada e sa�da de dados, como o printf e scanf, por exemplo
#include <stdio.h>
//Biblioteca utilizada no I/O de dados
#include <conio.h>
//Biblioteca matem�tica que possui fun��es matem�ticas
#include <math.h>
//Biblitoeca de entrada e sa�da de dados
#include <iostream>
//Essa biblioteca emula todos os comandos do DOS (windows) e do terminal (linux)
#include <stdlib.h>

//Fun��o principal

main()
      {
      	
    //Declara 2 vari�veis do tipo inteiro
      int programa,opc;
      //Declara 3 vari�veis do tipo inteiro
      int ano,total,total2000;
      //Delcara 3 vari�veis do tipo inteiro
      float valor,valorFinal,desconto;
      // Se��o de comandos
      //Valor "1" � atribu�do a vari�vei "programa"
      programa=='1';
      //Enquanto a vari�vel "programa" for diferente de "2", fa�a...
      while(programa!=2)
      {
    //Limpa a tela, semelhante ao comando "clear" do terminal no linux
      system("cls"); 
      //Um cabe�alho bonito
      printf("<><><><><><><><><><><> Carango Velho <><><><><><><><><><><>\n");                
      //Imprime na tela uma mensagem pedindo que o usu�rio informe o valor do carro
      printf("Informe Valor do Carro:");
      //Fun��o usada na entrada de dados, onde quem efetua essa a��o � o usu�rio
      scanf("%f",&valor);
      //Imprime na tela uma mensagem pedindo ao usu�rio que informe o ano do carro
      printf("Informe Ano do seu carro:");
      //Fun��o utilizada como entrada de dados por parte do usu�rio
      scanf("%d",&ano);
      //Printa um cabe�alho
      printf("<><><><><><><><><><><> Carango Velho <><><><><><><><><><><>\n");
      //If o ano for menor ou igual a 2000, fa�a...
      if(ano<=2000)
        {
        //Atribui o valor "0.12" a VAR "desconto"
        desconto=0.12;
        //Vari�vel2000 recebe o incremento de "1"
        total2000=total2000+1;
        //Total recebe o incremento de "1"
        total=total+1;
        }
        //Sen�o/caso contr�rio...
        else
        {
        //Desconto recebe o valor de "0.07"
        desconto=0.07;
        //Vari�vel "total' recebe o incremento de "1"
        total=total+1;
        }
        //Desconto recebe "desconto * valor"
        desconto=desconto*valor;
        //Vari�velFinal recebe a vari�vel valor menos a vari�vel desconto
        valorFinal=valor-desconto;
        //Escreve na tela o valor do carro com desconto
        printf("Valor do carro com desconto e:%f \n",valorFinal);
        //Pergunta ao usu�rio se ele deseja continuar a utilizar o programa
        printf("Deseja continuar calculando? (10) Sim - (20) Nao\n");
        //Recebe a entrada de dados do usu�rio, na qual o resultado vai para a vari�vel "Opc"
        scanf("%d",&opc);
        //Escolhe "opc"
        switch(opc)
            {
            //Caso seu conte�do seja "10", fa�a...
            case 10:
            	//Vari�vel "programa" recebe o valor de "1"
                 programa=1;
                 //Imprime na tela uma mensagem
                 printf("Aperte ENTER para Continuar\n");
                 //D� um "break" no switch case
                 break;
            //Caso o conte�do seja "20", ent�o...
            case 20:
            	//Vari�vel programa recebe "2"
                 programa=2;
                 //Imprima uma mensagem na tela
                 printf("Aperte ENTER para Finalizar\n");
                 //"Quebra" a continua��o do switch case
                 break;
            //Se tudo der errado/n�o funciona, ent�o o "default" ser� executado (como o else do if/else)
            default:
            	//Imprime uma mensagem
                  printf("Opc Invalida Digite (10) S ou 20 (N)\n");
                  //Fun��o utilizada na entrada de dados do usu�rio, alocando o resultado numa vari�vel
                  scanf("%d",&opc);
            }
    //D� um "pause" no sistema
      system("PAUSE > null");  
  }
}

