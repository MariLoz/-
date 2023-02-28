#include <iostream>

using namespace std;
void Split(float A[], int NA)
{
    int NB, NC, k=0, t=0;
    float *B, *C;
    NB = NC = NA / 2;
    if (NA % 2 == 1)
        NB++;
    B = new float[NB];
    C = new float[NC];
    for (int i = 1; i <= NA; i ++)
    {
        if (i % 2 == 1)
        {
            B[k] = A[i-1];
            k++;
        }
        else
        {
            C[t] = A[i-1];
            t++;
        }
    }
    
    cout << NB << endl;
    for (int i = 0; i < NB; i++)
        cout << B[i] << " ";
    cout << endl << NC << endl;
    for (int i = 0; i < NC; i++)
        cout << C[i] << " ";
    cout << endl;
}
int main()
{
    int NM;
    float *M;
    cin >> NM;
    M = new float[NM];
    for (int i = 0; i < NM; i++)
        cin >> M[i];
    Split(M, NM);
}

