// Ex 04
// Fun��o : Escrever um algoritmo que leia o nome de um vendedor, o seu sal�rio fixo e //o total de vendas efetuadas 
//por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o //sobre suas vendas efetuadas, 
//informar o  seu nome, o sal�rio fixo e sal�rio no final do m�s
// Autor : EU
// Data :        
// Se��o de Declara��es 


//biblitoeca para a manipula��o de teclado e mouse
#include <stdio.h>
//I/O do console
#include <conio.h>
//Biblioteca que permite o uso de m�todos matem�ticos
#include <math.h>
//Entrada e sa�da de dados
#include <iostream>

//Fun��o principal
main()
{	
	//Define uma vari�vel do tipo str/char de at� 100 caracters
      char nome[100];
      //Define 4 vari�veis do tipo ponto flutuante
      float salario,vendas,comissao,salariofinal;
      // Inicio comandos
      //Printa na tela e pede ao user o nome do vendedor
      printf("Digite nome vendedor:");
      //Fun��o para o input de dados do usu�rio (nome)
      scanf("%s",&nome);
      //Pede o sal�rio 
      printf("Digite Salario fixo:");
      //Entrada de dados do sal�rio
      scanf("%f",&salario);
      //Pede o total de vendas
      printf("Digite Total vendas (Mes):");
      //Entrada de dados para o "total de vendas"
      scanf("%f",&vendas);
      //Faz c�lculo - comiss�o
      comissao=(0,15*vendas);
      //Calcula sal�rio final
      salariofinal=(salario+comissao);
      // Resultados
      //Printa na tela algo est�ticamente bonito pro programa
      printf("---------------------------------\n");
      //Printa nome
      printf("Nome:%s\n",nome);
      //Escreve na tela o sal�rio (fixo)
      printf("Salario Fixo:%f\n",salario);
      // Imprime na tela o sal�rio (mensal???)
      printf("Salario Mes:%f\n",salariofinal);
      //Printa mais caracters esteticamente atraentes para o programa
      printf("---------------------------------");
      //D� uma pausa no programa
      system("PAUSE > null");  
      }

