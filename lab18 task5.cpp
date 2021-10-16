#include <iostream>
#include <conio.h>

int main ()
{
    int n, t, i, k=1;
    float s=0;
    std::cout << "Insert size of massive: ";
    std::cin >> n;
    int a[n];
    std::cout << "Insert massive: ";
    for (i=1;i<n+1;i++)
        std::cin >> a[i];

    for (i=2;i<n+1;i++)
        if (a[k]>a[i])
            {
                t=a[i];
                a[i]=a[k];
                a[k]=t;
                k=i;
            }
    for (i=1;i<n+1;i++)
        std::cout << a[i];
    return 0;
}

