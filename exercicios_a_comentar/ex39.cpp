// 39
// Autor :  Mateus Henrique de Souza Medeiros (o c�digo n�o foi desenvolvido por mim, eu apenas o comentei)
// Fun��o :39. Dado o nome de um estudante, com o respectivo n�mero de matr�cula e as tr�s notas acima mencionadas, desenvolva um algoritmo para calcular a nota final e a classifica��o de cada estudante. A classifica��o � dada conforme a tabela abaixo:
//Nota Final Classifica��o
//[8,10] A
//[7,8] B
//[6,7] C
//[5,6] D
//[0,5] R
//Imprima o nome do estudante, com o seu n�mero, nota final e classifica��o.


//Biblioteca de entrada e sa�da de dados
#include <stdio.h>   
//Biblioteca de entrada e sa�da de dados
#include <iostream> 
//Fun��o Principal
int main()
{
//Declara vari�vel do tipo inteiro
int mat;
//Declara vari�vel do tipo char/str de at� 25 caracteres e outra de 1 caracter
char nome[25],classificacao;
//Declara 3 vari�veis do tipo float
float n1,n2,n3;
//Declara 3 vari�veis do tipo float
float p1,p2,p3;
//Declara vari�vel do tipo float
float mp;
p1=2;
p2=3;
p3=5;
//como faltou a tabela de pesos, declarei as vari�veis e atribu� valores fict�cios pra ela.
printf("Informe o nome do aluno:\n");
scanf("%s",&nome);
printf("Informe o numero da matricula:\n");
scanf("%d",&mat);
printf("Informe a nota do trabalho de laboratorio:\n");
scanf("%f",&n1);
printf("Informe a nota da avaliacao semestral:\n");
scanf("%f",&n2);
printf("Informe a nota do exame final:\n");
scanf("%f",&n3);
mp=((n1*p1) + (n2*p2)+(n3*p3))/(p1+p2+p3);
             if (mp > 8) {
                  classificacao='A';
             }else{
                  if ((mp>=7) && (mp<8)) {
                       classificacao='B';
                  }else{
                       if ((mp>=6) && (mp<7)) {
                            classificacao='C';
                       }else{
                            if ((mp>=5) && (mp<6)) {
                                 classificacao='D';
                            }else{
                                 classificacao='R';
                            }
                       }
                  }
             }
printf("Aluno: %s\n",nome);
printf("Matricula: %d\n",mat);
printf("Media: \%1.2f\n",mp);
printf("Classificacao: %c\n", classificacao);
system("Pause >NULL");
}


