#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Rus");
	float a,b,ch, c;
	printf ("¬ведите два ненулевых числа a и b: \n");
	scanf ("%f %f", &a, &b);
	if (a>b)
        {ch=a/b;
        c=a*a-b*b;}
    else
        {ch=b/a;
        c=b*b-a*a;}
	printf ("сумма= %f \nразность= %f \nпроизведение= %f\nчастное= %f", a*a+b*b, c, a*b*a*b, ch*ch);
	return 0;
}

