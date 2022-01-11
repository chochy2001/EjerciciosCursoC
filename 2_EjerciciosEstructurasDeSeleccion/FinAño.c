/* Una distribuidora de motocicletas tiene una promocion de
fin de año que
consiste en lo siguiente.

Las motos marca
Honda tienen un descuento del 5%,
las marcas Yamaha del 8%
y las Suzuki del 10%,
las otras marcas 2%*/

/*if(strcmp(marca,"honda") == 0){
    descuento = precio * 0.05;
    precioFinal = precio - descuento;
    printf("El precio final es: $%.2f",precioFinal);
}else if(strcmp(marca,"yamaha") == 0){
    descuento = precio*0.08;
    precioFinal = precio - descuento;
    printf("El precio final es: $%.2f",precioFinal);
}else if(strcmp(marca,"suzuki") == 0){
    descuento = precio*0.1;
    precioFinal = precio-descuento;
    printf("El precio final es: $%.2f",precioFinal);
}else{
    descuento = precio * 0.02;
    precioFinal = precio - descuento;
    printf("El precio final es: $%.2f",precioFinal);
}
 */


#include <stdio.h>
#include <string.h>

int main(){

    char marca[20];
    int valor=0;
    float precio,descuento,precioFinal;
    printf("Escribe la marca de la moto\n");
    fgets(marca,20,stdin);
    strtok(marca,"\n");
    printf("Escribe el precio de la moto\n");
    scanf("%f",&precio);

    if(strcmp(marca,"Honda")==0){
        valor = 1;
    }else if(strcmp(marca,"Yamaha")==0){
        valor = 2;
    }else if(strcmp(marca,"Suzuki")==0){
        valor = 3;
    }



    switch(valor){
        case 1://Honda
            descuento = precio*0.05;
            precioFinal = precio - descuento;
            printf("El precio final es: $%.2f",precioFinal);
            break;
        case 2://Yamaha
            descuento = precio*0.08;
            precioFinal = precio - descuento;
            printf("El precio final es: $%.2f",precioFinal);
            break;
        case 3://Suzuki
            descuento = precio*0.10;
            precioFinal = precio - descuento;
            printf("El precio final es: $%.2f",precioFinal);
            break;
        case 0://Cualquier Otra
        case 23:
        case 123:
            descuento = precio*0.02;
            precioFinal = precio - descuento;
            printf("El precio final es: $%.2f",precioFinal);
            break;
        default:
            printf("No contamos con esa marca en la tienda\n");
            break;
    }

    return 0;
}
