#include<stdio.h>

int main(){
	double valorF, preco, par;
	char opcao;
	
	printf("Informe o valor do carro:\n");
	scanf("%lf", &preco);
	fflush(stdin);
	printf("Digite A - compra a vista ou digite P - compra parcelada\n");
	scanf("%c", &opcao);
	fflush(stdin);
	
	
	if(opcao=='A'){
		valorF=preco-(preco*20/100);
		printf("O valor a paga sera: %.2lf reais", valorF);
	}
	
	if(opcao=='P'){
		printf("Informe a quantidade de parcelas que deseja pagar:\nA quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60.\n");
		scanf("%lf", &par);
		
		if(par==6){
		  valorF=preco+(preco*3/100);
		  printf("O valor a paga sera: %.2lf reais", valorF);	
		}else if(par==12){
			valorF=preco+(preco*6/100);
		    printf("O valor a paga sera: %.2lf reais", valorF);
		}else if(par==18){
			valorF=preco+(preco*9/100);
		    printf("O valor a paga sera: %.2lf reais", valorF);
		}else if(par==24){
			valorF=preco+(preco*12/100);
		    printf("O valor a paga sera: %.2lf reais", valorF);
		}else if(par==30){
			valorF=preco+(preco*15/100);
		    printf("O valor a paga sera: %.2lf reais", valorF);
		}else if(par==36){
			valorF=preco+(preco*18/100);
		    printf("O valor a paga sera: %.2lf reais", valorF);
		}else if(par==42){
			valorF=preco+(preco*21/100);
		    printf("O valor a paga sera: %.2lf reais", valorF);
		}else if(par==48){
			valorF=preco+(preco*24/100);
		    printf("O valor a paga sera: %.2lf reais", valorF);
		}else if(par==54){
			valorF=preco+(preco*27/100);
		    printf("O valor a paga sera: %.2lf reais", valorF);
		}else if(par==60){
			valorF=preco+(preco*30/100);
		    printf("O valor a paga sera: %.2lf reais", valorF);
		}
	}
	
	return 0;
}
