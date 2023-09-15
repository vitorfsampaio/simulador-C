#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float inv, res, total, rend;
	int opc, meses, i;
	char p = '%';
	
	printf("Onde gostaria de simular seu investimento?\n");
	printf("1 - Tesouro Selic 2029.\n");
	printf("2 - CDB Rico 300%c do CDI.\n", p);
	printf("3 - Poupança.\n");
	scanf("%d", &opc);
	
	system("cls");
	
	switch(opc){
		case 1:
			printf("Você escolheu investir no Tesouro Selic 2029!\n");
			printf("A taxa selic atual está em 13,25%c ao ano.\n\n", p);
			printf("Quanto gostaria de investir mensalmente?\n");
			scanf("%f", &inv);
			printf("Por quantos meses?\n");
			scanf("%d", &meses);
			
			system("cls");
			
			total = inv*meses;
			
			for(i=1;i<= meses;i++){
				res += inv + inv*0.05660;
			}
			rend = res - total;
			
			printf("Total investido: %.2f.\n", total);
			printf("Rendimento: %.2f.\n", rend);
			printf("Montante final: %.2f.\n", res);
			
			system("pause");
		break;
		case 2:
			printf("Você escolheu investir no CDB Rico 300%c do CDI\n", p);
			printf("O CDI atual está em 13,57%c ao ano.\n\n", p);
			printf("Quanto gostaria de investir mensalmente?\n");
			scanf("%f", &inv);
			printf("Por quantos meses?\n");
			scanf("%d", &meses);
			
			system("cls");
			
			total = inv*meses;
			
			for(i=1;i<= meses;i++){
				res += inv + inv*0.4071;
			}
			rend = res - total;
			
			printf("Total investido: %.2f.\n", total);
			printf("Rendimento: %.2f.\n", rend);
			printf("Montante final: %.2f.\n", res);
			
			system("pause");
		break;
		case 3:
			printf("Você escolheu investir na Poupança!\n", p);
			printf("Seu rendimento atual está avaliado em 8,41%c a.a\n\n", p);
			printf("Quanto gostaria de investir mensalmente?\n");
			scanf("%f", &inv);
			printf("Por quantos meses?\n");
			scanf("%d", &meses);
			
			system("cls");
			
			total = inv*meses;
			
			for(i=1;i<= meses;i++){
				res += inv + inv*0.0067;
			}
			rend = res - total;
			
			printf("Total investido: %.2f.\n", total);
			printf("Rendimento: %.2f.\n", rend);
			printf("Montante final: %.2f.\n\n", res);
			
			system("pause");
		break;
		default:
			printf("Opção inexistente.\nTente novamente mais tarde!\n");
			system("pause");
		break;	
	}	
}
