#include <iostream>
using namespace std;
/*problema 20 . Encontrar la suma de todos los enteros del 2 al 2000*/

//@Autor   AdrianITT
//@fecha   16 septiembre 2021
int main()
{
    int sum = 0;
    for (int i = 2; i <= 2000; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }

    }
    cout << "su suma de enteos es: " << sum << endl;
    return 0;
}
