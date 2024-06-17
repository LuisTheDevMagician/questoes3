#include<stdio.h>
#include <stdbool.h>

int main() {
	double c1, c2, c3, c4, c5, c6, total=0, qtdVotos=0;
	int loop = true, opcao;
	
	while(true){
		printf("Informe o codigo do voto:\n1 - candidato 1\n2 - candidato 2\n3 - candidato 3\n4 - candidato 4\n5 - voto nulo 5\n6 - voto em branco.\n0 - para finalizar o programa\n");
		scanf("%d", &opcao);
		
		if(opcao==0){
			printf("O programa foi finalizado\n");
			break;
		}
		
		if(opcao<0 || opcao>6){
			printf("Opcao selecionada invalida, o programa sera finalizado.\n");
			break;
		}
		
		printf("Informe a quantidade de votos do candidato selecionado:\n");
		scanf("%lf", &qtdVotos);
		
		
		total+=qtdVotos;
		
		if(opcao==1) c1+=qtdVotos;
		if(opcao==2) c2+=qtdVotos;
		if(opcao==3) c3+=qtdVotos;
		if(opcao==4) c4+=qtdVotos;
		if(opcao==5) c5+=qtdVotos;
		if(opcao==6) c6+=qtdVotos;
	}
	
	printf("Total de votos do candidato numero 1: %.0lf\n", c1);
	printf("Total de votos do candidato numero 2: %.0lf\n", c2);
	printf("Total de votos do candidato numero 3: %.0lf\n", c3);
	printf("Total de votos do candidato numero 4: %.0lf\n", c4);
	printf("Total de votos nulos: %.0lf\n", c5);
	printf("Total de votos brancos: %.0lf\nf", c6);
	printf("A porcentagem de votos nulos sobre o total de votos e: %.2lf%%\n", c5/total*100);
	printf("a porcentagem de votos em branco sobre o total de votos e: %.2lf%%\n", c6/total*100);
	
	
   return 0;
}
