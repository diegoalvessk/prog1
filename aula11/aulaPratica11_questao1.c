// Diego Alves Teixeira 25.2.4156

#include <stdio.h>

#define MAX 10

void lerMatriz(int l, int c, int mat[MAX][MAX]);
void imprimirMatriz(int l, int c, int mat[MAX][MAX]);
void multiplicarMatrizes(int m, int p, int n,
                         int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]);

int main(void) {
    int m, p, q, n;

    printf("Entre com os valores de m, p, q, n: ");
    scanf("%d %d %d %d", &m, &p, &q, &n);

    while (m < 1 || m > MAX || p < 1 || p > MAX || q < 1 || q > MAX || n < 1 || n > MAX || p != q) {
        printf("\nValores inválidos!\n\n");
        printf("Entre com os valores de m, p, q, n: ");
        scanf("%d %d %d %d", &m, &p, &q, &n);
    }

    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    lerMatriz(m, p, A);
    lerMatriz(q, n, B);

    multiplicarMatrizes(m, p, n, A, B, C);

    printf("\n");
    imprimirMatriz(m, n, C);

    return 0;
}

void lerMatriz(int l, int c, int mat[MAX][MAX]) {
    printf("\nEntre com os elementos da matriz: ");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiplicarMatrizes(int m, int p, int n,
                         int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int soma = 0;
            for (int k = 0; k < p; k++) {
                soma += A[i][k] * B[k][j];
            }
            C[i][j] = soma;
        }
    }
}

void imprimirMatriz(int l, int c, int mat[MAX][MAX]) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%4d", mat[i][j]);
        }
        if (i != l - 1) printf("\n\n");
        else printf("\n");
    }
}