#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <cmath>


void MostraMenu(char can1[40], char can2[40], char can3[40]){
	printf("Candidatos: ");
	printf("\n1 - ");
	printf("%s", can1);
	printf("\n2 - ");
	printf("%s", can2);
	printf("\n3 - ");
	printf("%s",can3);
};



int main(){
	float QuantidadeVotosCandidato1 = 0;
	float QuantidadeVotosCandidato2= 0;
	float QuantidadeVotosCandidato3 = 0;
	int voto, PorcentagemVotosCand1, PorcentagemVotosCand2, PorcentagemVotosCand3;
	int TotHabitantes = 36'';
	int cont = 0;
	char NomeCandidato1[7] = "python";
	char NomeCandidato2[11] = "JavaScript";
	char NomeCandidato3[4] = "php";
	MostraMenu(NomeCandidato1, NomeCandidato2, NomeCandidato3);
	
	for (cont; cont < TotHabitantes; cont++){
		printf("\n\nSeu voto: ");
		scanf("%d", &voto);
		/*Beep(493, 2000);*/
		if (voto == 1){
			QuantidadeVotosCandidato1 = QuantidadeVotosCandidato1 + 1;
		}
		else if (voto == 2){
			QuantidadeVotosCandidato2 = QuantidadeVotosCandidato2 + 1;			
		}
		else if (voto == 3){
			QuantidadeVotosCandidato3 = QuantidadeVotosCandidato3 + 1;
		}
	}
	printf("%s", NomeCandidato1);
	printf(": ");
	printf("%.1f", (QuantidadeVotosCandidato1 * 100 / TotHabitantes));
	printf("%s", "% ");
	printf("%s", "(");
	printf("%0.f", QuantidadeVotosCandidato1);
	printf("%s", ")");
	printf("\n%s", NomeCandidato2);
	printf(": ");
	printf("%.1f", (QuantidadeVotosCandidato2 * 100 / TotHabitantes));
	printf("%s", "% ");
	printf("%s", "(");
	printf("%0.f", QuantidadeVotosCandidato2);
	printf("%s", ")");
	printf("\n%s", NomeCandidato3);
	printf(": ");
	printf("%.1f", (QuantidadeVotosCandidato3 * 100 / TotHabitantes));
	printf("%s", "% ");
	printf("%s", "(");
	printf("%0.f", QuantidadeVotosCandidato3);
	printf("%s", ")");
	
	
	
}


