//Diego Alves Teixeira 25.2.4156

#include <stdio.h>

int main() {

    int x, y;

    printf("Digite os valores de x e y: ");
    scanf("%d %d", &x, &y);

    while(x%2!=0 || y%2!=0 || x<0 || y<0 || x>y){
        if(x%2!=0 || y%2!=0){        
            printf("Apenas valores pares são aceitos.\n");
            printf("Digite os valores de x e y: ");
            scanf("%d%d", &x, &y);
        }if((x<0) || (y<0)){
            printf("Apenas numeros positivos sao aceitos.\n");
            printf("Digite os valores de x e y: ");
            scanf("%d%d", &x, &y);  
        }else{
            printf("x deve ser menor que y.\n");
            printf("Digite os valores de x e y: ");
            scanf("%d%d", &x, &y);
        }
    }
    
   printf("\n");
    for (int estrelas = x; estrelas <= y; estrelas += 2) {
        int espacos = (y - estrelas) / 2;

        for (int i = 0; i < espacos; i++) printf(" ");
        for (int i = 0; i < estrelas; i++) printf("*");
        printf("\n");
    }

    return 0;  
}




