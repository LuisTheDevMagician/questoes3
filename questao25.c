#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    double valor, juros, montante;
    int cliente, meses, tipoInvestimento;
    
    while(true){
        printf("Informe o codigo do cliente:\nSe o codigo for menor ou igual a zero, o programa sera finalizado\n");
        scanf("%d", &cliente);
        
        if(cliente <= 0) break;
        
        printf("Informe as seguintes informacoes na ordem descrita\nO tipo de investimento:\n1 - Poupanca, 2 - Poupanca Plus, 3 - Fundos de renda Fixa\nO valor investido\nA quantidade de meses que ficara rendendo\n");
        scanf("%d %lf %d", &tipoInvestimento, &valor, &meses);

        switch(tipoInvestimento) {
            case 1:
                montante = valor * pow((1.015), meses);
                break;
            case 2:
                montante = valor * pow((1.02), meses);
                break;
            case 3:
                montante = valor * pow((1.04), meses);
                break;
            default:
                printf("Tipo de investimento invalido.\n");
                continue;
        }
        
        juros = montante - valor;
        
        printf("O valor inicial investido foi: %.2lf\n", valor);
        printf("O montante final e: %.2lf\n", montante);
        printf("O total de juros pagos foi: %.2lf\n", juros);
    }

    return 0;
}
