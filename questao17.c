#include<stdio.h>

int main() {
	int i=1, canal;
	double c4, c5, c7, c12, total, pessoas;
	
		printf("Primeiramente informe o canal em seguida o numero de pessoas que o assistem:\n");
	
	while(i!=0){
		printf("Canal ao qual as pessoas do bloco %d estavam assistindo:\nDigite 4 - canal 4\nDigite 5 - canal 5\nDigite 7 - canal 7\nDigite 12 - canal 12\n", i);
		scanf("%d", &canal);
		printf("Numero pessoas do bloco %d:\n", i);
		scanf("%lf", &pessoas);
		
		
		total+=pessoas;
		i++;
		
		printf("Digite 0 para sair ou 1 para continiuar\n");
		scanf("%d", &i);
		
		if(canal==4) c4+=pessoas;
		if(canal==5) c5+=pessoas;
		if(canal==7) c7+=pessoas;
		if(canal==12) c12+=pessoas;
	}
	
	printf("Porcetagem de pessoas que assistiam ao canal 4: %.0lf%%\n", (c4/total)*100);
	printf("Porcetagem de pessoas que assistiam ao canal 5: %.0lf%%\n", (c5/total)*100);
	printf("Porcetagem de pessoas que assistiam ao canal 7: %.0lf%%\n", (c7/total)*100);
	printf("Porcetagem de pessoas que assistiam ao canal 12: %.0lf%%\n", (c12/total)*100);
 

return 0;
}
