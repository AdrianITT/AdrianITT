#include <iostream>
using namespace std;
/*problema 16. imprimir la tabla de multiplicar hasta 12 x 12 */
//@Autor   AdrianITT
//@fecha   16 septiembre 2021
int main()
{
    int r;
    for (int i = 1; i <= 12; i++)
    {
        for (int o = 1; o <= 12; o++)
        {
            r = i * o;
            cout << i << " X " << o << " = " << r << endl;
            if(o == 12)
            {
                cout << "" << endl;
            }
        }
    }
}


