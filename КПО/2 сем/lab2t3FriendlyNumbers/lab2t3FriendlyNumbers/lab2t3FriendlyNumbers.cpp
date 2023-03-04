#include <iostream>

using namespace std;

int main()
{
    int couples[2][25000], sum1=0, sum2=0, k=0, a;
    
    for (int i = 0; i < 50000; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % j == 0)
                sum1 += j;
        }
        for (int j = 0; j < sum1; j++)
        {
            if (sum1 % j == 0)
                sum2 += j;
        }
        if (i == sum2)
        {
            a = 0;
            for (int j = 0; j < k; j++)
            {
                if (couples[1][j] == sum1)
                {
                    a = 1;
                    break;
                }
            }
            if (a == 0)
            {
                couples[0][k] = i;
                couples[1][k] = sum1;
                k++;
            }
        }
        cout << couples[0][k] << " - " << couples[1][k] << endl;
    }
    for (int i = 0; i < k; i++)
    {
        cout << couples[0][k] << " - " << couples[1][k] << endl;
    }
    cin >> a;
}
