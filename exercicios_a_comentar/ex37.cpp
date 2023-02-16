// Ex: 37
// Função :  37. Faça um algoritmo que leia o nome, o sexo, a altura e a idade de uma pessoa.
//Calcule e mostre nome e o seu peso ideal de acordo com as seguintes características da pessoa:


//Inclue biblioteca de entrada e saída de dados, como manipulação de teclado e mouse
#include <stdio.h>   
//Biblioteca de entrada e saída de dados
#include <iostream> 
//Função Principal
int main()
{
	
//Declara variável do tipo str de até 25 caracteres e outra de 1 caracter
char nome[25],sexo;
//Declara variável do tipo float
float altura,pesoideal;
//Declara variável do tipo int
int idade;
printf("Informe o nome\n");
//Função que permite o usuário dar input de dados
scanf("%s",&nome);
//Imprime uma mensagem
printf("Informe o sexo: M ou F\n");
//Função que é necessária para dar entrada de dados do conteúdo da variável sexo
scanf("%s",&sexo);
//Pede para informar a altura
printf("informe a altura\n");
//Função de entrada de dados do tipo int
scanf("%d",&altura);
//Imprime na tela uma mensagem pedindo que informe a idade
printf("informe a idade\n");
//Função de entrada de dados do tipo intiro, onde o resultado é guardado na variável idade
scanf("%d",&idade);
//Escolha "sexo"
switch(sexo){
//Caso o conteúdo da variável seja igual a "M"
case 'M':
//If a altura for maior do que 1.7
 if (altura > (1.7)) {
 	//If a idade for menor ou igual a 20
      if (idade <=20){
      	//Calcula peso ideal
           pesoideal=((72.7)*altura)-58;
        //Senão...
      }else{
      	//If idade estiver entre 21 e 39 então
           if ((idade >20) && (idade <=39)){
           	//Calcule o peso ideal
                pesoideal<-((72.7)*altura)-53;
                //Else...
           }else{
           	//Calcula peso ideal
                pesoideal<-((72.7)*altura)-45;
           }
      }
    //Else...
 } else {
 	//If a idade for menor ou igual a 40 então
      if (idade <=40){
      	//Calcula o peso ideal
           pesoideal=((72.7)*altura)-50;
        //Else...
      }else{
           pesoideal=((72.7)*altura)-58;
      }
 }
 //Interrompe switch case
break;
//Caso o conteúdo da variável seja igual a "F"
case 'F':
	//If a altura for superior a 1.5 então
   if (altura > 1.5){
   	//Calcula o peso ideal
        pesoideal=((62.1)*altura)-44.7;
//Senão...
   }else{
   	//If a idade for maior ou igual a 35
        if (idade >=35) {
        	//Calcula o peso ideal
             pesoideal=((62.1)*altura)-45;
        //Senão...
        }else{
             pesoideal=((62.1)*altura)-49;
        }
   }
//Interrompe o switch case
break;
//Se nenhum dos cases forem executados, então talvez algo tenha falhado
default:
//Sexo inválido
printf("sexo invalido\n");
//Interrompe switch case
break;
}
//Imprime o peso ideal
printf("O peso ideal de %s eh %1.1f",nome,pesoideal);
//Dá um "pausa" no programa
system("Pause >NULL");
}


