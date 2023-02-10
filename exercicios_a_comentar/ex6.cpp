//algoritmo "ex6"
// Função : Ler dois valores para as variáveis A e B, 
//e efetuar as trocas dos valores de forma que a variável A passe a 
//possuir o  valor da variável B e a variável B passe a possuir o valor da variável A. //Apresentar os valores trocados.
// Autor : EU
// Data :        
// Seção de Declarações 

//Biblioteca usada na manipulação do mouse e teclado
#include <stdio.h>
//Biblioteca para I/O do console
#include <conio.h>
//Biblioteca que permite o uso de funções matemáticas
#include <math.h>
//Biblioteca usada na entrada e saída de dados
#include <iostream>

//Função principal
main()
      {
    //Declara 3 variáveis do tipo inteiro
      int a,b,troca;
      // Inicio COMANDOS
      //Imprime na tela e pede ao usuário o valor numérico da variável A
      printf("Digite o valor(numerico) da variavel A: ");
      //Função para o input de dados do usuário na qual os dados serão atribuídos a variável "a"
      scanf("%d",&a);
      //Printa e pede o valor numérico da VAR "B"
      printf("Digite o valor(numerico) da variavel B: ");
      //Função usado como input de dados para o usuário
      scanf("%d",&b);
      //Atribui o valor da VAR 'a" a VAR "troca"
      troca=a;
      //Atribuí a "a" o conteúdo da variável de "b"
      a=b;
      //Atribui o conteúdo da VAR "B"  a variável "A"
      b=troca;
      // Mostrar trocas
      //Mostra na tela uma mensagem um tanto atrante a um programador
      printf("===========================\n");
      //Printa na tela o novo valor de A
      printf("O novo valor de A e: \n",a);
      //Printa na tela o novo valor de B
      printf("O novo valor de B e: \n",b);
      printf("===========================\n");
      //Dá um "pause" no sistema
      system("PAUSE > null");  
      }
      
      
