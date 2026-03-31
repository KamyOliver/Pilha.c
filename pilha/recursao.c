#include <stdio.h>

int fat(int n) {
    if (n <= 1) { 
        return 1; // O fatorial de 0 ou 1 é 1
    }
    return n * fat(n - 1);
}

int fib (int n){
    if (n<= 1) return 1;
    return fib(n-1) + fib (n-2);
}

int main() {
   /* for (int i = 0; i < 14; i++) {
        printf("Fatorial de %d = %0.f\n", i, fat(i));
    }*/
   for (int i=0; i <= 46; i++){
    printf("Fibonacci em %d = %d\n", i, fib(i));
   }
    return 0;
}