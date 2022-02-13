#include <stdio.h>
#include <math.h>
#define ke 9000000000

int main(){
    long double q1,q2,puntox1,puntox2,puntoy1,puntoy2,distancia,fuerza,fuerzaVector[2];
    int cantidadCargas;
    printf("****Bienvenido a la Ley de Coulomb****");
    printf("\nIngresa la cantidad de cargas");
    scanf("%d",&cantidadCargas);

    long double cargas[cantidadCargas],puntosx[cantidadCargas],puntosy[cantidadCargas];


    for (int i = 0; i < cantidadCargas;++i) {
        printf("Ingresa la carga %d\n",i+1);
        scanf("%Lf",&cargas[i]);
    }
    for (int i = 0; i < cantidadCargas; ++i) {
        printf("Ingresa la posicion en x de la carga %d en metros\n",i+1);
        scanf("%Lf",&puntosx[i]);
        printf("Ingresa la posicion en y de la carga %d en metros\n",i+1);
        scanf("%Lf",&puntosy[i]);
    }
    puntox1= puntosx[0],puntox2=puntosx[1],puntoy1=puntosy[0],puntoy2=puntosy[1],q1=cargas[0],q2=cargas[1];


    distancia = sqrt(pow(puntox2-puntox1,2)+pow(puntoy2-puntoy1,2));

    fuerza = ke*(q1*q2/pow(distancia,2));
    printf("La fuerza entre los dos puntos es %Lf [N]\n",fuerza);

    long double restax = puntox1-puntox2,restay = puntoy1-puntoy2;
    long double restar1menosr2[] = {restax,restay};
    long double modulo = sqrt(pow(restar1menosr2[0],2)+pow(restar1menosr2[1],2));
    long double componentex = restar1menosr2[0]/modulo,componentey = restar1menosr2[1]/modulo;
    fuerzaVector[0] = fuerza*componentex;
    fuerzaVector[1] = fuerza*componentey;


    printf("Distancia = sqrt((%Lf-%Lf)^2+(%Lf-%Lf)^2)\n",puntox2,puntox1,puntoy2,puntoy1);
    printf("La distancia es: %Lf[m]\n",distancia);

    printf("F = ke((q1*q2)/r^2)\n");
    printf("F = 9*10^9((%Lf*%Lf)/(%Lf^2)\n",q1,q2,distancia);
    printf("F = %Lf\n",fuerza);
    printf("F-> = ke((q1*q2)/r^2)r\n");
    printf("F-> = 9*10^9((%Lf*%Lf)/(%Lf^2))*((%Lf-%Lf)i+(%Lf-%Lf)j/%Lf)\n",q1,q2,distancia,puntox1,puntox2,puntoy1,puntoy2,distancia);
    printf("%Lf(%Lf+%Lf)\n",fuerza,componentex,componentey);

    for (int i = 0; i < 2; ++i) {
        printf("La fuerza en el eje %d es %Lf [N]\n",i+1,fuerzaVector[i]);
    }




    return 0;
}
