#include <stdio.h>
#include <locale.h>
#define pi 3.14

int main ()
{
    setlocale(LC_ALL, "Rus");
	float d;
    printf ("Введите диаметр окружности d: \n");
	scanf ("%f", &d);
	printf ("L= %f", pi*d);
	return 0;
}

