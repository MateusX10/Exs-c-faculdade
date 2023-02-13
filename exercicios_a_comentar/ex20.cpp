//algoritmo "ex20"
// Função : A concessionária de veículos CARANGO VELHO está vendendo os seus veículos com desconto. Faça um
 // algoritmo que calcule e exiba o valor do desconto e o valor a ser pago pelo cliente de vários carros. O desconto
 // deverá ser calculado de acordo com o ano do veículo. Até 2000 - 12% e acima de 2000 - 7%. 
 
 //O sistema deverá perguntar se deseja continuar calculando desconto até que a resposta seja: “(N) Não” . Informar total de carros com ano até 2000 e total geral.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o código em si não fui eu quem desenvolveu)
// Data : 13/02/23 

// Seção de Declarações 

//Biblioteca utilizada na manipulação do teclado e mouse: entrada e saída de dados, como o printf e scanf, por exemplo
#include <stdio.h>
//Biblioteca utilizada no I/O de dados
#include <conio.h>
//Biblioteca matemática que possui funções matemáticas
#include <math.h>
//Biblitoeca de entrada e saída de dados
#include <iostream>
//Essa biblioteca emula todos os comandos do DOS (windows) e do terminal (linux)
#include <stdlib.h>

//Função principal

main()
      {
      	
    //Declara 2 variáveis do tipo inteiro
      int programa,opc;
      //Declara 3 variáveis do tipo inteiro
      int ano,total,total2000;
      //Delcara 3 variáveis do tipo inteiro
      float valor,valorFinal,desconto;
      // Seção de comandos
      //Valor "1" é atribuído a variávei "programa"
      programa=='1';
      //Enquanto a variável "programa" for diferente de "2", faça...
      while(programa!=2)
      {
    //Limpa a tela, semelhante ao comando "clear" do terminal no linux
      system("cls"); 
      //Um cabeçalho bonito
      printf("<><><><><><><><><><><> Carango Velho <><><><><><><><><><><>\n");                
      //Imprime na tela uma mensagem pedindo que o usuário informe o valor do carro
      printf("Informe Valor do Carro:");
      //Função usada na entrada de dados, onde quem efetua essa ação é o usuário
      scanf("%f",&valor);
      //Imprime na tela uma mensagem pedindo ao usuário que informe o ano do carro
      printf("Informe Ano do seu carro:");
      //Função utilizada como entrada de dados por parte do usuário
      scanf("%d",&ano);
      //Printa um cabeçalho
      printf("<><><><><><><><><><><> Carango Velho <><><><><><><><><><><>\n");
      //If o ano for menor ou igual a 2000, faça...
      if(ano<=2000)
        {
        //Atribui o valor "0.12" a VAR "desconto"
        desconto=0.12;
        //Variável2000 recebe o incremento de "1"
        total2000=total2000+1;
        //Total recebe o incremento de "1"
        total=total+1;
        }
        //Senão/caso contrário...
        else
        {
        //Desconto recebe o valor de "0.07"
        desconto=0.07;
        //Variável "total' recebe o incremento de "1"
        total=total+1;
        }
        //Desconto recebe "desconto * valor"
        desconto=desconto*valor;
        //VariávelFinal recebe a variável valor menos a variável desconto
        valorFinal=valor-desconto;
        //Escreve na tela o valor do carro com desconto
        printf("Valor do carro com desconto e:%f \n",valorFinal);
        //Pergunta ao usuário se ele deseja continuar a utilizar o programa
        printf("Deseja continuar calculando? (10) Sim - (20) Nao\n");
        //Recebe a entrada de dados do usuário, na qual o resultado vai para a variável "Opc"
        scanf("%d",&opc);
        //Escolhe "opc"
        switch(opc)
            {
            //Caso seu conteúdo seja "10", faça...
            case 10:
            	//Variável "programa" recebe o valor de "1"
                 programa=1;
                 //Imprime na tela uma mensagem
                 printf("Aperte ENTER para Continuar\n");
                 //Dá um "break" no switch case
                 break;
            //Caso o conteúdo seja "20", então...
            case 20:
            	//Variável programa recebe "2"
                 programa=2;
                 //Imprima uma mensagem na tela
                 printf("Aperte ENTER para Finalizar\n");
                 //"Quebra" a continuação do switch case
                 break;
            //Se tudo der errado/não funciona, então o "default" será executado (como o else do if/else)
            default:
            	//Imprime uma mensagem
                  printf("Opc Invalida Digite (10) S ou 20 (N)\n");
                  //Função utilizada na entrada de dados do usuário, alocando o resultado numa variável
                  scanf("%d",&opc);
            }
    //Dá um "pause" no sistema
      system("PAUSE > null");  
  }
}

