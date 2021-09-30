
#include <iostream>
using namespace std;
/*problema 11. intoducir un conjunto de 25 numeros. Derterminar la cantidad de numeros positivos y negativos del conjunto */

//@Autor   AdrianITT
//@fecha   16 septiembre 2021
int main()
{
    int a[25],n=0,p=0;
    for (int i=0;i<25;i++)
    {
        cout<< i <<" Ingrse un numero entero: "; cin >> a[i];
    }
    for (int i=0;i<25;i++)
    {
        if (a[i]>=0)
        {
            p++;

        }
        else 
        {
            n++;
        }
    }
    cout << "\nCantidad de numeros positivos: " << p<<endl;
    cout << "Cantidad de numeros negativos: " << n << endl;
    
    
}


