// Algoritimo 16
// média (aritmética), informar o nome e sua menção aprovado (media >= 7), Reprovado (media <= 5) e Recuperação
// (media entre 5.1 a 6.9).
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o código em si não fui eu quem desenvolveu)
// Data : 13/02/23     
// Seção de Declarações

//Manipulação do teclado e mouse
#include <stdio.h>
//Entrada e saída de dados
#include <conio.h>
//Biblioteca matemática que possui funções matemáticas
#include <math.h>
//Bibloteca usada na entrada e saída de dados
#include <iostream>

//Função principal
main()
      {
    //Declara 4 variáveis do tipo ponto flutuante
      float nota,media,i,cal;
      //Declara variável do tipo char/str de até 30 dígitos
      char nome[30];
      // Inicio Comandos
      //Imprime um título
      printf("==============Intervalos==============\n");
      //Imprime uma mensagem e pede ao usuário que digite o nomedo aluno
      printf("Digite Nome ALUNO: \n");
      //Função na qual a entrada de dados por parte do usuário será efetivada, guardando o conteúdo deste input de dados na variável "nome" --> nome do aluno
      scanf("%s",&nome);
       {
       	//Faz um for que fará a iteração pedindo a nota do aluno 3 vezez
       for(i=1;i<=3;i++)
        {
        printf("Digite as notas");
        scanf("%f",&nota);
        //Aqui não é calculada a média efetivamente, mas apenas a soma de todas as notas do laço é atribuída a variável "média"
        media=((media)+(nota));
        }    
        //Aqui finalmente calculamos a média efetivamente, atribuindo o resultado a variável "média"
           cal=((media)/(3.0));
           printf("Media: %1.1f\n",cal);                
           //If a média for maior do que 7....
           if(cal>=7.0)
           {
           	//Imprima o nome do aluno
           printf("Nome: %s\n",nome);
           //Esse aluno foi aprovado, incrível!
           printf("Aprovado");
           }
           //Senão (se o aluno tiver dançado...)
           else
           {
           	//Se a média do aluno estiver no intervalo entra 5.2 e 6.8...
            if(cal>=5.1 && cal<=6.9)
            {
            //Imprima o nome do aluno
            printf("Nome: %s\n",nome);
            
            //E infelizmente, você ficou de recuperação, mas ainda pode recuperar!
            printf("Recuperacao");
            }
            //Caso contrário...
            else
            {
            //Você foi reprovado
            printf("Reprovado\n");
            }
           }
         }
         //Dá um "pause" no sistema
         system("PAUSE > null");
       } 

