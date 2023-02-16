// Ex: 33
// Autor :  Mateus Henrique de Souza Medeiros (o código não foi desenvolvido por mim, eu apenas o comentei)
// Função :33. Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser os lados de um triângulo.
// Se forem, informar qual o tipo de triângulo que eles formam: equilátero, isóscele ou escaleno.
// Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outrosdois lados.
// Triângulo Equilátero: aquele que tem os comprimentos dos três lados iguais;
// Triângulo Isóscele: aquele que tem os comprimentos de dois lados iguais. Portanto, todo triângulo equilátero é também isóscele;
// Triângulo Escaleno: aquele que tem os comprimentos de seus três lados diferentes.

//Biblioteca de entrada e saída de dados
#include <stdio.h>   
//A mesma funcionalidade da biblioteca acima, porém com algumas diferenças
#include <iostream> 


//Função Principal
int main()
{
//Declara 3 variáveis do tipo inteiro
int a,b,c;
// Seção de Comandos 
//Imprime na tela uma mensagem pedindo ao usuário que informe um valor
printf("informe ovalor de a\n");
//Função empregado para a entrada de dados por parte do usuário
scanf("%d",&a);
//Imprime ne tela uma mensagem pedindo ao usuário que informe um valor
printf("Informe o valor de b\n");
//Função usada para entrada de dados por parte do usuário
scanf("%d",&b);
//Imprime na tela uma mensagem pedindo ao usuário que informe um valor
printf("Informe o valor de c\n");
//Função usada como entrada de dados
scanf("%d",&c);
	//Verifica a estrutura dos lados, ou seja, se o tamanho das retas correspondem a um triângulo
       if (a<(b+c) && b<(c+a) && c<(b+a)){
       	//If ambos os 3 lados forem iguais
          if (a==b && b==c){
          	//Imprime na tela uma mensagem informando que de acordo com as retas informadas, temos um triângulo equilátero ou isósceles
               printf("Os valores informados correspondem a um triangulo Equilátero e Isóscele");
            //Senão...
          }else{
          	//Verifica se, de acordo com as retas informadas, é possível formar um triângulo escaleno (todos os lados distintos)
               if (a!=b && b!=c && c!=a){
               		//Imprime na tela uma mensagem dizendo ser um triângulo escaleno
                    printf("Os valores informados correspondem a um triangulo Escaleno");
                    //Senão...
               }else{
               	//Os valores informados não correspondem a um triângulo
                    printf("Os valores informados correspondem a um triangulo Isóscele");
               }
          }      
          //Senão...
       }else{
       	//Os valores informados não correspondem a um triângulo
       printf("Os valores informados nao correspondem a um triangulo");
       }
//Dá uma "pause" no programa
system("Pause >NULL");
}

