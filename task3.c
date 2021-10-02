#include <stdio.h>
#include <locale.h>


int main ()
{
    setlocale(LC_ALL, "Rus");
	float a,b;
    printf ("Введите два числа a и b: \n");
	scanf ("%f %f", &a, &b);
	printf ("Среднее арифметическое= %f", (a+b)/2);
	return 0;
}

