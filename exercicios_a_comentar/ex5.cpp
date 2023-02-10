//algoritmo "ex5"
// Função : Escrever um algoritmo que leia o nome de um aluno e as notas das três //provas que ele obteve no semestre. No final
// informar o nome do aluno e a sua média (aritmética)
// Autor : EU
// Data :        
// Seção de Declarações 

//Abaixo, temos algumas bibliotecas

//Biblioteca para  a manipulção do teclado e mouse
#include <stdio.h>
//I/O do console
#include <conio.h>
//Funções matemáticas possivelmente uteis
#include <math.h>
//Entrada e saída de dados
#include <iostream>

//Função principal
main()
      {
    //Define uma variável do tipo str/char de até 100 caracters
      char aluno[100];
      //Define outra variável, mas desta vez do tipo ponto flutuante
      float nota,media;
      //Define VAR do tipo inteiro
      int x;

      // Inicio COmandos
      //Imprime uma espécie de cabeçalho
      printf("============== Pau de aco System ==============\n");
      //Printa e pede ao user o nome do aluno
      printf("Digite o nome do aluno: ");
      //Função para a entrade de dados, haverá nesse caso o input do nome do aluno
      scanf("%s",&aluno);
      //Atribui 0 a variável "media"
      media=0;
      //Faz um for (laço) que pede a nota de 3 alunos
      for(x=1;x<=3;x++)
      {
      	//Imprime uma mensagem e pede ao user que informe uma nota ao aluno
      printf("Informe Nota:\n");
      //Entrada de dados por parte de usuário para a variável nota
      scanf("%f",&nota);
      //Calcula a média 
      media=((media)+(nota));
      }
      //Imprime caracters estéticamente atraentes a muito programadores, a depender do ponto de vista
      printf("============== Media de alunos ==============\n");
      //Imprine na tela a média
      printf("Media:%f\n",((media)/3));
      //O "título/cabeçalho" que complementa o cabeçalho da linha 49
      printf("============== Media de alunos ==============\n");
      //Dá uma pausa no sistema até que o user pressione alguma tecla 
      system("PAUSE > null");  
      }

