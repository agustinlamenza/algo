#include <stdio.h>
#include "libpropia.h"

int main()
{
    int a, b, c;

    printf("Ingrese el valor de A: ");
    scanf("%d", &a);

    printf("Ingrese el valor de B: ");
    scanf("%d", &b);

    printf("Ingrese el valor de C: ");
    scanf("%d", &c);

    printf("\nEl mayor de los valores ingresados es: %d", mayor(a, b, c));

    int may = mayor(a, b, c);

    printf("\nEl menor de los valores ingresados es: %d", menor(a, b, c));

    int men = menor(a, b, c);

    printf("\nEl promedio de los valores ingresados es: %.2f", promedio(a, b, c));
    printf("\nLa suma del primer y ultimo valor es: %d", suma(a, c));
    printf("\nLa resta del mayor valor ingresado, con el menor valor ingresado es: %d", resta(may, men));
    printf("\nLa division del mayor valor ingresado, en el segundo valor ingresado es: %d", division(may, b));
    printf("\nEl producto de los 3 valores ingresados es: %d", producto(a, b, c));

    return 0;
}