//algoritmo "ex17"
// Função : Ler 80 números e ao final informar quantos número(s) est(á)ão no intervalo entre 10 (inclusive) e 150 (inclusive).
// Autor : Mateus Henrique de Souza Medeiros (não sou o autor real, apenas comentei o código)
// Data :        
// Seção de Declarações

//Biblioteca que permite a manipulação do teclado e mouse 
#include <stdio.h>
//Biblioteca de I/O do console
#include <conio.h>
//Biblioteca matemática que possui funções matemáticas 
#include <math.h>
//Biblioteca usada para a entrada e saída de dados
#include <iostream>

//Função principal
main()
   {
   	//Declara três variáveis do tipo inteiro
      int i,n1,intervalo;
      // Inicio Comandos
       {
       	//Faz um for (laço de repetição) 
       for(i=1;i<=3;i++)
        {
        //Printa uma mensagem na tela pedindo para o usuário digitar um número
        printf("Digite um numero");
        //Função usada para o usuário ser capaz de dar input no seus dados através do teclado, guardando esses dados numa variável (n1)
        scanf("%d",&n1);
        }                    
        //Se n1 estiver no intervalo entre 10 e 150...
           if(n1>=10 && n1<=150)
           {
           	//Intervalo incremento 1
           intervalo=intervalo+1;
           }
           //Imprime o conteúdo da variável intervalo
           printf("%d",intervalo);
        //Dá um pause no sistema
         system("PAUSE > null");
       }
}

