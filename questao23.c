#include<stdio.h>
#include <stdbool.h>

int main() {
	double salario;
	int loop = true, opcao, meses;
	
	while(true){
		printf("Informe o codigo do que deseja fazer:\n1 - Novo salario.\n2 - Ferias.\n3 - Decimo terceiro.\n4 - Sair do programa.\n");
		scanf("%d", &opcao);
		
		if(opcao<1 || opcao>4){
			printf("Opcao selecionada invalida, o programa sera finalizado.\n");
			break;
		}
		
		if(opcao==1){
			printf("Informe o seu salario:\n");
			scanf("%lf", &salario);
			
			if(salario<=210) salario = (salario + (salario*15)/100);
			if(salario>210 && salario<=600) salario = (salario + (salario*10)/100);
			if(salario>600) salario = (salario + (salario*5)/100);
			
			printf("Seu novo salario e: %.2lf reais.\n", salario);
		}
		
		if(opcao==2){
			printf("Informe o seu salario:\n");
			scanf("%lf", &salario);
			
			salario = salario + (salario/3);
			
			printf("Seu novo salario e: %.2lf reais.\n", salario);
		}
		
		if(opcao==3){
			printf("Informe o seu salario:\n");
			scanf("%lf", &salario);
			printf("Inform a quantidade de meses trabalhados:\nNo maximo 12 meses");
			scanf("%d", &meses);
			
			salario = salario*meses/12;
			
			printf("Seu novo salario e: %.2lf reais.\n", salario);
		}
		
		if(opcao==4) break;
		
	}


	
   return 0;
}
