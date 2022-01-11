/* Hacer un menu que considere las siguientes opciones:

caso 1: Cubo de un numero
caso 2: Numero par o impar
caso 3: salir */


#include <stdio.h>
#include <math.h>

int main(){
    int numero,opcion,cubo;
    printf("\tMENU");
    printf("\n1. Cubo de un numero");
    printf("\n2. Numero par o impar");
    printf("\n3. Salir");
    printf("\nOpcion: ");
    scanf("%i",&opcion);

    switch(opcion){
        case 1:
            printf("Seleccionaste cubo de un numero\n");
            printf("Escribe un numero\n");
            scanf("%d",&numero);
            cubo = pow(numero,3);
            printf("\bEl cubo del numero es: %d",cubo);
            break;
        case 2:
            printf("Seleccionaste Par o Impar\n");
            printf("Escribe un numero\n");
            scanf("%d",&numero);
            if(numero % 2 == 0){
                printf("\nEl numero ingresado es par");
            }else{
                printf("\nEl numero ingresado es impar");
            }
            break;
        case 3:
            break;
        default:
            printf("\nOpcion no valida");
    }

    return 0;
}

