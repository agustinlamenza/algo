#include <stdio.h>

float calcularPorcentaje(int cantTotal, int cantPares)
{
    float porcentaje = (cantPares * 100) / cantTotal;

    return porcentaje;
}

float calcularPromedio(int cantImpares, int sumaImpares)
{
    float promedio = sumaImpares / cantImpares;

    return promedio;
}

int main()
{
    int valor;
    int cantTotal = 0;
    int cantPares = 0;
    int cantImpares = 0;
    int sumaImpares = 0;

    printf("Ingrese un valor entero, 0 para terminar: ");
    scanf("%d", &valor);

    while (valor != 0)
    {
        cantTotal = cantTotal + 1;

        // Calcular si es par
        bool esPar = (valor % 2) == 0;

        if (esPar)
        {
            cantPares = cantPares + 1;
        }
        else
        {
            cantImpares = cantImpares + 1;
            sumaImpares = sumaImpares + valor;
        }

        printf("Ingrese un valor entero, 0 para terminar: ");
        scanf("%d", &valor);
    }

    float porcentaje = calcularPorcentaje(cantTotal, cantPares);
    printf("El porcentaje de numeros pares es %.2f", porcentaje);

    float promedio = calcularPromedio(cantImpares, sumaImpares);
    printf("\nEl promedio de impares es %.2f", promedio);

    return 0;
}