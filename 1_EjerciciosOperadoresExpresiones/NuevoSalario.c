/* Calcular el nuevo salario de un obrero
si obtuvo un incremento del 25% sobre su salario anterior.*/

#include <stdio.h>

int main(){
    float salarioInicial,aumento,salarioFinal;
    printf("Escribe el salario inicial\n");
    scanf("%f",&salarioInicial);

    aumento = salarioInicial * 0.25;
    salarioFinal = salarioInicial + aumento;

    printf("\nSu nuevo salario es: $%.2f, se aumento $%.2f\n",salarioFinal,aumento);

    return 0;
}
