#include <iostream>
using namespace std;
int main()
{
    int n=0, Fn, Fm, Fk, a;
    
    while (n>-556)
    {
        cout << "Enter n=";
        cin >> n;
        if (n < 0)
        {
            Fm = 1;
            Fn = 0;
            for (int i = -1; i >= n; i--)
            {
                a = Fn;
                Fn = Fm - Fn;
                Fm = a;
            }

        }
        else
        {
            Fm = 0;
            Fn = 1;
            for (int i = 2; i <= n; i++)
            {
                a = Fn;
                Fn = Fm + Fn;
                Fm = a;
            }
        }
        cout << Fn << endl;
    }
}
