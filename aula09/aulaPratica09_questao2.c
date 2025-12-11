//Diego Alves Teixeira 25.2.4156

#include <stdlib.h>
#include <stdio.h>

#define TAM_MAX 10
void limpar_buffer(){
  int ch;
  while((ch= getchar()) != '\n' && ch != EOF);

}
int main(){
  int somav=0, somac=0;
  char vp[TAM_MAX],vav[TAM_MAX],vac[TAM_MAX];
      printf("Digite os 10 caracteres: \n");
  for(int i=0;i<TAM_MAX;i++){
      printf("Digite: ");
      scanf("%c",&vp[i]);
      limpar_buffer();
  if(vp[i]=='a' || vp[i]=='e'|| vp[i]=='i'|| vp[i]=='o'|| vp[i]=='u'){
     vav[somav]=vp[i]; 
     somav++;
  }else {
  vac[somac]=vp[i];
  somac++;
  }
   
}
printf("%d vogais: ",somav);
for(int i=0;i<somav;i++){
printf("%c ",vav[i]);
}
printf("\n%d consoantes: ",somac);
for(int i=0;i<somac;i++){
printf("%c ",vac[i]);
}

return 0;
}
