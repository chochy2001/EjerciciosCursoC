/* Una tienda ofrece un descuento del 15% sobre el total de la compra y
un cliente desea saber cuanto debera pagar finalmente por su compra.*/

#include <stdio.h>

int main(){
    float precioInicial,descuento,precioFinal;
    printf("Escribe el precio del producto\n");
    scanf("%f",&precioInicial);

    descuento = precioInicial * 0.15;
    precioFinal= precioInicial - descuento;
    printf("\nEl precio final es: $%.2f y se descontaron $%.2f",precioFinal,descuento);


        return 0;
}
