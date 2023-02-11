// Algoritimo 19
// Fun��o : Escrever um algoritmo que leia o nome e o sexo de 56 pessoas e informe o nome e se ela � homem ou mulher. No
// final informe total de homens e de mulheres.
// Autor : Mateus Henrique de Souza Medeiros (n�o sou o autor real, apenas comentei o c�digo)
// Data :        
// Se��o de Declara��es


//Biblioteca que permite a manipula��o do teclado e mouse
#include <stdio.h>
//Biblioteca usada para o I/O de dados
#include <conio.h>
//Biblioteca matem�tica com m�todos matem�ticos muito �teis
#include <math.h>
//Biblioteca de entrada e sa�da de dados
#include <iostream>


//Esta � a fun��o principal (� quase como se j� a conhec�ssemos antes de algum lugar...)
main()
   {
   	//Delcara tr�s vari�veis do tipo inteiro
      int x,c1,c2;
      //Declara uma vari�vel do tipo str de at� 30 caracters
      char nome[30];
      //Declara uma vari�vel do tipo char, atribuindo o valor de 10 a ela simultaneamente
      char sexo=10;
      // Define
      //Atribui 0 a vari�vel "c1"
      c1=0;
      //Atribui "0" a vari�vel "c2"
      c2=0;
      // Inicio Comandos
      //O for vai iterar 3 vezes
      for(x=1;x<=3;x++)
      {
    //Imprime na tela uma mensagem pedindo ao usu�rio o nome
      printf("Informe Nome: ");
      //Fun��o que permite o usu�rio realizar o input dos dados, guardando-os na vari�vel nome
      scanf("%s",&nome);
      //Imprime na tela uma mensagem pedindo ao usu�rio digitar o seu sexo
      printf("Digite SEXO[M] OU [F]:");
      //Permite o input de dados, guardando a entrada de dados na vari�vel "sexo"
      scanf("%s",&sexo);
      //"Escolhe" a vari�vel "sexo" para fazer a condi��o, uma verifica��o
      switch(sexo)
      {
    //Caso o conte�do da vari�vel "sexo" seja "m" de sexo masculino, ent�o...
      case 'M': case 'm':
      	//Imprima para mim este cabe�alho...
         printf("<><><><><><><><><><>Masculino<><><><><><><><><><><>\n");
         //Imprima uma mensagem informando que o indiv�duo � homem
         printf("[%s] Voce e [HOMEM]\n",nome);
         //Imprima um outro cabe�alho
         printf("<><><><><><><><><><>Masculino<><><><><><><><><><><>\n\n");
         //Incremente 1 a vari�vek "c1" que indica a quantidade de homens cadastrados
         c1=c1+1;
         //D� um "break" para que as outras condi��es do switch case n�o sejam verificadas
         break;
    //Ou, se o conte�do da vari�vel "sexo" for "F" de sexo feminino, ent�o...
      case 'F': case 'f':
      	//Imprima para mim este t�tulo 
         printf("<><><><><><><><><><>Feminino<><><><><><><><><><><>\n");
         //Agora, informe que o sujeito �  mulher
         printf("[%s] Voce e [MULHER]\n",nome);
         //Imprima este t�tulo
         printf("<><><><><><><><><><>Feminino<><><><><><><><><><><>\n\n");
         //Incremente "um" a vari�vel "c2", que indica o n�mero de mulheres cadastradas
         c2=c2+1;
         //D� um "break" para que os demais cases n�o sejam executados
         break;
    //Se tudo for falso, ent�o...
      default:
      	//Imprima "comando inv�lido"
       printf("\n Comando Invalido !");
       //"Break"
       break;       
        } 
      }
      //Imprime o total de homens cadastrados
      printf("Total de Homens:%d\n",c1);
      //Imprime total de mulheres cadastradas
      printf("Total de Mulheres:%d\n",c2);
      //D� um "pause" no programa
      system("PAUSE > null");  
   }

