#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int num, idade, idade50=0, media=0;
	double peso40=0;
	double peso, altura, alturas;
	
	for(num = 1; num <=5;num++){
		printf("Pessoa numero %d \n", num);
		printf("Informe a idade: \n");
		scanf("%d", &idade);
		printf("Informe o peso: \n");
		scanf("%lf", &peso);
		printf("Informe a altura: \n");
		scanf("%lf", &altura);
		
		if(idade>50) idade50++;
		if(idade>=10 && idade<=20){
			media++;
			alturas+=altura;
		}
		if(peso<40) peso40++;
	}
	
	float porcentagem40 = (peso40/5) * 100;
	
	printf("Pessoas acima de 50 anos: %d \n", idade50);
	printf("Media de altura das pessoas entre 10 e 20 anos: %.2lf \n", (alturas/media));
	printf("%d\n", peso40);
	printf("Porcentagem de pessoas com peso infeior a 40kg: %f ", porcentagem40);
	
	
	
	

	
	return 0;
}
