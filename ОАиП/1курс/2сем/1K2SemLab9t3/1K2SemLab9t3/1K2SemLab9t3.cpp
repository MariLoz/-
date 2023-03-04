#include <iostream>

using namespace std;

int Fact(int N)
{
    if (N>1)
    {
        N = N * Fact(N-1);
    }
    return N;
}

int main()
{
    int N;
    cin >> N;
    cout << Fact(N);
}
