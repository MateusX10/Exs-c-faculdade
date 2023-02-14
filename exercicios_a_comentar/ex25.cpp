//algoritmo "ex25"
// Função :  Faça um algoritmo que leia dois números e identifique se são iguais ou diferentes. 
//Caso eles sejam iguais imprima uma mensagem dizendo que eles são iguais. Caso sejam diferentes, 
//informe qual número é o maior, e uma mensagem que são diferentes.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o programa em si não foi desenvolvido por mim)
// Seção de Declarações 

//Biblioteca de entrada e saída de dados
#include <iostream>
//Biblioteca que permite nI/O de dados
#include <conio.h>
//Biblioteca que permite a entrada/saída de dados, como a manipulação do teclado e mouse
#include <stdio.h>
//Biblioteca matemática que possibilita o uso de funções matemática variadas
#include <math.h>
//Biblioteca que permite emular os comandos do DOS  e do terminal
#include <stdlib.h>

//Main Function
main()
     {
     	//Declara 2 variáveis do tipo inteiro
         int n1,n2;
         // Seção de comandos
         //Imprime na tela uma mensagem pedindo ao usuário o input de um número
         printf("Informe Primeiro numero: ");
         //Função que faz input de dados e guarda o resultado em uma variável "n1"
         scanf("%d",&n1);
         //Pede ao user que informe outro número
         printf("Informe Segundo Numero: ");
         //Método que faz o input de dados, guardando-os numa variável "n2"
         scanf("%d",&n2);
         	//Se ambas as variáveis (n1 e n2) forem equivalentes então...
        if(n1==n2)
        {
          	//Imprima na tela uma mensagem informando que os números são iguais
             printf("===========[NUMEROS IGUAIS]===========\n");
        } 
            //Senão...
        else
        {
            	//If n1 for diferente de n2 e n1 for maior do que n2, então...
            if(n1!=n2 && n1>n2)
            {
                //São números diferentes
                printf("-----------[NUMEROS DIFERENTES]-----------\n");
                 //Imprime o maior número
                printf("[MAIOR NUMERO:%d]",n1);
                }       
                //Senão...
            else
                {
                //São números diferentes
            printf("-----------[NUMEROS DIFERENTES]-----------\n");
                //Imprime na tela o maior número
                printf("[MAIOR NUMERO:%d]",n2);  
                }
        }  
               //Dá um "pause" no sistema
        

