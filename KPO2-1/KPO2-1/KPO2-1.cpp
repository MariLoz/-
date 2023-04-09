#include <iostream>
#include <stdio.h> 
#include <time.h> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    float seconds;
    int n = 0;
    long long int Fn, Fm, Fk, a;
    cout << "Введите n = ";
    cin >> n;
    clock_t start = clock();
    Fm = 0;
    Fn = 1;
    for (int i = 2; i <= n; i++)
    {
        a = Fn;
        Fn = Fm + Fn;
        Fm = a;
    }
    cout << Fn << endl;
    clock_t end = clock();
    seconds = ((float)(end - start) / CLOCKS_PER_SEC) * 1000;
    cout << "Время выполнения: " << seconds << " мс";
}
