//algoritmo "ex25"
// Fun��o :  Fa�a um algoritmo que leia dois n�meros e identifique se s�o iguais ou diferentes. 
//Caso eles sejam iguais imprima uma mensagem dizendo que eles s�o iguais. Caso sejam diferentes, 
//informe qual n�mero � o maior, e uma mensagem que s�o diferentes.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o c�digo, o programa em si n�o foi desenvolvido por mim)
// Se��o de Declara��es 

//Biblioteca de entrada e sa�da de dados
#include <iostream>
//Biblioteca que permite nI/O de dados
#include <conio.h>
//Biblioteca que permite a entrada/sa�da de dados, como a manipula��o do teclado e mouse
#include <stdio.h>
//Biblioteca matem�tica que possibilita o uso de fun��es matem�tica variadas
#include <math.h>
//Biblioteca que permite emular os comandos do DOS  e do terminal
#include <stdlib.h>

//Main Function
main()
     {
     	//Declara 2 vari�veis do tipo inteiro
         int n1,n2;
         // Se��o de comandos
         //Imprime na tela uma mensagem pedindo ao usu�rio o input de um n�mero
         printf("Informe Primeiro numero: ");
         //Fun��o que faz input de dados e guarda o resultado em uma vari�vel "n1"
         scanf("%d",&n1);
         //Pede ao user que informe outro n�mero
         printf("Informe Segundo Numero: ");
         //M�todo que faz o input de dados, guardando-os numa vari�vel "n2"
         scanf("%d",&n2);
         	//Se ambas as vari�veis (n1 e n2) forem equivalentes ent�o...
        if(n1==n2)
        {
          	//Imprima na tela uma mensagem informando que os n�meros s�o iguais
             printf("===========[NUMEROS IGUAIS]===========\n");
        } 
            //Sen�o...
        else
        {
            	//If n1 for diferente de n2 e n1 for maior do que n2, ent�o...
            if(n1!=n2 && n1>n2)
            {
                //S�o n�meros diferentes
                printf("-----------[NUMEROS DIFERENTES]-----------\n");
                 //Imprime o maior n�mero
                printf("[MAIOR NUMERO:%d]",n1);
                }       
                //Sen�o...
            else
                {
                //S�o n�meros diferentes
            printf("-----------[NUMEROS DIFERENTES]-----------\n");
                //Imprime na tela o maior n�mero
                printf("[MAIOR NUMERO:%d]",n2);  
                }
        }  
               //D� um "pause" no sistema
        

