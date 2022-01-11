/* Calcular la cantidad de segundos que estan incluidos en el numero de horas,
minutos y segundos ingresados por el usuario.*/

#include <stdio.h>

int main(){

    int horas,minutos,segundos,tiempoHoras,tiempoMinutos,tiempoSegundos,total;

    printf("Escribe el numero de Horas\n");
    scanf("%d",&horas);

    printf("Escribe el numero de Minutos\n");
    scanf("%d",&minutos);

    printf("Escribe el numero de Segundos\n");
    scanf("%d",&segundos);

    //Convertir horas a minutos, minutos a segundos y sumar los segundos
    tiempoHoras = horas*3600;
    tiempoMinutos = minutos * 60;
    tiempoSegundos = segundos;

    total = tiempoHoras+tiempoMinutos+tiempoSegundos;

    printf("El equivalente en segundo es: %d",total);



    return 0;
}
