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

// ! Full ChatGP
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
int circulo(int raio){
    int i, j, contador=0;
    for(i=-raio; i<=raio; i++){
        for(j=-raio; j<=raio; j++){
            if(i*i+j*j <= raio*raio){
                printf("#");
                contador++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return contador;
}

int main()
{
    int raio, n;
    quadrado (5);
    xadrez (5);
    trianguloH (5);
    trianguloV (5);
    printf("Insira o raio do circulo: ");
    scanf("%d", &raio);
    n = circulo(raio);
    printf("O circulo contem %d caracteres '#'.\n", n);
    return 0;

}
