//çàäàíèå 1
#include <iostream>
#include <conio.h>

int main ()
{
    int n, k, l, i;
    float s=0;
    std::cout << "Insert size of massive: ";
    std::cin >> n;
    std::cout << "Insert K: ";
    std::cin >> k;
    std::cout << "Insert L: ";
    std::cin >> l;
    int a[n];
    std::cout << "Insert massive: ";
    for (i=1;i<n+1;i++)
        std::cin >> a[i];
    for (i=1;i<n+1;i++)
        if (i>=k&&i<=l)
            s+=a[i];

    std::cout << "Average from "<< k << " to "<< l <<std::endl ;
    s=s/(l-k+1);
    std::cout << s;
    return 0;
}


//çàäàíèå 2
#include <iostream>
#include <conio.h>

int main ()
{
    int n, i, d;
    std::cout << "Insert size of massive: ";
    std::cin >> n;
    int a[n];
    std::cout << "Insert massive: ";
    for (i=0;i<n;i++)
        std::cin >> a[i];
    d=abs(a[1]-a[0]);
    for (i=1;i<n-1;i++)
        if (abs(a[i+1]-a[i])!=d)
            d=0;
    std::cout << "Arithmetic difference is "<<d;
    return 0;
}

//çàäàíèå 3
#include <iostream>
#include <conio.h>
#include <limits.h>

int main ()
{
    int n, i, d=INT_MAX;
    std::cout << "Insert size of massive: ";
    std::cin >> n;
    int a[n];
    std::cout << "Insert massive: ";
    for (i=0;i<n;i++)
    {
        std::cin >> a[i];
        if ((a[i]%2==0)&&(a[i]<d))
            {
                d=a[i];

            }
    }
    if (d!=INT_MAX)
        std::cout << "Min is "<<d;
    else
        std::cout << "no";
    return 0;
}

//çàäàíèå 4
#include <iostream>
#include <conio.h>
#include <limits.h>

int main ()
{
    int n, i, d=INT_MIN;
    std::cout << "Insert size of massive: ";
    std::cin >> n;
    int a[n];
    std::cout << "Insert massive: ";
    for (i=0;i<n;i++)
        std::cin >> a[i];

    for (i=1;i<n-1;i++)
        if ((a[i]>a[i-1])&&(a[i]>a[i+1]))
            d=a[i];
    if (d!=INT_MIN)
        std::cout << "local max is "<<d;
    else std::cout << "no";
    return 0;
}

//çàäàíèå 5
#include <iostream>
#include <conio.h>

int main ()
{
    int n, i, j, n1, n2;
    std::cout << "Insert size of massive: ";
    std::cin >> n;
    int a[n];
    std::cout << "Insert massive: ";
    for (i=1;i<n+1;i++)
        std::cin >> a[i];

    for (i=1;i<n;i++)
        for (j=i+1;j<n+1; j++)
            if (a[i]==a[j])
                {
                    n1=i;
                    n2=j;
                }

    std::cout << "number 1 is "<<n1<< "\nnumber 2 is "<<n2;
    return 0;
}

