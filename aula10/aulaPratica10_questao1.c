#include <stdio.h>

float calcularMedia(float temp[], int n);
void contarDias(float temp[], int n, float media, int dias[]);

int main() {
    int contadorPrint = 1;
    float temp[30];

    for (int i = 0; i < 30; i++) {
        printf("Informe a temperatura do dia %d: ", contadorPrint);
        contadorPrint++;
        scanf("%f", &temp[i]);
    }

    float media = calcularMedia(temp, 30);

    int dias[2];
    contarDias(temp, 30, media, dias);

    printf("Acima: %d\n", dias[0]);
    printf("Abaixo: %d\n", dias[1]);

    return 0;
}

float calcularMedia(float temp[], int n) {
    float soma = 0.0f;

    for (int j = 0; j < n; j++) {
        soma += temp[j];
    }

    return soma / n;
}

void contarDias(float temp[], int n, float media, int dias[]) {
    int menor = 0, maior = 0;

    for (int i = 0; i < n; i++) {
        if (temp[i] < media) {
            menor++;
        } else if (temp[i] > media) {
            maior++;
        }
        // se quiser contar igual à média em algum lugar, pode tratar aqui
    }

    dias[0] = maior; // acima
    dias[1] = menor; // abaixo
}
