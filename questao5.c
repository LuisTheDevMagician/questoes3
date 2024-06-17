#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int num=0;
	int i, j;
	
		
	for(i=1; i<=10; i++){
		printf("Tabuada do numero: %d \n", i);
		for(j=0; j<=10; j++){
			printf("%d X %d = %d \n", i,j,(i*j));
			
		}

	}
	
	
	return 0;
}
