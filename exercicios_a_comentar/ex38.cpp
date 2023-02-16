// Autor :  Mateus Henrique de Souza Medeiros (o código não foi desenvolvido por mim, eu apenas o comentei)
// Função : 38. Em um curso de Ciência da Computação a nota do estudante é calculada a partir de três notas atribuídas,
// respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. As notas variam, de 0 a 10 e
// a nota final é a média ponderada das três notas mencionadas. A tabela abaixo fornece os pesos: //
//Biblioteca que controla a entrada e saída de dados
#include <stdio.h>   
//Biblioteca que também controla a entrada e saída de dados, embora haja diferenças
#include <iostream> 


//Função principal
int main()
{
//Declara 3 variáveis do tipo ponto flutuante
float n1,n2,n3;
//Declara 3 variáveis do tipo ponto flutuante
float p1,p2,p3;
//Declara variável do tipo ponto flutuante
float mp;
//Atribui "2" a VAR "p1"
p1=2;
//Atribui "3" a VAR "p2"
p2=3;
//Atribui o valor "5" a variável "p3"
p3=5;
//Imprime uma mensagem pedindo ao usuário que ifnrome a nota de trabalho do laboratório
printf("Informe a nota do trabalho de laboratorio:\n");
//Função usada no input de dados
scanf("%f",&n1);
//Imprime uma mensagem pedindo ao usuário que informe a nota da avaliação semestral
printf("Informe a nota da avaliacao semestral:\n");
//Função que permite a entrada de dados (tipo float) por parte do usuário, onde o resultado é armazenado em uma variável "n2"
scanf("%f",&n2);
//Escreve uma mensagem na tela pedindo ao usuário que informe a nota do exame final
printf("Informe a nota do exame final:\n");
//Função usada na entrada de dados do usuário, do tipo float
scanf("%f",&n3);
//Calcula média ponderada
mp=((n1*p1) + (n2*p2)+(n3*p3))/(p1+p2+p3);
//Imprime o resultado da média ponderada
printf("A media ponderada eh %1.2f\n",mp);
//Dá uma "pausa" no sistema
system("Pause >NULL");
}

