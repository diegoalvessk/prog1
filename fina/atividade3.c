#include <stdio.h>


int buscaValor(int matriz[30][30], int linhas, int colunas, int valor, int *posLinha, int *posColuna){
    for (int i = 0; i < 30; i++)
    {
        for(int j = 0; j<30; j++){
            if(matriz[i][j] == valor){
                *posLinha = i;
                *posColuna = j;
                return 1;
            }
        }
    }

    return 0;
    
}


int main(){

    int matriz[30][30], x;

    for (int i = 0; i <30 ; i++)
    {
        for(int j = 0; j<30; j++){
            printf("Informe um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Informe o valor de x: ");
    scanf("%d", &x);

    int posColuna = 0, posLinha = 0;
    int resultado = buscaValor(matriz, 30, 30, x, &posLinha, &posColuna);

    if(resultado == 1){
        printf("Linha: %d \n", posLinha);
        printf("Coluna: %d \n", posColuna);
    }else if(resultado == 0){
        printf("Posição não encontrada. \n");
    }

    return 0;
}