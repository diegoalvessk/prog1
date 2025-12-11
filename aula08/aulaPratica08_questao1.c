#include <stdio.h>

int main() {
    float valor;
    float soma = 0.0f;
    int n = 0, numero = 1;

    while (numero != 0) {
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if (valor == 0.0f) {
            numero = 0;
            break;
        }

        soma = soma + valor;
        n++;
    }

    if (n == 0) {
        printf("Não foi possível calcular MA!\n");
    } else {
        float MA = soma / n;
        printf("MA = %.2f\n", MA);
    }

    return 0;
}
