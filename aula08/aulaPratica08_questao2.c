#include <stdio.h>

long long fat(int n);  // protótipo da função

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    long long resultado = fat(n);

    printf("%d! = %lld\n", n, resultado);

    return 0;
}

long long fat(int n) {
    long long resultado = 1;
    int i;

    for (i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}
