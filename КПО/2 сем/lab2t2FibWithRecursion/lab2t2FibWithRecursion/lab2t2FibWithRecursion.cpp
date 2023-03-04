#include <iostream>

using namespace std;

int Fib(int n)
{
    int Fn;
    switch (n)
    {
    case 0: 
        Fn = 0;
        break;
    case 1:
        Fn = 1;
        break;
    default:
        Fn = Fib(n - 1) + Fib(n - 2);
        break;
    }
    return Fn;
}

int main()
{
    int n, Fn;
    cin >> n;
    Fn = Fib(n);
    cout << Fn;
}

