#include<stdio.h>

int main(){
	
	int i, idade, fx2=0, fx3=0, fx4=0;
	double pct1=0, pct5=0, fx5=0, fx1=0;
	
	for(i=1; i<=8; i++){
		printf("Pessoa numero %d\n",i);
		printf("Informe a idade:\n");
		scanf("%d",&idade);
		
		if(idade<=15) fx1++;
		if(idade>=16 && idade<=30) fx2++;
		if(idade>=31 && idade<=45) fx3++;
		if(idade>=46 && idade<=60) fx4++;
		if(idade>60) fx5++;
	}
	pct1=(fx1/8)*100;
	pct5=(fx5/8)*100;
	
	printf("A quantidade de pessoas na primeira faixa e: %.0lf\n", fx1);
	printf("A quantidade de pessoas na segunda faixa e: %d\n", fx2);
	printf("A quantidade de pessoas na terceira faixa e: %d\n", fx3);
	printf("A quantidade de pessoas na quarta faixa e: %d\n", fx4);
	printf("A quantidade de pessoas na quinta faixa e: %.0lf\n", fx5);

	printf("A porcentagem de pessoas na primeira faixa e: %.0lf%% \n", pct1);
	printf("A porcentagem de pessoas na quinta faixa e: %.0lf%% \n", pct5);
	
	
	
	return 0;
}
