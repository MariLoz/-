#include <iostream>
using namespace std;
int main()
{
    int n=0, Fn, Fm, Fk, a;
    cout << "Enter n = ";
    cin >> n;
    Fm = 0;
    Fn = 1;
    for (int i = 2; i <= n; i++)
    {
        a = Fn;
        Fn = Fm + Fn;
        Fm = a;
    }
    cout << Fn << endl;
    
}
