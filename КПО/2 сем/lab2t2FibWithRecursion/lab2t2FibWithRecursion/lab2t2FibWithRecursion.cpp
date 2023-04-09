#include <iostream>
#include <stdio.h> 
#include <time.h> 

using namespace std;

long long int Fib(int n)
{
    long long int Fn;
    if (n < 3)
        return 1;
    Fn = Fib(n - 1) + Fib(n - 2);
    return Fn;
}

int TimeFib(int n)
{
    float seconds;
    long long int Fn;
    clock_t start = clock();
    Fn = Fib(n);
    cout << Fn << endl;
    clock_t end = clock();
    seconds = ((float)(end - start) / CLOCKS_PER_SEC) * 1000;
    return seconds;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите n = ";
    cin >> n;
    float seconds = TimeFib(n);
    cout << "Время выполнения: " << seconds << " мс";
}

