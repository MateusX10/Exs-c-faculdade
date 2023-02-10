// Ex 04
// Função : Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo e //o total de vendas efetuadas 
//por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão //sobre suas vendas efetuadas, 
//informar o  seu nome, o salário fixo e salário no final do mês
// Autor : EU
// Data :        
// Seção de Declarações 


//biblitoeca para a manipulação de teclado e mouse
#include <stdio.h>
//I/O do console
#include <conio.h>
//Biblioteca que permite o uso de métodos matemáticos
#include <math.h>
//Entrada e saída de dados
#include <iostream>

//Função principal
main()
{	
	//Define uma variável do tipo str/char de até 100 caracters
      char nome[100];
      //Define 4 variáveis do tipo ponto flutuante
      float salario,vendas,comissao,salariofinal;
      // Inicio comandos
      //Printa na tela e pede ao user o nome do vendedor
      printf("Digite nome vendedor:");
      //Função para o input de dados do usuário (nome)
      scanf("%s",&nome);
      //Pede o salário 
      printf("Digite Salario fixo:");
      //Entrada de dados do salário
      scanf("%f",&salario);
      //Pede o total de vendas
      printf("Digite Total vendas (Mes):");
      //Entrada de dados para o "total de vendas"
      scanf("%f",&vendas);
      //Faz cálculo - comissão
      comissao=(0,15*vendas);
      //Calcula salário final
      salariofinal=(salario+comissao);
      // Resultados
      //Printa na tela algo estéticamente bonito pro programa
      printf("---------------------------------\n");
      //Printa nome
      printf("Nome:%s\n",nome);
      //Escreve na tela o salário (fixo)
      printf("Salario Fixo:%f\n",salario);
      // Imprime na tela o salário (mensal???)
      printf("Salario Mes:%f\n",salariofinal);
      //Printa mais caracters esteticamente atraentes para o programa
      printf("---------------------------------");
      //Dá uma pausa no programa
      system("PAUSE > null");  
      }

