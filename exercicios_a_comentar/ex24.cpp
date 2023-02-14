//algoritmo "ex24"
// Função : Faça um algoritmo que receba N números e mostre positivo, negativo ou zero para cada número.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o programa em si não foi desenvolvido por mim)
// Data : 14/02
// Seção de Declarações 


//Biblioteca de entrada e saída de dados
#include <iostream>
//Biblioteca que permite I/O do console
#include <conio.h>
//Biblioteca que permite a entrada e saída de dados, possibilitando funções como "printf" e "scanf"
#include <stdio.h>
//Biblioteca matemática com funções matemática úteis
#include <math.h>
//Biblioteca que emula todos os comandos do DOS (windows) e do terminal (linux)
#include <stdlib.h>

//Main Function
main()
     {
     	
     	//Declara variável do tipo inteiro
         int numero;
         //Declara 2 variáveis do tipo char/str
         char prog,opc;
         // Seção de comandos
         //Atribui "S" a variável "opc"
         opc='S';
         //VAR "prog" recebe 1
         prog=1;
         //Enquanto a variável "prog" for igual a 1...
         while(prog==1)
              {
              	//Cabeçalho
                printf("()()()()()()()() Chuck Berry System ()()()()()()()()\n");       
                //Imprime na tela uma mensagem pedindo que digite um valor
                printf("Digite um Numero: ");
                //Input de dados do usuário
                scanf("%d",&numero);
                //Se o número digitado for igual a 0...
                   if(numero==0)
                      {
                      	//Imprime uma mensagem informando que o número digitado foi 0
                       printf(".::::::::: [NUMERO DIGITADO (0)] :::::::::.\n\n");
                      }
                      //Senão...
                   else
                       {
                       	//Se número for maior do que 0...
                        if(numero>0)
                           {
                           	//Imprime na tela uma mensagem: "NUMERO POSITIVO"
                           printf(".::::::::: [NUMERO POSITIVO] :::::::::.\n\n");
                           }
                           //Senão...
                           else
                           {
                           	//Imprime uma mensagem informando que o número é negativo
                               printf(".::::::::: [NUMERO NEGATIVO] :::::::::.\n\n");
                           }  
                        }   // Fim SE 
                        //Imprime na tela uma mensagem perguntando ao usuário: "continuar?????????"
                        printf("Deseja Continuar ? | [S] Sim ou [N] Nao | : ");
                        //Função usada no input de dados do usuário, onde o resultado desse input é armazenado numa variável "opc"
                        scanf("%s",&opc);
                        //Escolha "opc"
                        switch(opc)
                        {
                        	//Caso seu conteúdo seja igual a "S" ou a "s", então...
                         case 'S': case 's':
                         	//Atribua "1" a variável "prog"
                              prog=1;
                              //Dê um "break" no switch  case, a fim de não executar os outros cases
                              break;
                              
                        //Caso o conteúdo da variável seja equivalente a "N" ou "n", então...
                         case 'N': case 'n':
                         	//Atribua "0" a variável "prog"
                              prog=0;
                              //Interrompa o fluxo do switch case, a fim de não permitir a execução dos demais cases
                              break;
                        //Se nenhum dos cases for executado, então esse bloco de código é executado
                         default:
                         	//Informa ser uma opc inválida
                                 printf("oOoOoO [Opcao Invalida] oOoOoO\n");
                                 //Pergunta se quer continuar
                                 printf("Deseja Continuar ? | [S] Sim ou [N] Nao | : ");
                                 //Faz entrada de dados
                                 scanf("%s",&opc);
                                 
                             		//if opc == "S" ou opc == "s" então...    
                                      if(opc=='S' || opc=='s')
                                        {
                                        //Atribui "1" a VAR "prog"
                                         prog=1;
                                        }
                                        //If a variável opc for igual a "N/n"
                                         if(opc=='N' || opc=='n')
                                            {
                                            	//Atribua "0" a variável "prog"
                                                   prog=0;
                                            }             
                                    	//Interrompa o switch case
                                          break;
                         } // Fim Switch                            
                 }  // Fim While           
                //Dá uma "pause/congelamento" no programa
                 system("PAUSE > null");
        }         
////////////////////////////////////////////////////////////////////////     

