//Diego Alves Teixeira 25.2.4156

#include <stdio.h>


int main(){
    int matriz[3][3], menor, maior;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Informe um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }


    menor = matriz[0][0];
    maior = matriz[0][0];


    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(menor > matriz[i][j]){
                menor = matriz[i][j];
            }

            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior elemento: %d \n", maior);
    printf("Menor elemento: %d", menor);

    return 0;
}