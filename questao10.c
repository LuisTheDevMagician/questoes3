#include<stdio.h>

int main(){
	int num, aux, cont=0, pares=0, primos=0;
	
	for(int i=1; i<=10; i++){
		printf("Insiro o %d numero: \n", i);
		scanf("%d", &num);
		if(num%2==0) pares+=num;
		
		aux=num;
		cont=0;
		while(aux>=1){
			if(num%aux==0){
				cont++;
			}
			aux--;
		}
		if(cont==2) primos+=num;
	}
	
	printf("Tptal da soma dos pares: %d\n", pares);
	printf("Total da soma dos primos: %d", primos);
	
	return 0;
}
