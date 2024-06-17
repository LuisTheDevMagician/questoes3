#include<stdio.h>

int main(){
	int num, aux, cont=0, primos=0;
	
	for(int i=1; i<=10; i++){
		printf("Insiro o %d numero: \n", i);
		scanf("%d", &num);
		
		aux=num;
		cont=0;
		while(aux>=1){
			if(num%aux==0){
				cont++;
			}
			aux--;
		}
		if(cont==2) primos++;
	}
	
	printf("Total de numeros primos e: %d", primos);
	
	return 0;
}
