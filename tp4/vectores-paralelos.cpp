#include <stdio.h>

void cargarVectores(float *PROM, int *LEG, int cantAlu)
{
    for (int i = 0; i < cantAlu; i++)
    {
        int legajo;
        printf("Ingrese el legajo del alumno %d: ", i);
        scanf("%d", &legajo);

        float promedio;
        printf("Ingrese el promedio del alumno %d: ", i);
        scanf("%d", &promedio);
    }
}

void ordenaVectores(float *PROM, int *LEG, int cantAlu)
{
}

int main()
{
    int cantAlu;
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantAlu);

    float PROM[cantAlu];
    int LEG[cantAlu];

    cargarVectores(PROM, LEG, cantAlu);
    ordenaVectores(PROM, LEG, cantAlu);

    return 0;
}
