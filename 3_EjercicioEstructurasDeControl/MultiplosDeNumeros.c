// * Escribir los multiplos de 1 hasta 100 de 2,3,5 y 7

#include <stdio.h>

int main(){
    int numero,i=1,multiplos;

    printf("Escribe el numero para ver sus multiplos\n");
    scanf("%d",&numero);
    printf("Escribe hasta que numero quieres que se vean los multiplos\n");
    scanf("%d",&multiplos);


    /*
     while(i<=100){
        if(i%numero==0){
            printf("%d\n",i);
        }
        i++;
    }
     */

    for (int j = 1; j <= multiplos; ++j) {
        if(j%numero==0){
            printf("%d\n",j);
        }
    }

    return 0;
}
