#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int num=0;
	int i;
	
	printf("Informe o numero desejado \n");
	scanf("%d", &num);
		
	for(i=0; i<=10; i++){
		printf("%d X %d = %d \n", num, i, (num*i));

	}
	
	
	return 0;
}
