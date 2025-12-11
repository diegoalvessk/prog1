#include <stdio.h>

int main(void) {
    float nota1, nota2, media;

    while (1) {
        printf("Digite as notas do aluno: ");
        if (scanf("%f %f", &nota1, &nota2) != 2) {
            return 0;
        }

        if (nota1 < 0 || nota2 < 0) {
            break;
        }

        media = (nota1 + nota2) / 2.0f;

        printf("A media das notas e %.1f\n", media);
    }

    return 0;
}
