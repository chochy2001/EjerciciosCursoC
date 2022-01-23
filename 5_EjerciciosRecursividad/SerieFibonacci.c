//* Serie Fibonacci con Recursividad

//* 1.1.2.3.5.8...


#include <stdio.h>

int fibonacci(int numero);

int main(){

    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; ++i) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

/*
    fibonacci(1) = 1
    fibonacci(2) = 1
    fibonacci(3) = 2
    fibonacci(4) = 3
    fibonacci(5) = 5
    fibonacci(6) = 8
    fibonacci(7) = 13
    fibonacci(8) = 21
    fibonacci(9) = 34
    fibonacci(10) = 55

    fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)

 */

int fibonacci(int numero){
    if(numero == 1 || numero == 2) {
        return 1;
    }else{
        return (fibonacci(numero-1) + fibonacci(numero-2));
    }
}
