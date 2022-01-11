/*Visualizar la tarifa de la luz segun el gasto de corriente
electrica.
Para un gasto menor de 1.000Kwxh
la tarifa es 1.2, entre 1.OOO y 1.850Kwxh es 1.0 y mayor
de 1.85OKwxh 0.9.*/

#include <stdio.h>

#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){

    float gasto,tarifaLuz=0;
    printf("Escribe el total del gasto de energia\n");
    scanf("%f",&gasto);

    if(gasto < 1000){
       tarifaLuz = TARIFA1;
    }else if(gasto >= 1000 && gasto <= 1850){
       tarifaLuz = TARIFA2;
    }else if(gasto > 1850){
        tarifaLuz = TARIFA3;
    }

    printf("Dado que tu gasto de luz fue de %.2f, la tarifa es de %.2f",gasto,tarifaLuz);

    return 0;
}