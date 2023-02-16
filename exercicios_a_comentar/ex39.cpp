// 39
// Autor :  Mateus Henrique de Souza Medeiros (o código não foi desenvolvido por mim, eu apenas o comentei)
// Função :39. Dado o nome de um estudante, com o respectivo número de matrícula e as três notas acima mencionadas, desenvolva um algoritmo para calcular a nota final e a classificação de cada estudante. A classificação é dada conforme a tabela abaixo:
//Nota Final Classificação
//[8,10] A
//[7,8] B
//[6,7] C
//[5,6] D
//[0,5] R
//Imprima o nome do estudante, com o seu número, nota final e classificação.


//Biblioteca de entrada e saída de dados
#include <stdio.h>   
//Biblioteca de entrada e saída de dados
#include <iostream> 
//Função Principal
int main()
{
//Declara variável do tipo inteiro
int mat;
//Declara variável do tipo char/str de até 25 caracteres e outra de 1 caracter
char nome[25],classificacao;
//Declara 3 variáveis do tipo float
float n1,n2,n3;
//Declara 3 variáveis do tipo float
float p1,p2,p3;
//Declara variável do tipo float
float mp;
p1=2;
p2=3;
p3=5;
//como faltou a tabela de pesos, declarei as variáveis e atribuí valores fictícios pra ela.
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


