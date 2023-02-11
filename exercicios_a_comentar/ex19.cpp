// Algoritimo 19
// Função : Escrever um algoritmo que leia o nome e o sexo de 56 pessoas e informe o nome e se ela é homem ou mulher. No
// final informe total de homens e de mulheres.
// Autor : Mateus Henrique de Souza Medeiros (não sou o autor real, apenas comentei o código)
// Data :        
// Seção de Declarações


//Biblioteca que permite a manipulação do teclado e mouse
#include <stdio.h>
//Biblioteca usada para o I/O de dados
#include <conio.h>
//Biblioteca matemática com métodos matemáticos muito úteis
#include <math.h>
//Biblioteca de entrada e saída de dados
#include <iostream>


//Esta é a função principal (é quase como se já a conhecêssemos antes de algum lugar...)
main()
   {
   	//Delcara três variáveis do tipo inteiro
      int x,c1,c2;
      //Declara uma variável do tipo str de até 30 caracters
      char nome[30];
      //Declara uma variável do tipo char, atribuindo o valor de 10 a ela simultaneamente
      char sexo=10;
      // Define
      //Atribui 0 a variável "c1"
      c1=0;
      //Atribui "0" a variável "c2"
      c2=0;
      // Inicio Comandos
      //O for vai iterar 3 vezes
      for(x=1;x<=3;x++)
      {
    //Imprime na tela uma mensagem pedindo ao usuário o nome
      printf("Informe Nome: ");
      //Função que permite o usuário realizar o input dos dados, guardando-os na variável nome
      scanf("%s",&nome);
      //Imprime na tela uma mensagem pedindo ao usuário digitar o seu sexo
      printf("Digite SEXO[M] OU [F]:");
      //Permite o input de dados, guardando a entrada de dados na variável "sexo"
      scanf("%s",&sexo);
      //"Escolhe" a variável "sexo" para fazer a condição, uma verificação
      switch(sexo)
      {
    //Caso o conteúdo da variável "sexo" seja "m" de sexo masculino, então...
      case 'M': case 'm':
      	//Imprima para mim este cabeçalho...
         printf("<><><><><><><><><><>Masculino<><><><><><><><><><><>\n");
         //Imprima uma mensagem informando que o indivíduo é homem
         printf("[%s] Voce e [HOMEM]\n",nome);
         //Imprima um outro cabeçalho
         printf("<><><><><><><><><><>Masculino<><><><><><><><><><><>\n\n");
         //Incremente 1 a variávek "c1" que indica a quantidade de homens cadastrados
         c1=c1+1;
         //Dê um "break" para que as outras condições do switch case não sejam verificadas
         break;
    //Ou, se o conteúdo da variável "sexo" for "F" de sexo feminino, então...
      case 'F': case 'f':
      	//Imprima para mim este título 
         printf("<><><><><><><><><><>Feminino<><><><><><><><><><><>\n");
         //Agora, informe que o sujeito é  mulher
         printf("[%s] Voce e [MULHER]\n",nome);
         //Imprima este título
         printf("<><><><><><><><><><>Feminino<><><><><><><><><><><>\n\n");
         //Incremente "um" a variável "c2", que indica o número de mulheres cadastradas
         c2=c2+1;
         //Dê um "break" para que os demais cases não sejam executados
         break;
    //Se tudo for falso, então...
      default:
      	//Imprima "comando inválido"
       printf("\n Comando Invalido !");
       //"Break"
       break;       
        } 
      }
      //Imprime o total de homens cadastrados
      printf("Total de Homens:%d\n",c1);
      //Imprime total de mulheres cadastradas
      printf("Total de Mulheres:%d\n",c2);
      //Dá um "pause" no programa
      system("PAUSE > null");  
   }

