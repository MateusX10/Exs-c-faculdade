// Autor :  Mateus Henrique de Souza Medeiros (o c�digo n�o foi desenvolvido por mim, eu apenas o comentei)
// Fun��o : 38. Em um curso de Ci�ncia da Computa��o a nota do estudante � calculada a partir de tr�s notas atribu�das,
// respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. As notas variam, de 0 a 10 e
// a nota final � a m�dia ponderada das tr�s notas mencionadas. A tabela abaixo fornece os pesos: //
//Biblioteca que controla a entrada e sa�da de dados
#include <stdio.h>   
//Biblioteca que tamb�m controla a entrada e sa�da de dados, embora haja diferen�as
#include <iostream> 


//Fun��o principal
int main()
{
//Declara 3 vari�veis do tipo ponto flutuante
float n1,n2,n3;
//Declara 3 vari�veis do tipo ponto flutuante
float p1,p2,p3;
//Declara vari�vel do tipo ponto flutuante
float mp;
//Atribui "2" a VAR "p1"
p1=2;
//Atribui "3" a VAR "p2"
p2=3;
//Atribui o valor "5" a vari�vel "p3"
p3=5;
//Imprime uma mensagem pedindo ao usu�rio que ifnrome a nota de trabalho do laborat�rio
printf("Informe a nota do trabalho de laboratorio:\n");
//Fun��o usada no input de dados
scanf("%f",&n1);
//Imprime uma mensagem pedindo ao usu�rio que informe a nota da avalia��o semestral
printf("Informe a nota da avaliacao semestral:\n");
//Fun��o que permite a entrada de dados (tipo float) por parte do usu�rio, onde o resultado � armazenado em uma vari�vel "n2"
scanf("%f",&n2);
//Escreve uma mensagem na tela pedindo ao usu�rio que informe a nota do exame final
printf("Informe a nota do exame final:\n");
//Fun��o usada na entrada de dados do usu�rio, do tipo float
scanf("%f",&n3);
//Calcula m�dia ponderada
mp=((n1*p1) + (n2*p2)+(n3*p3))/(p1+p2+p3);
//Imprime o resultado da m�dia ponderada
printf("A media ponderada eh %1.2f\n",mp);
//D� uma "pausa" no sistema
system("Pause >NULL");
}

