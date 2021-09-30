#include <iostream>
using namespace std;
/*problema 17 . calcular e imprimir la suma se los enteros del 1 al 20*/

//@Autor   AdrianITT
//@fecha   16 septiembre 2021
int main()
{
    int sum=0;
    for (int i=1;i<=20;i++)
    {
        
            sum = sum + i;
        

    }
    cout << "su suma de enteos es: " << sum << endl;
    return 0;
}


