#include <iostream>
using namespace std;
/*problema 13
objetivo encontrar el segundo entero positivo mayor en una lista de quince enteros,*/
//@Autor   AdrianITT
//@fecha   16 septiembre 2021
int main()
{
#include <iostream>
    
        int a, m, segu;

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
                            
                            //segu = m;
                            if (m < a)
                            {
                                segu = m;
                            }
                            m = a;
                            
                        }
                    }
                }


            }
        }
        cout << "primer numero entero:  " << m << endl;
        cout << "segundo numero entero:  " << segu << endl;
}

