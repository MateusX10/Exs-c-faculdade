//algoritmo "ex24"
// Fun��o : Fa�a um algoritmo que receba N n�meros e mostre positivo, negativo ou zero para cada n�mero.
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o c�digo, o programa em si n�o foi desenvolvido por mim)
// Data : 14/02
// Se��o de Declara��es 


//Biblioteca de entrada e sa�da de dados
#include <iostream>
//Biblioteca que permite I/O do console
#include <conio.h>
//Biblioteca que permite a entrada e sa�da de dados, possibilitando fun��es como "printf" e "scanf"
#include <stdio.h>
//Biblioteca matem�tica com fun��es matem�tica �teis
#include <math.h>
//Biblioteca que emula todos os comandos do DOS (windows) e do terminal (linux)
#include <stdlib.h>

//Main Function
main()
     {
     	
     	//Declara vari�vel do tipo inteiro
         int numero;
         //Declara 2 vari�veis do tipo char/str
         char prog,opc;
         // Se��o de comandos
         //Atribui "S" a vari�vel "opc"
         opc='S';
         //VAR "prog" recebe 1
         prog=1;
         //Enquanto a vari�vel "prog" for igual a 1...
         while(prog==1)
              {
              	//Cabe�alho
                printf("()()()()()()()() Chuck Berry System ()()()()()()()()\n");       
                //Imprime na tela uma mensagem pedindo que digite um valor
                printf("Digite um Numero: ");
                //Input de dados do usu�rio
                scanf("%d",&numero);
                //Se o n�mero digitado for igual a 0...
                   if(numero==0)
                      {
                      	//Imprime uma mensagem informando que o n�mero digitado foi 0
                       printf(".::::::::: [NUMERO DIGITADO (0)] :::::::::.\n\n");
                      }
                      //Sen�o...
                   else
                       {
                       	//Se n�mero for maior do que 0...
                        if(numero>0)
                           {
                           	//Imprime na tela uma mensagem: "NUMERO POSITIVO"
                           printf(".::::::::: [NUMERO POSITIVO] :::::::::.\n\n");
                           }
                           //Sen�o...
                           else
                           {
                           	//Imprime uma mensagem informando que o n�mero � negativo
                               printf(".::::::::: [NUMERO NEGATIVO] :::::::::.\n\n");
                           }  
                        }   // Fim SE 
                        //Imprime na tela uma mensagem perguntando ao usu�rio: "continuar?????????"
                        printf("Deseja Continuar ? | [S] Sim ou [N] Nao | : ");
                        //Fun��o usada no input de dados do usu�rio, onde o resultado desse input � armazenado numa vari�vel "opc"
                        scanf("%s",&opc);
                        //Escolha "opc"
                        switch(opc)
                        {
                        	//Caso seu conte�do seja igual a "S" ou a "s", ent�o...
                         case 'S': case 's':
                         	//Atribua "1" a vari�vel "prog"
                              prog=1;
                              //D� um "break" no switch  case, a fim de n�o executar os outros cases
                              break;
                              
                        //Caso o conte�do da vari�vel seja equivalente a "N" ou "n", ent�o...
                         case 'N': case 'n':
                         	//Atribua "0" a vari�vel "prog"
                              prog=0;
                              //Interrompa o fluxo do switch case, a fim de n�o permitir a execu��o dos demais cases
                              break;
                        //Se nenhum dos cases for executado, ent�o esse bloco de c�digo � executado
                         default:
                         	//Informa ser uma opc inv�lida
                                 printf("oOoOoO [Opcao Invalida] oOoOoO\n");
                                 //Pergunta se quer continuar
                                 printf("Deseja Continuar ? | [S] Sim ou [N] Nao | : ");
                                 //Faz entrada de dados
                                 scanf("%s",&opc);
                                 
                             		//if opc == "S" ou opc == "s" ent�o...    
                                      if(opc=='S' || opc=='s')
                                        {
                                        //Atribui "1" a VAR "prog"
                                         prog=1;
                                        }
                                        //If a vari�vel opc for igual a "N/n"
                                         if(opc=='N' || opc=='n')
                                            {
                                            	//Atribua "0" a vari�vel "prog"
                                                   prog=0;
                                            }             
                                    	//Interrompa o switch case
                                          break;
                         } // Fim Switch                            
                 }  // Fim While           
                //D� uma "pause/congelamento" no programa
                 system("PAUSE > null");
        }         
////////////////////////////////////////////////////////////////////////     

