#include <stdio.h>
#include <string.h>

void contarVogais(char nome[60]){
    int a=0, e=0, i=0, o=0, u =0, vogal;
    
    for (int j = 0; nome[j] != '\0'; j++)
    {
        if(nome[j]=='a' || nome[j]=='A') a++;
        if(nome[j]=='e' || nome[j]=='E') e++;
        if(nome[j]=='i' || nome[j]=='I') i++;
        if(nome[j]=='o' || nome[j]=='O') o++;
        if(nome[j]=='u' || nome[j]=='U') u++;
    }

    vogal = a; 

    if(vogal < e){
        vogal = e;
    }

    if(vogal < i){
        vogal = i;
    }
    
    if(vogal < o){
        vogal = o;
    }
    
    if(vogal < u){
        vogal = u;
    }

    if(vogal == a){
        printf("Vogal que mais se repete é a vogal A.\n");
    }
     if(vogal == e){
        printf("Vogal que mais se repete é a vogal E.\n");
    }
     if(vogal == i){
        printf("Vogal que mais se repete é a vogal I.\n");
    }
     if(vogal == o){
        printf("Vogal que mais se repete é a vogal O.\n");
    }
     if(vogal == u){
        printf("Vogal que mais se repete é a vogal U.\n");
    }
}

int main(){

    char nome[60];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    contarVogais(nome);

    return 0;
}