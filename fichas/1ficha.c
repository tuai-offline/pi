#include <stdio.h>

void quadrado (int n){
    printf("Quadrado de dimensões %d:\n", n);
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            putchar ('#');
        }
        printf("\n");
    }
    printf("\n");
}

void xadrez (int n){
    printf ("Xadrez de dimensões %d:\n", n);
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if (j%2 == 0) putchar ('#');
            else putchar ('_');
        }
    printf("\n");
    }
    printf("\n");
}

// ! ChatGPT kinda
void trianguloH (int n){
    printf ("Triangulo horizontal de dimensões %d:\n", n);
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("#");
        }
    printf("\n");
    }
    for(i=n-1; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("#");
        }
    printf("\n");
    }
    printf("\n");
}

// ! Full ChatGPT - I have no idea what is going on, help me
void trianguloV (int n){
    printf ("Triangulo vertical de dimensões %d:\n", n);
    int i, j, k;
    for(i=1; i<=n; i++){
        for(j=n-i; j>=1; j--){
            printf(" ");
        }
        for(k=1; k<=(2*i-1); k++){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}

// TODO Later
int circulo (int raio){
    printf ("Circulo %d ainda não está feito...\n", raio);
    return 0;
}

int main()
{
    quadrado (5);
    xadrez (5);
    trianguloH (5);
    trianguloV (5);
    printf ("\nForam usados %d caracteres para fazer o circulo\n", circulo (5));
    return 0;
}
