#include<stdio.h>

int main(){
	double lucro, compra, venda, compraTotal, vendaTotal, lucro1=0, lucro2=0;
	char opcao;
	int i=1;
	
	while(opcao!='F'){
		printf("Informe o valor de compra da acao numero %d:\n", i);
		scanf("%lf", &compra);
		fflush(stdin);
		printf("Informe o valor de venda da acao numero %d:\n", i);
		scanf("%lf", &venda);
		fflush(stdin);
		printf("Informe o tipo de acao numero %d:\nX- renda fixa\nV - renda variavel\nF - para finalizar o programa.\n", i);
		scanf("%c", &opcao);
		fflush(stdin);
		
		lucro = compra - venda;
		compraTotal+=compra;
		vendaTotal+=venda;
		i++;
		
		if(lucro>1000) lucro1++;
		if(lucro<200) lucro2++;
		if(opcao=='F') break;
	}
	
	printf("A quantidade de acoes com lucro superior a R$ 1.000,00 e: %.0lf\n", lucro1);
	printf("a quantidade de acoes com lucro inferior a R$ 200,00 e: %.0lf\n", lucro2);
	printf("o lucro total da empresa e: %.2lf", compraTotal-vendaTotal);

	
	return 0;
}
