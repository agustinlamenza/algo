#include <stdio.h>

int horas(int dias)
{
    int hs;
    hs = dias * 24;

    return hs;
}

int minutos(int dias)
{
    int min;
    min = dias * 24 * 60;

    return min;
}

int segundos(int dias)
{
    int seg;
    seg = dias * 24 * 60 * 60;

    return seg;
}

int main()
{
    int x;

    do
    {
        printf("Ingresar una cantidad de dias (el numero debe ser mayor a 99): ");
        scanf("%d", &x);
    } while (x < 100);

    int hs = horas(x);
    printf("La cantidad de horas son %d", hs);

    int min = minutos(x);
    printf("\nLa cantidad de minutos son %d", min);

    int seg = segundos(x);
    printf("\nLa cantidad de segundos son %d", seg);

    return 0;
}
