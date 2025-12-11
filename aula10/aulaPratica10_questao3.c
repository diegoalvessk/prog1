//Diego Alves Teixeira 25.2.4156

#include <stdio.h>

int main() {
    char nome[61];
    int i, len = 0;

    printf("Digite o nome completo: ");
    fgets(nome, 61, stdin);

    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
        len++;
    }

    int totalLetras = 0;
    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ') {
            totalLetras++;
        }
    }

    int ultimoEspaco = -1;
    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == ' ') {
            ultimoEspaco = i;
        }
    }

    if (ultimoEspaco == -1) {
        int letrasUltimo = 0;
        for (i = 0; nome[i] != '\0'; i++) {
            if (nome[i] != ' ') letrasUltimo++;
        }

        printf("\n%s, %s\n", nome, "");
        printf("\nTotal de letras: %d\n", totalLetras);
        printf("\nTotal de letras do último sobrenome: %d\n", letrasUltimo);
        return 0;
    }

    int letrasUltimo = 0;
    for (i = ultimoEspaco + 1; nome[i] != '\0'; i++) {
        if (nome[i] != ' ') {
            letrasUltimo++;
        }
    }

    printf("\n");

    for (i = ultimoEspaco + 1; nome[i] != '\0'; i++) {
        putchar(nome[i]);
    }

    printf(", ");

    for (i = 0; i < ultimoEspaco; i++) {
        putchar(nome[i]);
    }

    printf("\n");
    printf("\nTotal de letras: %d\n", totalLetras);
    printf("\nTotal de letras do último sobrenome: %d\n", letrasUltimo);

    return 0;
}
