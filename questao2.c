#include<stdio.h>

int main(){
	double valorIngresso=5.0, lucro, lucroMax=0.0;
	int i, qtdIngresso=120;
	
	for(i=1; i<=9; i++){
		printf("Valor do ingresso: %.2lf\n", valorIngresso);
		printf("Quantidade de ingressos: %d\n", qtdIngresso);
		lucro = (qtdIngresso*valorIngresso)-200;
		
		if(lucro>lucroMax) lucroMax=lucro;
		
		printf("O lucro foi de: %.2lf\n", lucro);
		valorIngresso-=0.5;
		qtdIngresso+=26;
	}
	
	printf("O lucro maximo foi de: %.2lf\n", lucroMax);
	
	return 0;
}
