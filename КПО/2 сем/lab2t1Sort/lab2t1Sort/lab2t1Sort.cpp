#include <iostream>
#include <string>

using namespace std;

string sort(int n, string*& str)
{
	string s;
	for (int i = 0; i < n - 1; i++)
	{
		s = "";
		for (int j = 0; j < n - 1; j++)
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
	return *str;
}
/*void sort(int n)
{
	string* str, s;
	cout << "Введите числа в двоичной системе счисления" << endl;
	str = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		s = "";
		for (int j = 0; j < n - 1; j++)
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
}*/


int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Количество чисел - ";
	cin >> n;
	string* str;
	cout << "Введите числа в двоичной системе счисления" << endl;
	str = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	sort(n, str);
}


