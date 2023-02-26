#include <iostream>
using namespace std;
int main()
{
    int kol, lenght, *mas, min, max, a, j, k;
    cin >> kol;
    for (int i = 0; i < kol; i++)
    {

        cin >> lenght;//ввод длины массива
        mas = new int[lenght];// создаём динамический массив
        for (int i = 0; i < lenght; i++)//ввод элементов массива
        {
            cin >> mas[i];
        }
        max = lenght;
        min = 1;
        a = 0;
        j = lenght - 1;
        k = 0;
       
            while (a<j)
            {
                if (mas[a] == min)
                {
                    a++;
                    min++;
                }
                else
                    if (mas[a] == max)
                    {
                        a++;
                        max--;
                    }
                    else
                        if (mas[j] == min)
                        {
                            j--;
                            min++;
                        }
                        else
                            if (mas[j] == max)
                            {
                                j--;
                                max--;
                            }
                            else 
                            {
                                cout << a+1 << " " << j+1 << endl;
                                k = 1;
                                break;
                            }
                            
            }        
            
            if (k != 1)
                cout << "-1" << endl;


    }
}