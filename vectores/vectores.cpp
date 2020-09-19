#include <stdio.h>

void cargarMatriz(float mtx[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese el elemento columna %d fila %d: ", i, j);
            scanf("%f", &mtx[i][j]);
        }
    }
}

float encontrarMayor(float mtx[4][3])
{
    float mayor = mtx[0][0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mtx[i][j] > mayor)
            {
                mayor = mtx[i][j];
            }
        }
    }

    return mayor;
}

float encontrarMenor(float mtx[4][3])
{
    float menor = mtx[0][0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mtx[i][j] < menor)
            {
                menor = mtx[i][j];
            }
        }
    }

    return menor;
}

void printMatriz(float mtx[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                printf(" %f", mtx[i][j]);
            }
            else
            {
                printf(" %f -", mtx[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    float ma[4][3];
    cargarMatriz(ma);

    float mayor = encontrarMayor(ma);
    printf("El mayor es %f\n", mayor);

    float menor = encontrarMenor(ma);
    printf("El menor es %f\n", menor);

    printMatriz(ma);

    return 0;
}