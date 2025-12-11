//Diego Alves Teixeira 25.2.4156

#include <stdlib.h>
#include <stdio.h>

int main(){
  int numero = 0, j = 0, k = 0;
  printf("Digite um número: ");
  scanf("%d", &numero);
  int valores[100];
  int valores_menores[100];
  int valores_maiores[100];
  srand(10);
  for(int i = 0; i < 100; i++){
    int random = rand() % 200;
    valores[i] = random;
  }
  for(int i = 0; i < 100; i++){
    if(valores[i] < numero){
      valores_menores[k] = valores[i];
      k++;
    }
    else{
      valores_maiores[j] = valores[i];
      j++;
    }
  }
  printf("\nMaiores:");
  for(int i = 0; i < j; i++){
    printf(" %d", valores_maiores[i]);
  }
  printf("\nMenores:");
  for(int i = 0; i < k; i++){
    printf(" %d", valores_menores[i]);
  }
}

