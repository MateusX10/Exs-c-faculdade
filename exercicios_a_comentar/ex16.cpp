// Algoritimo 16
// m�dia (aritm�tica), informar o nome e sua men��o aprovado (media >= 7), Reprovado (media <= 5) e Recupera��o
// (media entre 5.1 a 6.9).
// Autor : EU
// Data :        
// Se��o de Declara��es

//Manipula��o do teclado e mouse
#include <stdio.h>
//Entrada e sa�da de dados
#include <conio.h>
//Biblioteca matem�tica que possui fun��es matem�ticas
#include <math.h>
//Bibloteca usada na entrada e sa�da de dados
#include <iostream>

//Fun��o principal
main()
      {
    //Declara 4 vari�veis do tipo ponto flutuante
      float nota,media,i,cal;
      //Declara vari�vel do tipo char/str de at� 30 d�gitos
      char nome[30];
      // Inicio Comandos
      //Imprime um t�tulo
      printf("==============Intervalos==============\n");
      //Imprime uma mensagem e pede ao usu�rio que digite o nomedo aluno
      printf("Digite Nome ALUNO: \n");
      //Fun��o na qual a entrada de dados por parte do usu�rio ser� efetivada, guardando o conte�do deste input de dados na vari�vel "nome" --> nome do aluno
      scanf("%s",&nome);
       {
       	//Faz um for que far� a itera��o pedindo a nota do aluno 3 vezez
       for(i=1;i<=3;i++)
        {
        printf("Digite as notas");
        scanf("%f",&nota);
        //Aqui n�o � calculada a m�dia efetivamente, mas apenas a soma de todas as notas do la�o � atribu�da a vari�vel "m�dia"
        media=((media)+(nota));
        }    
        //Aqui finalmente calculamos a m�dia efetivamente, atribuindo o resultado a vari�vel "m�dia"
           cal=((media)/(3.0));
           printf("Media: %1.1f\n",cal);                
           //If a m�dia for maior do que 7....
           if(cal>=7.0)
           {
           	//Imprima o nome do aluno
           printf("Nome: %s\n",nome);
           //Esse aluno foi aprovado, incr�vel!
           printf("Aprovado");
           }
           //Sen�o (se o aluno tiver dan�ado...)
           else
           {
           	//Se a m�dia do aluno estiver no intervalo entra 5.2 e 6.8...
            if(cal>=5.1 && cal<=6.9)
            {
            //Imprima o nome do aluno
            printf("Nome: %s\n",nome);
            
            //E infelizmente, voc� ficou de recupera��o, mas ainda pode recuperar!
            printf("Recuperacao");
            }
            //Caso contr�rio...
            else
            {
            //Voc� foi reprovado
            printf("Reprovado\n");
            }
           }
         }
         //D� um "pause" no sistema
         system("PAUSE > null");
       } 

