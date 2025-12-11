//Diego Alves Teixeira 25.2.4156

#include <stdio.h>

int main() {
    char nome[61];

    printf("Digite o nome completo: ");
    fgets(nome, 61, stdin);

    int i = 0;
    while(nome[i] != '\0'){
        if (nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
        i++;
    }

    int tam_sobrenome = -1, j;
    for(j = i; nome[j] != ' '; j--){
        tam_sobrenome++;
    }


    int qtd_espacos = 0;
    for(int k = j + 1; k < i; k++){
        printf("%c", nome[k]);
    }
    printf(", ");

    for(int k = 0; k <= j; k++){
        if(nome[k] == ' ') qtd_espacos++;
        printf("%c", nome[k]);
    }


    printf("\nTotal de letras: %d\nTotal de letras do último sobrenome: %d\n", i - qtd_espacos, tam_sobrenome);
    
    return 0;
}
