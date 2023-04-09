#include <iostream>

using namespace std;

int main()
{
    int couples[2][25000], sum=0, sum2=0, a=0, j;
    bool b;
    for (int i = 1; i <= 50000; i++)
    {
        b = true;
        sum = 0;
        sum2 = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum += j;
        }
        
        for (j = 1; j < sum; j++)
        {
            if (sum % j == 0)
                sum2 += j;
        }
        if (sum2 == i && i < sum)
        {
           couples[0][a] = i;
           couples[1][a] = sum;
           cout << couples[0][a] << " " << couples[1][a] << endl;
           a++;       
        }
        
       
    }

   
}
