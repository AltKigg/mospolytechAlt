#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Rus");
	float a,b;
	printf ("������� ������� �������������� a � b: \n");
	scanf ("%f %f", &a, &b);
	printf ("S=%f \nP=%f", a*b, 2*(a+b));
	return 0;
}
