//algoritmo "ex5"
// Fun��o : Escrever um algoritmo que leia o nome de um aluno e as notas das tr�s //provas que ele obteve no semestre. No final
// informar o nome do aluno e a sua m�dia (aritm�tica)
// Autor : EU
// Data :        
// Se��o de Declara��es 

//Abaixo, temos algumas bibliotecas

//Biblioteca para  a manipul��o do teclado e mouse
#include <stdio.h>
//I/O do console
#include <conio.h>
//Fun��es matem�ticas possivelmente uteis
#include <math.h>
//Entrada e sa�da de dados
#include <iostream>

//Fun��o principal
main()
      {
    //Define uma vari�vel do tipo str/char de at� 100 caracters
      char aluno[100];
      //Define outra vari�vel, mas desta vez do tipo ponto flutuante
      float nota,media;
      //Define VAR do tipo inteiro
      int x;

      // Inicio COmandos
      //Imprime uma esp�cie de cabe�alho
      printf("============== Pau de aco System ==============\n");
      //Printa e pede ao user o nome do aluno
      printf("Digite o nome do aluno: ");
      //Fun��o para a entrade de dados, haver� nesse caso o input do nome do aluno
      scanf("%s",&aluno);
      //Atribui 0 a vari�vel "media"
      media=0;
      //Faz um for (la�o) que pede a nota de 3 alunos
      for(x=1;x<=3;x++)
      {
      	//Imprime uma mensagem e pede ao user que informe uma nota ao aluno
      printf("Informe Nota:\n");
      //Entrada de dados por parte de usu�rio para a vari�vel nota
      scanf("%f",&nota);
      //Calcula a m�dia 
      media=((media)+(nota));
      }
      //Imprime caracters est�ticamente atraentes a muito programadores, a depender do ponto de vista
      printf("============== Media de alunos ==============\n");
      //Imprine na tela a m�dia
      printf("Media:%f\n",((media)/3));
      //O "t�tulo/cabe�alho" que complementa o cabe�alho da linha 49
      printf("============== Media de alunos ==============\n");
      //D� uma pausa no sistema at� que o user pressione alguma tecla 
      system("PAUSE > null");  
      }

