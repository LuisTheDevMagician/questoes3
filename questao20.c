#include<stdio.h>
#include<math.h>

int main() {
    int opcao = 0;
    double nota1, nota2, nota3;
    double peso1, peso2, peso3;

    printf("Escolha uma das opcoes a seguir:\n 1 - Media aritmetica\n 2 - Media ponderada\n 3 - Sair\n");
    scanf("%d", &opcao);

    while(opcao!=3) {

        if(opcao == 1){
            printf("Informe a nota numero 1:\n");
            scanf("%lf", &nota1);
            printf("Informe a nota numero 2:\n");
            scanf("%lf", &nota2);
            printf("A media aritmetica das duas notas e: %.2lf\n", (nota1 + nota2) / 2);
            printf("Escolha uma das opcoes a seguir:\n 1 - Media aritmetica\n 2 - Media ponderada\n 3 - Sair\n");
            scanf("%d", &opcao);   
        }else if (opcao == 2){
            printf("Informe a nota numero 1:\n");
            scanf("%lf", &nota1);
            printf("Informe o peso da nota numero 1:\n");
            scanf("%lf", &peso1);
            printf("Informe a nota numero 2:\n");
            scanf("%lf", &nota2);
            printf("Informe o peso da nota numero 2:\n");
            scanf("%lf", &peso2);
            printf("Informe a nota numero 3:\n");
            scanf("%lf", &nota3);
            printf("Informe o peso da nota numero 3:\n");
            scanf("%lf", &peso3);
            double mediaPonderada = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);
            printf("A media ponderada das duas notas e: %.2lf\n", mediaPonderada);
            printf("Escolha uma das opcoes a seguir:\n 1 - Media aritmetica\n 2 - Media ponderada\n 3 - Sair\n");
            scanf("%d", &opcao);   
        }else if(opcao==3){
        	printf("Voce saiu do programa");
            break;
        }else{
        	printf("Opcao selecionada invalida\n");
        	break;
		}
    }
}
