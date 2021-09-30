#include <iostream>
using namespace std;
/*problema 18 . encontrar la suma de 35 enteros*/

//@Autor   AdrianITT
//@fecha   16 septiembre 2021

int main()
{
    int sum = 0;
    for (int i = 1; i <= 35; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            
            cout << sum << endl;
        }

    }
    cout << "su suma de enteros es: " << sum << endl;
    return 0;
}

