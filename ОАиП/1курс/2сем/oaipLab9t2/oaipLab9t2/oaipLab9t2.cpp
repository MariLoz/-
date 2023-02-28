#include <iostream>
#include <string>
#include <string.h>

using namespace std;
string DecompressStr( string S)
{
    int a=1, b;
    char c, k;
    while (a>0)
    {
        a = S.find('{');
        if (a < 0)
            break;
        k = S[a - 1];
        c = S[a + 1];
        b = c - '0';
        S.erase(a, 3);
        S.insert(a, b - 1, k);
        
    }
    return S;
}

int main()
{
    string S;
    cin >> S;
    
    cout << DecompressStr(S);

}
