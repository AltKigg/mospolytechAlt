#include <stdio.h>
#include <locale.h>


int main ()
{
    setlocale(LC_ALL, "Rus");
	float a,b;
    printf ("������� ��� ����� a � b: \n");
	scanf ("%f %f", &a, &b);
	printf ("������� ��������������= %f", (a+b)/2);
	return 0;
}

