#include <stdio.h>

int ed = 0, cantfem = 0, cantmasc = 0, cantmen = 0, soc = 1, edad, dep, sexo = 0;

int main()
{
	while (soc != 0)
	{
		printf("\ningrese la edad del socio -> ");
		scanf("%d", &edad);
		printf("deporte que realiza (1=futbol, 2=natacion, 3=jockey) -> ");
		scanf("%d", &dep);
		printf("sexo (1=masculino, 2=femenino) -> ");
		scanf("%d", &sexo);

		if (sexo != 1)
		{
			cantfem = cantfem + 1;
		}
		else
		{
			cantmasc = cantmasc + 1;
		}

		if (edad > 30 and edad < 50)
		{
			if (dep != 1)
			{
			}
			else
			{
				ed = ed + 1;
			}
		}

		if (edad < 16)
		{
			cantmen = cantmen + 1;
		}

		printf("\n\nINGRESE UN NUEVO SOCIO (PARA SALIR PRESIONE 0)\n");
		scanf("%d", &soc);
	}

	printf("\ncantidad de socio de entre 30 y 50 que practican futbol --> %d", ed);
	printf("\ncantidad de socios femeninos --> %d", cantfem);
	printf("\ncantidad de socios masculinos --> %d", cantmasc);
	printf("\ncantidad de socios menores de 16 --> %d", cantmen);

	return 0;
}
