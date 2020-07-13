#include <stdio.h>

void cargarPromedio(float *promedios, int cantAlu)
{
    for (int i = 0; i < cantAlu; i++)
    {
        printf("Ingrese el promedio del alumno con legajo %d: ", i);

        float promedio;
        scanf("%f", &promedio);

        promedios[i] = promedio;
    }
}

int mayorProm(float *promedios, int cantAlu)
{
    int maxLegajo;
    float maxProm;

    for (int i = 0; i < cantAlu; i++)
    {
        if (promedios[i] > maxProm)
        {
            maxLegajo = i;
        }
    }

    return maxLegajo;
}

int main()
{
    int cantAlu;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantAlu);

    float promedios[cantAlu];

    cargarPromedio(promedios, cantAlu);

    int mayProm = mayorProm(promedios, cantAlu);

    printf("El legajo de mayor promedio es: %d", mayProm);

    return 0;
}