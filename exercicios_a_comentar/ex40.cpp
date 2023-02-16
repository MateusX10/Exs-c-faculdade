// Fun��o : Uma Companhia de Seguros possui nove categorias de seguro baseadas na idade e ocupa��o do segurado.
//Somente pessoas com pelo menos 17 anos e n�o mais de 70 anos podem adquirir ap�lices de seguro.
// Quanto �s classes de ocupa��es, foram definidos tr�s grupos de risco. A tabela abaixo fornece as categorias em fun��o da faixa et�ria e
// do grupo de risco. Dados nome, idade e grupo de risco, determinar a categoria do pretendente � aquisi��o de tal seguro.
//Imprimir o nome a idade e a categoria do pretendente, e , caso a idade n�o esteja na faixa necess�ria, imprimir uma mensagem.
// Autor :  Mateus Henrique de Souza Medeiros (o c�digo n�o foi desenvolvido por mim, eu apenas o comentei)

//Biblioteca comumente usada na entrada e sa�da de dados, permitindo a manipula��o do teclado e mouse, assim como o uso de comandos
//como printf e scanf
#include <stdio.h>   
//Tamb�m uma biblioteca de entrada e sa�da de dados
#include <iostream> 
//Biblioteca que permite o I/O do console
#include <conio.h> 
//Biblioteca matem�tica com fun��es matem�ticas deveramente uteis
#include <math.h> 

//Fun��o Principal, do tipo int
int main()
{


//Declara vari�vel do tipo int
int cat;
//Declara 2 vari�veis do tipo int
int idade,midade;
//Declara vari�vel do tipo char
char grupo;
//Declara vari�vel do tipo char de at� 25 caracteres
char nome[25];
//Imprime na tela uma mensagem
printf("Informe o nome do pretendente\n");
//Fun��o que permite a entrada de dados (char)
scanf("%s",&nome);
//Pede que informe a idade
printf("informe a idade\n");
//Fun��o que permitir� o input de dados da vari�vel "idade" do tipo int
scanf("%d",&idade);
//If a idade estriver entre 17 e 70 ent�o...
if ((idade >= 17) && (idade <=70)) {
	//Pede que informe o grupo de risco
      printf("Informe o grupo de risco: \n");
       //Enquanto o grupo for diferente de "A", "B", e "M", fa�a...
      while ((grupo != 'A') && (grupo != 'B') && (grupo != 'M')) {
      	//Imprime o grupo de risco
         printf("A=Alto    B= Baixo        M=medio\n");
         //Permite escolher o grupo de risco
         scanf("%s",&grupo);
      }
      //If a idade for menor do que 20...
      if (idade < 20){
      	
 			//Escolha "grupo"     	
           switch (grupo){
           	//Caso  o conte�do da vari�vel seja igual a "B"
                   case 'B':
                   	//Vari�vel "cat" recebe "1"
                   cat=1;
                   //Interrompe switch case
                   break;
                   //Caso o conte�do da vari�vel seja "M"
                   case 'M':
                   	//Valor 2 � atribu�do a vari�vel "cat"
                   cat=2;
                   //Interrompe o switch case
                   break;
					//Caso  o conte�do da vari�vel seja igual a "A"                   
                   case 'A':
                   	//Atribui "3" a vari�velm "cat"
                   cat=3;
                   //Interrompe o switch case
                   break;
           }
    //Sen�o...
      }else{
      	//If a idade estiver entre 21 e 24
           if (idade >=21 && idade <=24){
           	//Escolha "grupo"
              switch(grupo){
              	//Caso o conte�do seja igual a "B"
                      case 'B':
                    //Atribui valor "2" a vari�vel "cat"
                      cat=2;
                      //Interrompe switch case
                      break;
                      //Caso o conte�do da vari�vel seja igual a "M" ent�o...
                      case 'M':
                      	//Atribui "3" a vari�vel "cat"
                      cat=3;
                      //Interrompe o switch case
                      break;
                    //Caso o conte�do da vari�vel seja igual a "A"
                      case 'A':
                    //Atribui o valor "4" a vari�vel "cat"
                      cat=4;
                      //Interrompe o switch case
                      break;
              }
              //Sen�o...
            }else{
            	//If a idade estiver entre 25 e 34
                 if (idade >=25 && idade <=34){
                 	//Escolhe "grupo"
                       switch(grupo){
                       	//Caso o conte�do da vari�vel seja igual a "B"
                               case 'B':
                               	//Atribui o valor "3" a vari�vel "cat"
                               cat=3;
                               //Interrompe o switch case
                               break;
                               //Caso o conte�do seja igual a "M"
                               case 'M':
                               	//Atribui o valor "4" a vari�vel "cat"
                               cat=4;
                               //Interrompe o switch case
                               break;
                               //Caso  o conte�do da vari�vel seja igual a "A"
                               case 'A':
                               	//Valor "5" � atribu�do a vari�vel "cat"
                               cat=5;
                               //Interrompe o switch case
                               break;
                       }
                //Sen�o
                  }else{
                  	//If a idade estiver entre 35 e 64
                       if (idade >=35 && idade <=64){
                       	//Escolha "grupo"
                             switch(grupo){
                             		//Caso o conte�do da vari�vel seja igual a "B"
                                     case 'B':
                                    //Atribui valor "4" a vari�vel "cat"
                                     cat=4;
                                     //Interrompe o switch case
                                     break;
                                     //Caso o conte�do da vari�vel seja igual a "M"
                                     case 'M':
                                    //Atribui valor "5" a vari�vel "cat"
                                     cat=5;
                                     //Interrompe o switch case
                                     break;
                                     //Caso o conte�do da vari�vel seja igual a "A"
                                     case 'A':
                                    //Atribui "6" a vari�vel "cat"
                                     cat=6;
                                     //Interrompe switch case
                                     break;
                             }
                             //Sen�o
                        }else{
                        	//Escolha "grupo"
                             switch(grupo){
                             	//Caso o conte�do da vari�vel seja igual a "B"
                                     case 'B':
                                    //Atribui valor "7" a vari�vel "cat"
                                     cat=7;
                                     //Interrompe o switch case
                                     break;
                                     //Caso o conte�do seja igual a "M"
                                     case 'M':
                                    //Atribui o valor "8" a vari�vel "cat"
                                     cat=8;
                                     //Interrompe o switch case
                                     break;
                                     //Caso o conte�do da vari�vel seja igual a "A"
                                     case 'A':
                                    //Atribui "9" a vari�vel "cat"
                                     cat=9;
                                     //Interrompe o switch case
                                     break;
                             }
                        }
                  }
            }
      }
//Imprime o nome, idade e categoria
printf("Nome:%s idade: %i  Categoria:%d",nome,idade,cat);
//Sen�o
}else{
	//Idade fora da faixa
     printf("Idade fora da faixa !");
}
//D� uma "pausa" no programa
system("Pause >NULL");
}

