#include <stdio.h>

int main() {
    int valor;
    int maior, menor;
    int primeiro_valido = 1;  // Variável para verificar se já recebemos o primeiro valor válido

    while (1) {
        printf("Digite um valor inteiro positivo (0 para encerrar): ");
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Valor negativo nao eh permitido.\n");
            continue;
        }

        if (valor == 0)  break;

        if (primeiro_valido) {
            maior = menor = valor;
            primeiro_valido = 0;
        } else {
            if (valor > maior) maior = valor;
            if (valor < menor) menor = valor;
        }
    }

    if (primeiro_valido) {
        printf("Nenhum valor valido foi inserido.\n");
    } else {
        printf("Maior valor: %d\n", maior);
        printf("Menor valor: %d\n", menor);
    }

    return 0;
}
