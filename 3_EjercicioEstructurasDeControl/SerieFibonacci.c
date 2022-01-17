// Serie Fibonacci

// 0 1 1 2 3 5 8 13...

#include <stdio.h>

int main(){

    int numero,x=0,y=1,z=1;

    printf("Escribe el numero de elementos\n");
    scanf("%d", &numero); // 3

    // Casos base
    printf("0, 1");

    for (int i = 1; i < numero; ++i) {
        z = x + y;
        x = y;
        y = z;

        printf(", %d", z);
    }

    return 0;
}
