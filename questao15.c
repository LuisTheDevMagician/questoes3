#include<stdio.h>

int main() {
    double sim=0, nao=0, simMulher=0, pctHomem=0;
    int i;
    char sexo, resposta;
    
    for(i=1; i<=10; i++){
    	printf("Informe o sexo do entrevistado numero %d:\nH- homem, M - mulher\n", i);
    	scanf("%c", &sexo);
    	fflush(stdin);
    	printf("Informe a resposta do entrevistado %d:\nS - sim, N - nao\n", i);
    	scanf("%c", &resposta);
    	fflush(stdin);
    	
    	if(resposta=='S') sim++;
    	if(resposta=='N') nao++;
    	if(sexo=='M' && resposta=='S') simMulher++;
    	if(sexo=='H' && resposta=='N') pctHomem++;
    	
	}
	
	printf("O numero de pessoas que responderam sim: %.0lf\n", sim);
	printf("O numero de pessoas que responderam nao: %.0lf\n", nao);
	printf("O numero de mulheres que responderam sim: %.0lf\n", simMulher);
	printf("A percentagem de homens que responderam nao, entre todos os homens analisados: %.0lf%%\n", (pctHomem/nao)*100);
    

return 0;
}
