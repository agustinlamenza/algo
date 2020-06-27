#include <stdio.h>

int mayor(int a1, int b1, int c1)
{
	int g1;
	if (a1 > b1 and a1 > c1)
		return a1;
	if (b1 > a1 and b1 > c1)
		return b1;

	return c1;
}

int menor(int a1, int b1, int c1)
{
	int m1;
	if (a1 < b1 and a1 < c1)
		return a1;
	if (b1 < a1 and b1 < c1)
		return b1;

	return c1;
}

float promedio(int a1, int b1, int c1)
{
	float q1;
	q1 = (float)(a1 + b1 + c1) / 3;
	return q1;
}

int producto(int a1, int b1, int c1)
{
	int p1;
	p1 = a1 * b1 * c1;
	return p1;
}

int division(int a1, int b1)
{
	int d1;
	if (b1 == 0)
	{
		printf("No se puede dividir entre cero");
		return b1;
	}
	else
	{
		d1 = a1 / b1;
		return d1;
	}
}

int suma(int a1, int b1)
{
	int s1;
	s1 = a1 + b1;
	return s1;
}

int resta(int a1, int b1)
{
	int r1;
	r1 = a1 - b1;
	return r1;
}
