/*Hacer una estructura llamada corredor, en la cual se tendran los
siguientes miembros: Nombre, edad, sexo, club, pedir datos al usuario
para un corredor, y asignarle una categoria de competicion:
	- Juvenil <= 18 años
	- Señor <= 40 años
	- Veterano > 40 años
posteriormente imprimir todos los datos del corredor, incluida su
categoria de competicion*/

#include <stdio.h>
#include <string.h>

struct corredor{
    char nombre[20];
    int edad;
    char sexo[20];
    char club[20];
    char categoria[20];
}corredor1;

int main(){

    printf("Ingrese el nombre del corredor: ");
    fgets(corredor1.nombre, 20, stdin);
    strtok(corredor1.nombre, "\n");

    printf("Ingrese la edad del corredor: ");
    scanf("%d", &corredor1.edad);
    fflush(stdin);

    printf("Ingrese el sexo del corredor: ");
    fgets(corredor1.sexo, 20, stdin);
    strtok(corredor1.sexo, "\n");

    printf("Ingrese el club del corredor: ");
    fgets(corredor1.club, 20, stdin);
    strtok(corredor1.club, "\n");

    if(corredor1.edad <= 18){
        strcpy(corredor1.categoria, "Juvenil");
    }else if(corredor1.edad <= 40 && corredor1.edad > 18){
        strcpy(corredor1.categoria, "Senior");
    }else{
        strcpy(corredor1.categoria, "Veterano");
    }

    printf("\nNombre: %s\n", corredor1.nombre);
    printf("Edad: %d\n", corredor1.edad);
    printf("Sexo: %s\n", corredor1.sexo);
    printf("Club: %s\n", corredor1.club);
    printf("Categoria: %s\n", corredor1.categoria);

    return 0;
}
