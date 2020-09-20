#include <stdio.h>

void cargarMatriz(int mtx[100][100][100], int m, int n, int p)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < p; k++)
            {
                printf("Ingrese M: %d, N: %d, P: %d -> ", i, j, k);
                scanf("%d", &mtx[i][j][k]);
            }
        }
    }
}

void llenarVector(int ve[100], int mtx[100][100][100], int m, int n, int p)
{
    for (int i = 0; i < p; i++)
    {
        ve[i] = 0;

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                ve[i] = ve[i] + mtx[k][j][i];
            }
        }
    }
}

int main()
{
    int m, n, p;

    printf("Ingrese la cantidad de M:");
    scanf("%d", &m);

    printf("Ingrese la cantidad de N:");
    scanf("%d", &n);

    printf("Ingrese la cantidad de P:");
    scanf("%d", &p);

    int ma[100][100][100];
    cargarMatriz(ma, m, n, p);

    int ve[100];
    llenarVector(ve, ma, m, n, p);

    return 0;
}