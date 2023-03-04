#include <iostream>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	string *str, s;
	cout << "Количество чисел - ";
	cin >> n;
	cout << "Введите числа в двоичной системе счисления" << endl;
	str = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		s="";
		for (int j =0; j<n-1; j++)
		if (str[j] > str[j + 1])
		{
			s = str[j];
			str[j] = str[j + 1];
			str[j + 1] = s;
			
		}
		if (s == "")
		{
			break;
		}
		
	}
	for (int i = 0; i < n; i++)
		cout << str[i] << " ";
}
