// Ex: 33
// Autor :  Mateus Henrique de Souza Medeiros (o c�digo n�o foi desenvolvido por mim, eu apenas o comentei)
// Fun��o :33. Escrever um algoritmo que leia tr�s valores inteiros e verifique se eles podem ser os lados de um tri�ngulo.
// Se forem, informar qual o tipo de tri�ngulo que eles formam: equil�tero, is�scele ou escaleno.
// Propriedade: o comprimento de cada lado de um tri�ngulo � menor do que a soma dos comprimentos dos outrosdois lados.
// Tri�ngulo Equil�tero: aquele que tem os comprimentos dos tr�s lados iguais;
// Tri�ngulo Is�scele: aquele que tem os comprimentos de dois lados iguais. Portanto, todo tri�ngulo equil�tero � tamb�m is�scele;
// Tri�ngulo Escaleno: aquele que tem os comprimentos de seus tr�s lados diferentes.

//Biblioteca de entrada e sa�da de dados
#include <stdio.h>   
//A mesma funcionalidade da biblioteca acima, por�m com algumas diferen�as
#include <iostream> 


//Fun��o Principal
int main()
{
//Declara 3 vari�veis do tipo inteiro
int a,b,c;
// Se��o de Comandos 
//Imprime na tela uma mensagem pedindo ao usu�rio que informe um valor
printf("informe ovalor de a\n");
//Fun��o empregado para a entrada de dados por parte do usu�rio
scanf("%d",&a);
//Imprime ne tela uma mensagem pedindo ao usu�rio que informe um valor
printf("Informe o valor de b\n");
//Fun��o usada para entrada de dados por parte do usu�rio
scanf("%d",&b);
//Imprime na tela uma mensagem pedindo ao usu�rio que informe um valor
printf("Informe o valor de c\n");
//Fun��o usada como entrada de dados
scanf("%d",&c);
	//Verifica a estrutura dos lados, ou seja, se o tamanho das retas correspondem a um tri�ngulo
       if (a<(b+c) && b<(c+a) && c<(b+a)){
       	//If ambos os 3 lados forem iguais
          if (a==b && b==c){
          	//Imprime na tela uma mensagem informando que de acordo com as retas informadas, temos um tri�ngulo equil�tero ou is�sceles
               printf("Os valores informados correspondem a um triangulo Equil�tero e Is�scele");
            //Sen�o...
          }else{
          	//Verifica se, de acordo com as retas informadas, � poss�vel formar um tri�ngulo escaleno (todos os lados distintos)
               if (a!=b && b!=c && c!=a){
               		//Imprime na tela uma mensagem dizendo ser um tri�ngulo escaleno
                    printf("Os valores informados correspondem a um triangulo Escaleno");
                    //Sen�o...
               }else{
               	//Os valores informados n�o correspondem a um tri�ngulo
                    printf("Os valores informados correspondem a um triangulo Is�scele");
               }
          }      
          //Sen�o...
       }else{
       	//Os valores informados n�o correspondem a um tri�ngulo
       printf("Os valores informados nao correspondem a um triangulo");
       }
//D� uma "pause" no programa
system("Pause >NULL");
}

