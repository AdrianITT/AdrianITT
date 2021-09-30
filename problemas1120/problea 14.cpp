#include <iostream>
#include<math.h>
using namespace std;

/*problema 14. determinar cual cantidad es mayor 3^75 o 2^100*/
//@Autor   AdrianITT
//@fecha   16 septiembre 2021

int main()
{
    int x, y,r;
    x = pow(3, 75);
    y = pow(2, 100);
    if (x>y)
    {
        cout << "el valor 3^75 es mayor y igual a : " << x << endl;
    }
    else
    {
        cout << "el valor 2^100 es mayor y igual a : " << y << endl;
    }
    return 0;
}

