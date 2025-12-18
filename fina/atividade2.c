#include <stdio.h>

int main(){

    int matriz[55][5];

    for (int i = 0; i <55; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Informe a nota: ");
            scanf("%d", &matriz[i][j]);
        }
    }

   for (int i = 0; i < 55; i++) {               

    for (int pass = 0; pass < 4; pass++) { 

        for (int j = 0; j < 4 - pass; j++) { 

            if (matriz[i][j] < matriz[i][j + 1]) {
                int aux = matriz[i][j];
                matriz[i][j] = matriz[i][j + 1];
                matriz[i][j + 1] = aux;
                }
           }
       }
    }



    int vetorSomaMedias[55];
    int somaAlunos = 0;
    
    for (int i = 0; i <55; i++)
    {
         vetorSomaMedias[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            vetorSomaMedias[i] = vetorSomaMedias[i] + matriz[i][j];
        }
        
        vetorSomaMedias[i] =  vetorSomaMedias[i] / 3;
        if(vetorSomaMedias[i] > 60){
            somaAlunos++;
        }
    }

    printf("O total de alunos acima da média foi de: %d \n", somaAlunos++);
    
    return 0;
}