// Ex: 37
// Fun��o :  37. Fa�a um algoritmo que leia o nome, o sexo, a altura e a idade de uma pessoa.
//Calcule e mostre nome e o seu peso ideal de acordo com as seguintes caracter�sticas da pessoa:


//Inclue biblioteca de entrada e sa�da de dados, como manipula��o de teclado e mouse
#include <stdio.h>   
//Biblioteca de entrada e sa�da de dados
#include <iostream> 
//Fun��o Principal
int main()
{
	
//Declara vari�vel do tipo str de at� 25 caracteres e outra de 1 caracter
char nome[25],sexo;
//Declara vari�vel do tipo float
float altura,pesoideal;
//Declara vari�vel do tipo int
int idade;
printf("Informe o nome\n");
//Fun��o que permite o usu�rio dar input de dados
scanf("%s",&nome);
//Imprime uma mensagem
printf("Informe o sexo: M ou F\n");
//Fun��o que � necess�ria para dar entrada de dados do conte�do da vari�vel sexo
scanf("%s",&sexo);
//Pede para informar a altura
printf("informe a altura\n");
//Fun��o de entrada de dados do tipo int
scanf("%d",&altura);
//Imprime na tela uma mensagem pedindo que informe a idade
printf("informe a idade\n");
//Fun��o de entrada de dados do tipo intiro, onde o resultado � guardado na vari�vel idade
scanf("%d",&idade);
//Escolha "sexo"
switch(sexo){
//Caso o conte�do da vari�vel seja igual a "M"
case 'M':
//If a altura for maior do que 1.7
 if (altura > (1.7)) {
 	//If a idade for menor ou igual a 20
      if (idade <=20){
      	//Calcula peso ideal
           pesoideal=((72.7)*altura)-58;
        //Sen�o...
      }else{
      	//If idade estiver entre 21 e 39 ent�o
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
 	//If a idade for menor ou igual a 40 ent�o
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
//Caso o conte�do da vari�vel seja igual a "F"
case 'F':
	//If a altura for superior a 1.5 ent�o
   if (altura > 1.5){
   	//Calcula o peso ideal
        pesoideal=((62.1)*altura)-44.7;
//Sen�o...
   }else{
   	//If a idade for maior ou igual a 35
        if (idade >=35) {
        	//Calcula o peso ideal
             pesoideal=((62.1)*altura)-45;
        //Sen�o...
        }else{
             pesoideal=((62.1)*altura)-49;
        }
   }
//Interrompe o switch case
break;
//Se nenhum dos cases forem executados, ent�o talvez algo tenha falhado
default:
//Sexo inv�lido
printf("sexo invalido\n");
//Interrompe switch case
break;
}
//Imprime o peso ideal
printf("O peso ideal de %s eh %1.1f",nome,pesoideal);
//D� um "pausa" no programa
system("Pause >NULL");
}


