//algoritmo "ex21"
// Função : Escrever um algoritmo que leia os dados de N pessoas (nome, sexo, idade e saúde)
// e informe se está apta ou não para cumprir o serviço militar obrigatório. Informe os totais.
// Autor :  EU
// Data :          
// Seção de Declarações 

//Bibliteca utilizada como entrada/saída de dados: teclado, mouse, printf, scanf...
#include <stdio.h>
//Biblioteca que fornece I/O do console
#include <conio.h>
//Biblioteca matemática com funções matemáticas curiosamente úteis
#include <math.h>
//Biblioteca matemática de entrada e saída de dados
#include <iostream>
//Biblioteca que emula os comandos do DOS (windows) e  do terminal (linux): lhe permite manipular alguns comandos binários do S.O
#include <stdlib.h>

//Main Funtion
main()
      {
    //Declara variável tipo char de até 15 caracteres
      char nome[15];
      //Uma linha de código comentada, extremamente funcional para o programa =).
      //char sexo[1];
      //Declara duas variáveis do tipo char/str
      char sexo,opc; 
      //Declara MUITAS variáveis do tipo inteiro 
      int idade,saude,totApto,nApto,programa,total;
      // Incio Comandos
      //Atribui "S" a variável "S"
      opc  = 'S';
      //Atribui "1" a variável "programa"
      programa = 1;
      //Laço de repetição while: enquanto o conteúdo da variável "programa" permanecer equivalente a "1", faça...
      while ( programa == 1 )
      {
    //Incremente "1" a variável "total"
       total=total+1;     
       //Imprime uma mensagem na tela pedindo ao usuário que digite um nome
       printf("Digite o nome: ");
       scanf("%s",&nome);
       printf("Digite o sexo (M/F): ");
       scanf("%s",&sexo);
       printf("Digite a idade: ");
       scanf("%d",&idade);
       printf("Digite o estado de saude: ");
       printf("(B) Bom - (R) - Ruim - ");
       scanf("%s",&saude);
       system("cls"); 
            if ((idade > 17 ) && (sexo == 'M')  && (saude == 'B' )) 
            {
               totApto=totApto+1;         
               printf("<><><><><><><>VOCE ESTA APTO !!<><><><><><><>\n\n",nome);
            }
            else
            {
                //nApto=nApto+1; Desativado
                printf("<><><><><><><>NAO APTO !!<><><><><><><>\n\n");
            }
            // Continuação
           printf("Finalizar OU Continuar !\n");
           printf("Deseja Continuar (S) Sim Ou (N) Nao\n");
           scanf("%s",&opc);
           switch(opc)
           {
                      case 'S': case 's':
                           programa == 1;
                           system("cls"); 
                           break;
                      case 'N': case 'n':
                         printf("Total: %d\n",total); 
                         printf("Total Aptos:%d\n",totApto);
                         //printf("Total Nao Aptos:%d\n",nApto); Desativado 
                           break;
                      default:
                              printf("Opcao Invalida");
                              programa == 0;
                              break; 
           }
	}
        }                          

