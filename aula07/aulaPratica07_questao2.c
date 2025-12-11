#include <stdio.h>

int quadrado_por_soma(int n);

int main(void) {
    int n;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = quadrado_por_soma(n);

    printf("O quadrado de %d e %d\n", n, resultado);

    return 0;
}

int quadrado_por_soma(int n) {
    int i;
    int impar = 1;   
    int soma = 0;

    for (i = 0; i < n; i++) {
        soma += impar;
        impar += 2;   
    }

    return soma;
}
