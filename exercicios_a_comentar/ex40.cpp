// Função : Uma Companhia de Seguros possui nove categorias de seguro baseadas na idade e ocupação do segurado.
//Somente pessoas com pelo menos 17 anos e não mais de 70 anos podem adquirir apólices de seguro.
// Quanto às classes de ocupações, foram definidos três grupos de risco. A tabela abaixo fornece as categorias em função da faixa etária e
// do grupo de risco. Dados nome, idade e grupo de risco, determinar a categoria do pretendente à aquisição de tal seguro.
//Imprimir o nome a idade e a categoria do pretendente, e , caso a idade não esteja na faixa necessária, imprimir uma mensagem.
// Autor :  Mateus Henrique de Souza Medeiros (o código não foi desenvolvido por mim, eu apenas o comentei)

//Biblioteca comumente usada na entrada e saída de dados, permitindo a manipulação do teclado e mouse, assim como o uso de comandos
//como printf e scanf
#include <stdio.h>   
//Também uma biblioteca de entrada e saída de dados
#include <iostream> 
//Biblioteca que permite o I/O do console
#include <conio.h> 
//Biblioteca matemática com funções matemáticas deveramente uteis
#include <math.h> 

//Função Principal, do tipo int
int main()
{


//Declara variável do tipo int
int cat;
//Declara 2 variáveis do tipo int
int idade,midade;
//Declara variável do tipo char
char grupo;
//Declara variável do tipo char de até 25 caracteres
char nome[25];
//Imprime na tela uma mensagem
printf("Informe o nome do pretendente\n");
//Função que permite a entrada de dados (char)
scanf("%s",&nome);
//Pede que informe a idade
printf("informe a idade\n");
//Função que permitirá o input de dados da variável "idade" do tipo int
scanf("%d",&idade);
//If a idade estriver entre 17 e 70 então...
if ((idade >= 17) && (idade <=70)) {
	//Pede que informe o grupo de risco
      printf("Informe o grupo de risco: \n");
       //Enquanto o grupo for diferente de "A", "B", e "M", faça...
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
           	//Caso  o conteúdo da variável seja igual a "B"
                   case 'B':
                   	//Variável "cat" recebe "1"
                   cat=1;
                   //Interrompe switch case
                   break;
                   //Caso o conteúdo da variável seja "M"
                   case 'M':
                   	//Valor 2 é atribuído a variável "cat"
                   cat=2;
                   //Interrompe o switch case
                   break;
					//Caso  o conteúdo da variável seja igual a "A"                   
                   case 'A':
                   	//Atribui "3" a variávelm "cat"
                   cat=3;
                   //Interrompe o switch case
                   break;
           }
    //Senão...
      }else{
      	//If a idade estiver entre 21 e 24
           if (idade >=21 && idade <=24){
           	//Escolha "grupo"
              switch(grupo){
              	//Caso o conteúdo seja igual a "B"
                      case 'B':
                    //Atribui valor "2" a variável "cat"
                      cat=2;
                      //Interrompe switch case
                      break;
                      //Caso o conteúdo da variável seja igual a "M" então...
                      case 'M':
                      	//Atribui "3" a variável "cat"
                      cat=3;
                      //Interrompe o switch case
                      break;
                    //Caso o conteúdo da variável seja igual a "A"
                      case 'A':
                    //Atribui o valor "4" a variável "cat"
                      cat=4;
                      //Interrompe o switch case
                      break;
              }
              //Senão...
            }else{
            	//If a idade estiver entre 25 e 34
                 if (idade >=25 && idade <=34){
                 	//Escolhe "grupo"
                       switch(grupo){
                       	//Caso o conteúdo da variável seja igual a "B"
                               case 'B':
                               	//Atribui o valor "3" a variável "cat"
                               cat=3;
                               //Interrompe o switch case
                               break;
                               //Caso o conteúdo seja igual a "M"
                               case 'M':
                               	//Atribui o valor "4" a variável "cat"
                               cat=4;
                               //Interrompe o switch case
                               break;
                               //Caso  o conteúdo da variável seja igual a "A"
                               case 'A':
                               	//Valor "5" é atribuído a variável "cat"
                               cat=5;
                               //Interrompe o switch case
                               break;
                       }
                //Senão
                  }else{
                  	//If a idade estiver entre 35 e 64
                       if (idade >=35 && idade <=64){
                       	//Escolha "grupo"
                             switch(grupo){
                             		//Caso o conteúdo da variável seja igual a "B"
                                     case 'B':
                                    //Atribui valor "4" a variável "cat"
                                     cat=4;
                                     //Interrompe o switch case
                                     break;
                                     //Caso o conteúdo da variável seja igual a "M"
                                     case 'M':
                                    //Atribui valor "5" a variável "cat"
                                     cat=5;
                                     //Interrompe o switch case
                                     break;
                                     //Caso o conteúdo da variável seja igual a "A"
                                     case 'A':
                                    //Atribui "6" a variável "cat"
                                     cat=6;
                                     //Interrompe switch case
                                     break;
                             }
                             //Senão
                        }else{
                        	//Escolha "grupo"
                             switch(grupo){
                             	//Caso o conteúdo da variável seja igual a "B"
                                     case 'B':
                                    //Atribui valor "7" a variável "cat"
                                     cat=7;
                                     //Interrompe o switch case
                                     break;
                                     //Caso o conteúdo seja igual a "M"
                                     case 'M':
                                    //Atribui o valor "8" a variável "cat"
                                     cat=8;
                                     //Interrompe o switch case
                                     break;
                                     //Caso o conteúdo da variável seja igual a "A"
                                     case 'A':
                                    //Atribui "9" a variável "cat"
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
//Senão
}else{
	//Idade fora da faixa
     printf("Idade fora da faixa !");
}
//Dá uma "pausa" no programa
system("Pause >NULL");
}

