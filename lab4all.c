//������� 1
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

//������� 2
#include <stdio.h>
#include <locale.h>
#define pi 3.14

int main ()
{
    setlocale(LC_ALL, "Rus");
	float d;
    printf ("������� ������� ���������� d: \n");
	scanf ("%f", &d);
	printf ("L= %f", pi*d);
	return 0;
}

//�������3
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

//�������4
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Rus");
	float a,b,ch, c;
	printf ("������� ��� ��������� ����� a � b: \n");
	scanf ("%f %f", &a, &b);
	if (a>b)
        {ch=a/b;
        c=a*a-b*b;}
    else
        {ch=b/a;
        c=b*b-a*a;}
	printf ("�����= %f \n��������= %f \n������������= %f\n�������= %f", a*a+b*b, c, a*b*a*b, ch*ch);
	return 0;
}


//�������5
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Rus");
	int a,b, c;
	float ch;
	printf ("������� ��� ��������� ����� a � b: \n");
	scanf ("%d %d", &a, &b);
	a= abs(a);
	b= abs(b);
	if (a>b)
        {ch=(float)a/(float)b;
        c=a-b;}
    else
        {ch=(float)b/(float)a;
        c=b-a;}
	printf ("�����= %d \n��������= %d \n������������= %d\n�������= %f", a+b, c, a*b, ch);
	return 0;
}

