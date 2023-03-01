#include <stdio.h>

// 1
void one(){
    int n, max = 0;

    printf("Insirir números:\n");
    do{
        scanf("%d", &n);
        if(n > max) max = n;
    } while(n != 0);

    // ! PERGUNTA: devia dar antes "return max" ou pode ser assim??
    printf("O número maior é: %d\n", max);
}

//2
void two(){
    int n, soma = 0, i = 0, media;

    printf("Inserir números:\n");
    do {
        scanf("%d", &n);
        soma = soma + n;
        i++;
    } while(n != 0);
    media = soma / (i-1);
    printf("A média dos números inseridos é: %d\n", media);
}

int main(){
    int n;

    printf("Escolha uma pergunta: ");
    scanf("%d", &n);

    switch(n){
        case 1: one(); break;
        case 2: two(); break;
    }

    return 0;
}