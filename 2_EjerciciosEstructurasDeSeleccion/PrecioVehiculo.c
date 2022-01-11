/* Seleccionar un tipo de vehiculo e indicar el peaje a pagar
segun un valor numerico
1 - turismo, peaje = $500.
2 - autobus, peaje = $3000.
3 - motocicleta, peaje = $300.
caso contrario - Vehiculo no autorizado.*/

#include <stdio.h>

int main(){

    int tipoVehiculo,peaje;
    printf("Digite el tipo del vehiculo\n");
    printf("1) Turismo\n2) Autobus\n3) Motocicleta\n");
    scanf("%d",&tipoVehiculo);

    switch (tipoVehiculo) {
        case 1:
            peaje = 500;
            printf("\nSeleccionaste Turismo y el peaje es de: $%d",peaje);
            break;
        case 2:
            peaje = 3000;
            printf("\nSeleccionaste Autobus y el peaje es de: $%d",peaje);
            break;
        case 3:
            peaje = 300;
            printf("\nSeleccionaste Motocicleta y el peaje es de: $%d",peaje);
            break;
    }
    return 0;
}

