#include<stdio.h>


int main(){
	char opcao;
	double compraValor=0, vistaValor=0, prazoValor=0, total=0;
	int i;
	
	for(i=1; i<=4; i++){
		printf("Informe o valor da transacao %d\n", i);
		scanf("%lf", &compraValor);
		fflush(stdin);
		printf("Aperte V para transacao a vista ou aperte P para transacao a prazo da %d transacao:\n", i);
		scanf("%c", &opcao);
		fflush(stdin);
		
		
		total+=compraValor;
		if(opcao=='V') vistaValor += compraValor;
		if(opcao=='P') prazoValor+=compraValor;
		
	}
	
	printf("Valor transacoes a vista: %.2lf\n", vistaValor);
	printf("Valor transacoes a prazo: %.2lf\n", prazoValor);
	printf("Valor total das transacoes: %.2lf\n", total);
	printf("Valor da primeira prestacao das compras a prazo: %.2lf\n", prazoValor/3);
	
}
