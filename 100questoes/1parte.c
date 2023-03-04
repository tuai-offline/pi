#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

// 1 Prints biggest number
void one(){
    int n, max = 0;

    printf("Inserir números:\n");
    do{
        scanf("%d", &n);
        if(n > max) max = n;
    } while(n != 0);

    printf("O número maior é: %d\n", max);
}

// 2 Prints the average of all nubers (not including the 0)
void two(){
    int n, sum = 0, i = 0;
    float media;

    printf("Inserir números:\n");
    do {
        scanf("%d", &n);
        sum = sum + n;
        i++;
    } while(n != 0);
    // i-1 para não contar com o zero
    media = sum / (i - 1);
    printf("A média dos números inseridos é: %f\n", media);
}

// 3  Return the second biggest of the sequence 
void three(){
    int n, sec_max = INT_MIN, max = INT_MIN;

    printf("Inserir números:\n");
    do {
        scanf("%d", &n);
        if (n > max) {
            sec_max = max; max = n;
        }
        else if (n > sec_max) sec_max = n;
    } while (n != 0);
    printf("O segundo maior número é: %d\n", sec_max);
}

// 4 Calculates amount of 1's needed to represent a number in binary
int bitsUm (unsigned int n) {
    int ones = 0;
    
    while (n > 0){
        // if (n % 2 == 1) r++;
        (n%2 == 1) ? ones++ : ones;
        n /= 2;
    }
    return ones;
}

// 5
int trailingZ(unsigned int n) {
    int zeros = 0;

    while (n > 0) {
        // if (n % 2 == 1) r++;
        (n%2 == 0) ? zeros++ : zeros;
        n /= 2;
    }
    return zeros;
}

// 6
int qDig(unsigned int n) {
    int acc = 0;

    while (n > 0) {
        n /= 10; acc++;
    }
    return acc;
}

// TODO 7
char *mystrcat (char s1[], char s2[]) {
    char ns[strlen(s1) + strlen(s2)];
}

int main(){
    int n;

    printf("Escolha uma pergunta: ");
    scanf("%d", &n);

    switch(n){
        case 1: one(); break;
        case 2: two(); break;
        case 3: three(); break;
        case 4: printf("Ones: %d\n", bitsUm(43)); break;
        case 5: printf("Zeros: %d\n", trailingZ(43)); break;
        case 6: printf("Digits: %d\n", qDig(440)); break;
        // case 7: mystrcat(); break;
        default: printf("Número inválido\n"); break;
    }

    return 0;
}