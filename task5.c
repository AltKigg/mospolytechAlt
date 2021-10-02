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

