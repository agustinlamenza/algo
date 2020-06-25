#include <stdio.h>

// Garcia Andrea Fernanda - DNI: 36584430 - Comision 1K7
float porfem, pac, edad, sexo, pat, cmasc, cfem, n;

int main()
{
    cmasc = 0;
    cfem = 0;
    pac = 1;
    n = 0;
    while (pac == 1)
    {
        printf("Ingrese la edad del paciente: ");
        scanf("%f", &edad);
        printf("Ingrese el sexo del paciente (1=Masculino, 2=Femenino): ");
        scanf("%f", &sexo);

        printf("Ingrese la patologia (0=Gripe Estacional,1=Gripe A, 2=Neumonia, 3=Bronquitis): ");
        scanf("%f", &pat);
        printf("Quiere seguir ingresando pacientes? (0=no, 1=si)");
        scanf("%f", &pac);

        if ((sexo == 1) && (pat == 1))
        {
            cmasc = cmasc + 1;
        }
        if (sexo == 2)
        {
            cfem = cfem + 1;
        }
        n = n + 1;
    }
    porfem = (cfem * 100) / n;
    printf("\nLa cantidad de personas de sexo masculino que padecen gripe A es: %.0f", cmasc);
    printf("\nEl porcentaje de personas del sexo femenino es de: %.2f", porfem);

    return 0;
}