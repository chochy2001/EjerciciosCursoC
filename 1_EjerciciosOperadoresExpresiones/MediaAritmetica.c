/* Calcule la media aritmetica de 3 numeros cualesquiera dados por el usuario*/

#include <stdio.h>

int main(){
    int num1,num2,num3;
    float media_aritmetica;

    printf("\nEscribe 3 numeros\n");
    scanf("%d %d %d",&num1,&num2,&num3);

    media_aritmetica = (num1+num2+num3)/3;
    printf("La media aritmetica es: %.2f",media_aritmetica);

    return 0;
}
