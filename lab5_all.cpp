//task1
#include <iostream>
#include <conio.h>
#include <tgmath.h>

using namespace std;

int main ()
{
    float x1,y1, x2,y2, l;
    cout<< "dot1 (x1;y1): ";
    cin >> x1 >> y1;
    cout<< "dot2 (x2;y2): ";
    cin >> x2 >> y2;
    l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"L= "<< l;
    return 0;
}

//task2
#include <iostream>
#include <conio.h>
#include <tgmath.h>

using namespace std;

int main ()
{
    float a, b, c, ac, bc;
    cout<< "A: ";
    cin >> a;
    cout<< "B: ";
    cin >> b;
    cout<< "C: ";
    cin >> c;
    ac=abs(a-c);
    bc=abs(b-c);
    cout<<"AC="<< ac <<" BC="<< bc << " AC+BC="<< ac+bc;
    return 0;
}

//task3
#include <iostream>
#include <conio.h>
#include <tgmath.h>

using namespace std;

int main ()
{
    float a, b, c, p;
    cout<< "A: ";
    cin >> a;
    cout<< "B: ";
    cin >> b;
    cout<< "C: ";
    cin >> c;
    if(a<c&&c<b)
    {
        p=abs(a-c)*abs(b-c);
        cout<<"AC*BC="<< p;
    }
    else cout<<"C is not between A and B";
    return 0;
}

//task4
#include <iostream>
#include <conio.h>
#include <tgmath.h>

using namespace std;

int main ()
{
    float x1,y1, x2,y2, p, s;
    cout<< "dot1 (x1;y1): ";
    cin >> x1 >> y1;
    cout<< "dot2 (x2;y2): ";
    cin >> x2 >> y2;
    p=2*(abs(x1-x2)+abs(y1-y2));
    s=abs(x1-x2)*abs(y1-y2);
    cout<<"P="<< p <<"\nS=" <<s;
    return 0;
}
//task5
#include <iostream>
#include <conio.h>
#include <tgmath.h>

using namespace std;

int main ()
{
    float x1,y1, x2,y2, x3,y3, p, s, a, b, c;
    cout<< "dot1 (x1;y1): ";
    cin >> x1 >> y1;
    cout<< "dot2 (x2;y2): ";
    cin >> x2 >> y2;
    cout<< "dot3 (x3;y3): ";
    cin >> x3 >> y3;
    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    p=a+b+c;
    s=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
    cout<<"P="<< p <<"\nS=" <<s;
    return 0;
}
