#include <iostream>
#include <stdio.h> 
#include <time.h> 
#include <chrono>

using namespace std;

int main()
{
    int n=0, * a, SumNeg=0, SumRest=0, k=0, t=0;
    float seconds;
    
    srand(time(NULL));
    while (n<10000000)
        n = (rand()*10000000) % 50000000;
    cout << n << endl;
    clock_t start = clock();

    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
        if (rand() % 2 == 1)
            a[i] = -1*a[i];
        if (a[i] < 0)
        {
            SumNeg += a[i];
            k++;
        }
        else
        {
            SumRest += a[i];
            t++;
        }
    }
    cout << k << ": " << SumNeg << endl << t<< ": " << SumRest << endl;

    clock_t end = clock();
    seconds = (float)(end - start) / CLOCKS_PER_SEC;

    cout << seconds;
    
}

