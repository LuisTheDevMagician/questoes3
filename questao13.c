#include<stdio.h>

int main() {
    double peso, fx1=0, fx2=0, fx3=0, fx4=0, ps1=0, ps2=0, ps3=0, ps4=0;
    int idade, i;
    
    for(i=1; i<=15; i++){
    	printf("Informe a idade da pessoa %d:\n", i);
    	scanf("%d", &idade);
    	printf("Informe o peso da pessoa %d:\n", i);
    	scanf("%lf", &peso);
    	
    	if(idade>=1 && idade<=10) fx1++, ps1+=peso;
    	if(idade>=11 && idade<=20) fx2++, ps2+=peso;
    	if(idade>=21 && idade<=30) fx3++, ps3+=peso;
    	if(idade>=31) fx4++, ps4+=peso;
    	
	}
	
	printf("Media da faixa etaria de 1 a 10 anos: %.2lf\n", ps1/fx1);
	printf("Media da faixa etaria de 11 a 20 anos: %.2lf\n", ps2/fx2);
	printf("Media da faixa etaria de 21 a 30 anos: %.2lf\n", ps3/fx3);
	printf("Media da faixa etaria acima de 31 anos: %.2lf\n", ps4/fx4);
    

return 0;
}
