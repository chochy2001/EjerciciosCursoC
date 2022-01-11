/* Comprobar a traves de un programa si un
alumno aprobo o no
un examen (Aprueba si su nota es mayor a 5.5)*/

#include <stdio.h>

int main(){
    float calificacionExamen;
    printf("Escribe tu calificacion del examen\n");
    scanf("%f",&calificacionExamen);

    if (calificacionExamen >= 5.5){
        printf("Felicidades! pasaste el examen");
    }

    return 0;
}
