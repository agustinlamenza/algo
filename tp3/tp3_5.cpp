
#include <stdio.h>

int calcularCuadrado(int numero)
{
    int c = 0;
    int cantImpares = 0;
    int cuadrado = 0;

    while (cantImpares < numero)
    {
        bool esImpar = (c % 2) != 0;

        if (esImpar)
        {
            cuadrado = cuadrado + c;
            cantImpares = cantImpares + 1;
        }

        c = c + 1;
    }

    return cuadrado;
}

int main()
{
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    int cuadrado = calcularCuadrado(numero);
    printf("El cuadrado de %d es %d", numero, cuadrado);

    return 0;
}
