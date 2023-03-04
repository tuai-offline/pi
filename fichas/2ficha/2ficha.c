#include <stdio.h>
#include <stdlib.h>

float multInt1 (int n, float m);
float multInt2 (int n, float m);
float multInt3 (int n, float m, int *count);

int mdc1 (int a, int b);
int mdc2 (int a, int b);
int mdc3 (int a, int b, int *count);
int mdc4 (int a, int b, int *count);

int fib (int n);
int fastfib (int n);

int main()
{  int a,b,r1,r2,r3,r4, 
       c1=0, c2=0;
   float f, f1, f2, f3;
    
   printf ("Introduza dois números para input das funções de multiplicação:\n");
   scanf ("%d", &a); scanf ("%f", &f);
   f1 = multInt1 (a,f);
   f2 = multInt2 (a,f);
   f3 = multInt3 (a,f, &c1);
   printf ("Resultados das multiplicações: %f, %f, %f (%d)\n", f1, f2, f3, c1);
   
   printf ("Introduza dois números para input das funções de multiplicação:\n");
   scanf ("%d", &a); scanf ("%d", &b);

   r1 = mdc1 (a,b);
   r2 = mdc2 (a,b);
   r3 = mdc3 (a,b, &c1);
   r4 = mdc4 (a,b, &c2);
   printf ("Resultad1os do mdc: %d, %d, %d (%d), %d (%d)\n", r1, r2, r3, c1, r4, c2);
   
   // printf ("Introduza um número para calcular o fib: ");
   // scanf ("%d", &a);
   // printf ("FastFib (%d) = %d \n", a, fastfib (a));
   // printf ("Fib (%d) = %d \n", a, fib (a));
   
   return 0;
}
