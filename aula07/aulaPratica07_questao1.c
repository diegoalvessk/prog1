#include <stdio.h>

void mostra_divisores(int n);

int main(void) {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Os divisores de %d são:", n);
    mostra_divisores(n);
    printf("\n");

    return 0;
}

void mostra_divisores(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) { 
            printf(" %d", i);
        }
    }
}
