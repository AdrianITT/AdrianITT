#include <iostream>
using namespace std;
/*problema 12 
objetivo encontrar el entero positivo mayor en una lista de quince enteros,*/
//@Autor   AdrianITT
//@fecha   16 septiembre 2021
int main()
{
    int a, m;
    
    for (int i = 0; i < 15; i++)
    {
        cout << i << " Ingrse un numero : "; cin >> a;
    
        if (a >= 0)
        {
            if (i == 0)
            {
                m = a;
            }
            else
            {
                if (a % 2 == 0)
                {
                    if (m > a)
                    {
                        m = m;
                        /*if (a % 2 == 0)
                        {
                            m = a;
                        }*/
                    }
                    else
                    {
                        m = a;
                    }
                }
            }
            
            
        }
    }
    cout << "su numero positivo entero es " << m << endl;
    
}

