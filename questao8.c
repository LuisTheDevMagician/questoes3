#include<stdio.h>


int main(){
    char olho, cabelo;
    double altura, peso, cont1=0, cont2=0, cont3=0, cont4=0, mediaIdade=0;
    int i, idade;
    
    for(i=1; i<=6; i++){
    	printf("Pessoa numero %d\n", i);
    	printf("Informe a idade:\n");
    	scanf("%d", &idade);
    	fflush(stdin);
    	printf("Informe a altura:\n");
    	scanf("%lf", &altura);
    	fflush(stdin);
    	printf("Informe o peso:\n");
    	scanf("%lf", &peso);
    	fflush(stdin);
    	printf("Informe a cor dos olhos: A - azul, P - preto, V - verde e C - castanho\n");
    	scanf("%c", &olho);
    	fflush(stdin);
    	printf("Informe a cor dos cabelos: P - preto, C - castanho, l - louro e R - ruivo\n");
    	scanf("%c", &cabelo);
    	fflush(stdin);
    	
    	if(idade>50 && peso<60) cont1++;
    	if(altura<1.50){
    		cont2++;
    		mediaIdade+=idade;
    		
		}
    	if(olho=='A') cont3++;
    	if(cabelo=='R' && olho!='A') cont4++;
	}
	
	printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg e: %.0lf\n", cont1);
	printf("A media das idades das pessoas com altura inferior a 1,50 m e: %.2lf\n", mediaIdade/cont2);
	printf("A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas e: %.2lf%%\n", (cont3/6)*100);
	printf("A quantidade de pessoas ruivas e que não possuem olhos azuis e: %.0lf\n", cont4);
	
	return 0;
}
