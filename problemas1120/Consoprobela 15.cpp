
#include <iostream>
using namespace std;
/*problema 15. imprimir la tabla de sumar hasta 12 + 12 */

//@Autor   AdrianITT
//@fecha   16 septiembre 2021

int main()
{
    int r;
    for (int i=1;i<=12;i++)
    {
        for (int o=1;o<=12;o++)
        {
            r = i + o;
            cout << i << " + " << o << " = " << r << endl;
        }
    }
}

