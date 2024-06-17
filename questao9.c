#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int num, idade, qtdB=0, mediaIdade=0;
	double peso, altura, pct=0;
	
	for(num = 1; num <=4;num++){
		printf("Pessoa numero %d \n", num);
		printf("Informe a idade: \n");
		scanf("%d", &idade);
		printf("Informe o peso: \n");
		scanf("%lf", &peso);
		printf("Informe a altura: \n");
		scanf("%lf", &altura);
		
		mediaIdade+=idade;
		
		if(peso>90 && altura<1.5) qtdB++;
		if(idade>= 10 && idade<=30 && altura>1.9) pct++;
			
		
		
	}
	
	
	
	printf("Media das idades: %d \n", mediaIdade/2);
	printf("A quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metros: %d \n", qtdB);
	printf("a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 metros: %lf%% \n", pct/4);

	
	
	

	
	return 0;
}
