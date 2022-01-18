/* Hacer un programa que muestre un menu con las opciones sumar,
restar, multiplicar y dividir, el programa debe solicitar una opcion y
realizar la tarea elegida, se debe usar un procedimiento */

#include <stdio.h>
void menuCalculadora();
void sumar();
void restar();
void multiplicar();
void dividir();

int main(){
    menuCalculadora();
    return 0;
}

void menuCalculadora(){
    int opcion;
    printf("Bienvenido al menu de calculadora\nElige una opcion\n");

    do{
        printf("1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Salir\n");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                sumar();
                break;
            case 2:
                restar();
                break;
            case 3:
                multiplicar();
                break;
            case 4:
                dividir();
                break;
            case 5:
                printf("Hasta luego\n");
                break;
            default:
                printf("Opcion no valida\n");
        }


    }while(opcion != 5);
}

void sumar(){
    int num1, num2;
    printf("Escribe los numeros\n");
    scanf("%d %d", &num1, &num2);

    printf("El resultado de la suma es: %d\n", num1 + num2);
}

void restar(){
    int num1, num2;
    printf("Escribe los numeros\n");
    scanf("%d %d", &num1, &num2);

    printf("El resultado de la resta es: %d\n", num1 - num2);
}


void multiplicar(){
    int num1, num2;
    printf("Escribe los numeros\n");
    scanf("%d %d", &num1, &num2);

    printf("El resultado de la multiplicacion es: %d\n", num1 * num2);
}

void dividir(){
    int num1, num2;
    printf("Escribe los numeros\n");
    scanf("%d %d", &num1, &num2);

    printf("El resultado de la division es: %d\n", num1 / num2);
}
