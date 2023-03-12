#include <iostream>

using namespace std;

int main()
{
    int couples[2][25000], sum=0, k, a=0, j;
    for (int i = 1; i <= 50000; i++)
    {
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum += j;
        }
        k = sum;
        sum = 0;
        for (j = 1; j < k; j++)
        {
            if (k % j == 0)
                sum += j;
        }
        if (sum == i)
        {
            couples[0][a] = i;
            couples[1][a] = k;
            cout << couples[0][i] << " " << couples[1][i] << endl;
            a++;
        }
        
       
    }

    cin >> a;
}
