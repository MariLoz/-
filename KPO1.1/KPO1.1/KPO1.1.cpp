#include <iostream>
using namespace std;
int main()
{
    int kol, lenght, ** mas, *otv, k;
    cin >> kol;
    
    for (int i = 0; i < kol; i++)
    {

        cin >> lenght;//ввод длины массивов+1(количество строк)
        otv = new int[lenght];
        mas = new int* [lenght];
        for (int i1 = 0; i1 < lenght; i1++)
            mas[i1] = new int[lenght - 1];
        for (int i1 = 0; i1 < lenght; i1++) //ввод массива
            for (int i2 = 0; i2 < lenght - 1; i2++)
                cin >> mas[i1][i2];
        k = -1;
        for (int i1 = 1; i < lenght; i1++)
        {
            if (mas[i1][lenght - 2] != mas[i1 + 1][lenght - 2])
            {
                if (mas[i1][lenght - 2] != mas[i1 + 2][lenght - 2])
                {
                    otv = mas[i1];
                    k = i1;
                }
                else
                {
                    otv = mas[i1 + 1];
                    k = i1 + 1;
                }
            }
            
        }
        if (k == -1)
        {
            otv = mas[lenght - 1];
            k = lenght - 1;
        }
        if (k != 0)
            otv[lenght - 1] = mas[0][lenght - 2];
        else
            otv[lenght - 1] = mas[1][lenght - 2];
        for (int i1 = 0; i1 < lenght; i1++)
            cout << otv[i1] << " ";
        cout << endl;

    }

}