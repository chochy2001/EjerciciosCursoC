/* Dadas las horas trabajadas de una persona y el valor por hora.
Calcular su salario e imprimirlo */

#include <stdio.h>

int main(){
    int horas,salario_hora,salario_total;

    printf("Digite las horas trabajadas\n");
    scanf("%d",&horas);

    printf("Digite el salario por hora\n");
    scanf("%d",&salario_hora);

    salario_total = horas*salario_hora;

    printf("\nEl salario total es: %d",salario_total);

    return 0;
}
