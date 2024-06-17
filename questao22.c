#include<stdio.h>

int main(){
	double idade=1, altura, cont=0, total=0;
	int i=1;
	
while(idade>0){
	printf("Informe a altura da pessoa numero %d:\n", i);
	scanf("%lf", &altura);
		printf("Informe a idade da pessoa numero %d:\n", i);
	scanf("%lf", &idade);
	i++;
	
	
	if(idade>50){
		total+=altura;
		cont++;
	}
	

}

printf("Media das alturas: %.2lf\n", total/cont);
	
	return 0;
}
