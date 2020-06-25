#include <stdio.h>

void calMayMen(int &may, int &men)
{
    if (may < men)
    {
        int aux;

        aux = may;
        may = men;
        men = aux;
    }
}

void areaCuadrado(int may, int &area)
{
    area = may * may;
}

void areaCirculo(int men, float &area)
{
    area = men * men * 3.141592;
}

int main()
{
    int mayor;
    int menor;

    printf("Ingrese el primer numero: ");
    scanf("%d", &mayor);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &menor);

    calMayMen(mayor, menor);

    int areaCua;
    areaCuadrado(mayor, areaCua);
    printf("La superficie del cuadrado es %d", areaCua);

    float areaCir;
    areaCirculo(menor, areaCir);
    printf("\nLa superficie del circulo es %.2f", areaCir);

    return 0;
}