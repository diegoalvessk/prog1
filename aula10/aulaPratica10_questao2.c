//Diego Alves Teixeira 25.2.4156

#include <stdio.h>
#include <string.h>

void limpar_buffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main() {
    char p1[31], p2[31], p3[31];
    char resultado[91];

    printf("Digite a 1 palavra: ");
    scanf("%30s", p1);

    printf("\nDigite a 2 palavra: ");
    limpar_buffer();
    scanf("%30s", p2);

    printf("\nDigite a 3 palavra: ");
    limpar_buffer();
    scanf("%30s", p3);

    resultado[0] = '\0';

    strcat(resultado, p1);
    strcat(resultado, p2);
    strcat(resultado, p3);

    printf("\n%s\n", resultado);

    return 0;
}
