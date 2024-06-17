#include<stdio.h>

int main(){
	double idade, opcao, media, otimo=0, regular=0, bom=0;
	int i=0;
	
	for(i=1; i<=15; i++){
		printf("Informe a idade da pessoa numero %d:\n", i);
		scanf("%lf", &idade);
		printf("Informe a opiniao da pessoa numero %d:\nOtimo - 3\nBom - 2\nRegular - 1\n", i);
		scanf("%lf", &opcao);
		
		if(opcao==3){
			media+=idade;
			otimo++;
		}
		if(opcao==1) regular++;
		if(opcao==2) bom++;
		
	}
	
	printf("A media das idades das pessoas que responderam otimo e: %.2lf\n", media/otimo);
	printf("A quantidade de pessoas que responderam regular e: %.0lf\n", regular++);
	printf("A percentagem de pessoas que responderam bom, entre todos os espectadores analisados e: %.0lf%%\n", (bom/5)*100);
	

	
	return 0;
}
