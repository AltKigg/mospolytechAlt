//задание 1
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Rus");
	float a,b;
	printf ("¬ведите стороны пр€моугольника a и b: \n");
	scanf ("%f %f", &a, &b);
	printf ("S=%f \nP=%f", a*b, 2*(a+b));
	return 0;
}

//задание 2
#include <stdio.h>
#include <locale.h>
#define pi 3.14

int main ()
{
    setlocale(LC_ALL, "Rus");
	float d;
    printf ("¬ведите диаметр окружности d: \n");
	scanf ("%f", &d);
	printf ("L= %f", pi*d);
	return 0;
}

//задание3
#include <stdio.h>
#include <locale.h>


int main ()
{
    setlocale(LC_ALL, "Rus");
	float a,b;
    printf ("¬ведите два числа a и b: \n");
	scanf ("%f %f", &a, &b);
	printf ("—реднее арифметическое= %f", (a+b)/2);
	return 0;
}

//задание4
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


//задание5
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Rus");
	int a,b, c;
	float ch;
	printf ("¬ведите два ненулевых числа a и b: \n");
	scanf ("%d %d", &a, &b);
	a= abs(a);
	b= abs(b);
	if (a>b)
        {ch=(float)a/(float)b;
        c=a-b;}
    else
        {ch=(float)b/(float)a;
        c=b-a;}
	printf ("сумма= %d \nразность= %d \nпроизведение= %d\nчастное= %f", a+b, c, a*b, ch);
	return 0;
}

