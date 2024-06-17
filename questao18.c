#include<stdio.h>

int main() {
    int idade=1, i=1, menorH=0, menorM=0, maiorH=0, maiorM=0, slm=0, auxI;
	double salario=0, salarioTH=0, salarioTM=0, salarioH=0, salarioM=0, menorS=99999;
	char sexo, auxC;
	
	while(idade>0){
		printf("Informe a idade da pessoa numero %d\n", i);
		scanf("%d", &idade);
		fflush(stdin);
		
		if(idade<0) break;
		
		printf("Informe o sexo da pessoa numero %d\n", i);
		scanf("%c", &sexo);
		fflush(stdin);
		printf("Informe o salario da pessoa numero %d\n", i);
		scanf("%lf", &salario);
		fflush(stdin);
		
		i++;
		
		
		
		if(salario<menorS){
			menorS=salario;
			auxC=sexo;
			auxI=idade;
		}
		
		if(sexo=='H'){
			salarioTH+=salario;
			salarioH++;
			if(idade<menorH){
				menorH=idade;
			}
			if(maiorH<idade){
				maiorH=idade;
			}
		}
		if(sexo=='M'){
			salarioTM+=salario;
			salarioM++;
			if(idade<menorM){
				menorM=idade;
			}
			if(maiorM<idade){
				maiorM=idade;
			}
		}
		if(sexo=='M' && salario<200) slm++;	
	} 
	
	printf("Media salarial masculina: %.2lf\n", salarioTH/salarioH);
	printf("Maior idade masculina: %d\n", maiorH);
	printf("Menor idade masculina: %d\n", menorH);
	printf("Media salarial feminina: %.2lf\n", salarioTM/salarioM);
	printf("Maior idade feminina: %d\n", maiorM);
	printf("Menor idade feminina: %d\n", menorM);
	printf("A quantidade de mulheres com salario ate R$ 200,00 e: %d\n", slm);
	printf("A idade e o sexo da pessoa que possui o menor salario e: %d e %c\n", auxI, auxC);
    

return 0;
}
