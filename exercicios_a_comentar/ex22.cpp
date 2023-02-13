//algoritmo "ex22"
// Função : Faça um algoritmo que receba o preço de custo e o preço de venda de 40 produtos. Mostre como resultado se
// houve lucro, prejuízo ou empate para cada produto. Informe media de preço de custo e do preço de venda.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o código em si não fui eu quem desenvolveu)
// Data : 13/02/23 

// Seção de Declarações 

//Biblioteca utilizada na entrada e saída de dados 
#include <iostream>
//Biblioteca que permite I/O do console
#include <conio.h>
//Biblioteca que permite a entrada e saída de dados pelo teclado, belos exemplos do benefício desta libra são os comandos: "printf" e "scanf"
#include <stdio.h>
//Biblioteca com funções matemáticas
#include <math.h>
//Biblioteca que possibilita a emulação dos comandos do S.O
#include <stdlib.h>

//Main Function
main()
     {
    //Deçlara muita variáveis do tipo ponto flutuante
       float pc,pv,pcmedia,pvmedia; // preço custo e preço de venda
       //Declara var do tipo inteiro
       int x;
       //Faz um for de 1 até 4, o bloco de código abaixo será executado 4 vezes 
       for(x=1;x<4;x++)
           {              
           //Imprime um cabeçalho
           printf("<><><><><><><>Preco Custo e Preco Venda<><><><><><><>\n");
           //Imprime na tela uma mensagem
           printf("Informe Preco de Custo: ");
           //Função de input de dados
           scanf("%f",&pc);
           //Calçula média do preço de custo
           pcmedia=((pcmedia)+(pc));
           //Imprime uma mensagem na tela
           printf("Informe Preco de Venda: ");
           //Faz o input de dados guardando o resultado na var "pv"
           scanf("%f",&pv);
           //Calcula média do preço de venda
           pvmedia=((pcmedia)+(pc));
           //Limpa a tela do console
           system("cls"); 
           //If preço de custo e preço de venda foram iguais, então...
             if(pc==pv)
               {
               	//Cabeçalho que informa que houve um empate
                printf("---------------Houve Empate---------------\n\n");
               }
               //Caso contrário/senão...
               else
               {
               	//Se o preço de venda for superior ao preço de compra, então...
                   if(pv<pc)
                   {
                   	//Imprima um cabeçalho que informa que houve prejuízo
                     printf("---------------Prejuizo---------------\n\n");
                   }
                   //Senão
                   else
                   {
                   	//Imprima na tela uma mensagem 	que informa que houve lucro
                       printf("---------------Houve Lucro---------------\n\n");
                   }  
               }  
            }
            //Imprime a média do preço de custo
         printf("Preco Custo Media:%f",((pcmedia)/(40)));
         //Imprime média do preço de venda
         printf("\nPreco Venda Media:%f",((pvmedia)/(40)));
         //Dá um "pause" no sistema
         system("PAUSE > null");
         }


