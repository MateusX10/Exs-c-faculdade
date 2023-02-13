//algoritmo "ex12"
/* Função : O custo ao consumidor de um carro novo é a soma do custo de fábrica 
com a percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos 
sobre o custo de fábrica, e depois a percentagem do distribuidor sobre o resultado). 
Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. 
Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo. */
// Autor :  Mateus Henrique de Souza Medeiros (apenas comentei o código, o código em si não fui eu quem desenvolveu)
// Data : 13/02/23     
// Seção de Declarações

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

main()
      {
      float custof,custocon,percd,impostos;
      // Inicio Comandos
      printf("==============CARRO NOVO==============\n");
      printf("Digite Custo de Fabrica: ");
      scanf("%f",&custof);
      impostos=(0.45*(custof));
      percd=((custof)+(impostos))*0.28;
      custocon=((custof)+(impostos)+(percd));
      printf("Custo Consumidor:%1.2f",custocon);
      system("Pause>null");
      }
      


