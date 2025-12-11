//Diego Alves Teixeira 25.2.4156

#include<stdio.h>

int main(){
  int i=0;
  float vetorcasa[15];
  float soma=0;
  double media=0;
  float maior=vetorcasa[0];
  float menor=0;
  
  while(i<15){
    printf("Digite o consumo da %d residência: ", i+1);
    scanf("%f",&vetorcasa[i]);
    soma+=vetorcasa[i];
    if(vetorcasa[i]>=maior)
      maior=vetorcasa[i];   
    i++; 
  }
  menor=vetorcasa[0];
  for(i=1;i<15;i++){
    if(vetorcasa[i]<menor)
      menor=vetorcasa[i];
  }
  
    
  media=soma/15;
  printf("Consumo médio: %.2f Kwh\n", media); 
  printf("Maior consumo: %.2f Kwh\n", maior);
  printf("Menor consumo: %.2f Kwh", menor); 
  }




