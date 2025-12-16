//Elabore um algoritmo que construa um vetor de 50 elementos, tal que o valor de cada elemento seja o dobro
//do ´ındice de sua posi¸c˜ao no vetor. Imprima o vetor resultante.

#include <stdio.h>

int main(){
    int vetor[50];

    for(int i = 0; i<50; i++){
        vetor[i] = i * 2;
    }

    for(int i = 0; i<50; i++){
        printf("\n valor: %d", vetor[i]);
    }

    return 0;
}