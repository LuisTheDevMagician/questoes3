#include<stdio.h>

int main(){
	double idade, cont=0, total;
	int i=1, sair=1;
	
while(sair=1){
	printf("Informe a idade numero %d:\n", i);
	scanf("%lf", &idade);
	total+=idade;
	cont++;
	i++;
	
	printf("Deseja continuar?\nDigite:\n1 - continuar\n0 - sair\n");
	scanf("%d", &sair);
	
	if(sair==0) break;
	
	
}

printf("Media das idades: %.2lf\n", total/cont);
	
	return 0;
}
