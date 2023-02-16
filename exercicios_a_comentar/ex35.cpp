// Ex: 35
// Autor :  Mateus Henrique de Souza Medeiros (o código não foi desenvolvido por mim, eu apenas o comentei)
// Função :35. Elabore um algoritmo que, dada a idade de um nadador. Classifique-o em uma das seguintes categorias:
//Infantil A = 5 - 7 anos
//Infantil B = 8 - 10 anos
//juvenil A = 11- 13 anos
//juvenil B = 14 - 17 anos
//Sênior = 18 - 25 anos
//Apresentar mensagem "idade fora da faixa etária" quando for outro ano não contemplado.


//Inclue biblioteca de entrada e saída de dados
#include <stdio.h>   
//Biblioteca de entrada e saída de dados
#include <iostream> 
//Define função principal
int main()
{
//Declara variável do tipo inteiro
int idade;
//Imprime na tela uma mensagem pedindo a idade do nadador
printf("Informe a idade do nadador\n");
//Função de entrada e saída de dados
scanf("%d",&idade);
			//If idade estiver entre 5 e 7 então...
           if ((idade >=5) && (idade<=7)) {
           	//Imprima uma mensagem
                printf("Infantil A");
            //Else...
           }else{
           	//If idade estiver entre 8 e 10 então...
                if ((idade>7) && (idade<=10)) {
                	//Imprime uma mensagem
                     printf("Infantil B");
                //Else...
                }else{
                	//If idade estiver entre 11 e 13 então...
                     if ((idade>10) && (idade<=13)) {
                          printf("Juvenil A");
                          //Imprime uma mensagem
                    //Senão...
                     }else{
                     	//If am idade estiver entre 14 e 17 então...
                          if ((idade>13) && (idade <=17)) {
                          	//Imprime na tela uma mensagem
                               printf("Juvenil B");
                        //Else...
                          }else{
                          	//If idade estiver entre 18 e 25 então...
                               if ((idade>17) && (idade<=25)) {
                               	//Imprime mensagem na tela
                                    printf("Senior");
                                //Senão...
                               }else{
                               	//Imprime uma mensagem
                                    printf("Idade fora da faixa etaria");
                               }
                          }
                     }
                }
           }
//Dá um "pausa" no programa
system("Pause >NULL");
}


