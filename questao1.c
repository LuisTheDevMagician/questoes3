#include <stdio.h>

int main() {
    int a, b, c, d;

    for (int i = 1; i <= 5; i++) {
        printf("Grupo %d \n", i);
        printf("Informe o valor de A: \n");
        scanf("%d", &a);
        printf("Informe o valor de B: \n");
        scanf("%d", &b);
        printf("Informe o valor de C: \n");
        scanf("%d", &c);
        printf("Informe o valor de D: \n");
        scanf("%d", &d);

        
        printf("Ordem lida: %d, %d, %d, %d \n", a, b, c, d);

       
        if (a < b) { a = a + b; b = a - b; a = a - b; }
        if (a < c) { a = a + c; c = a - c; a = a - c; }
        if (a < d) { a = a + d; d = a - d; a = a - d; }
        if (b < c) { b = b + c; c = b - c; b = b - c; }
        if (b < d) { b = b + d; d = b - d; b = b - d; }
        if (c < d) { c = c + d; d = c - d; c = c - d; }

       
        printf("Ordem decrescente: %d, %d, %d, %d \n", a, b, c, d);

       
        printf("Ordem crescente: %d, %d, %d, %d \n", d, c, b, a);
    }

    return 0;
}
