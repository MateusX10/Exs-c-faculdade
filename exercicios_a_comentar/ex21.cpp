//algoritmo "ex21"
// Fun��o : Escrever um algoritmo que leia os dados de N pessoas (nome, sexo, idade e sa�de)
// e informe se est� apta ou n�o para cumprir o servi�o militar obrigat�rio. Informe os totais.
// Autor :  EU
// Data :          
// Se��o de Declara��es 

//Bibliteca utilizada como entrada/sa�da de dados: teclado, mouse, printf, scanf...
#include <stdio.h>
//Biblioteca que fornece I/O do console
#include <conio.h>
//Biblioteca matem�tica com fun��es matem�ticas curiosamente �teis
#include <math.h>
//Biblioteca matem�tica de entrada e sa�da de dados
#include <iostream>
//Biblioteca que emula os comandos do DOS (windows) e  do terminal (linux): lhe permite manipular alguns comandos bin�rios do S.O
#include <stdlib.h>

//Main Funtion
main()
      {
    //Declara vari�vel tipo char de at� 15 caracteres
      char nome[15];
      //Uma linha de c�digo comentada, extremamente funcional para o programa =).
      //char sexo[1];
      //Declara duas vari�veis do tipo char/str
      char sexo,opc; 
      //Declara MUITAS vari�veis do tipo inteiro 
      int idade,saude,totApto,nApto,programa,total;
      // Incio Comandos
      //Atribui "S" a vari�vel "S"
      opc  = 'S';
      //Atribui "1" a vari�vel "programa"
      programa = 1;
      //La�o de repeti��o while: enquanto o conte�do da vari�vel "programa" permanecer equivalente a "1", fa�a...
      while ( programa == 1 )
      {
    //Incremente "1" a vari�vel "total"
       total=total+1;     
       //Imprime uma mensagem na tela pedindo ao usu�rio que digite um nome
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
            // Continua��o
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

