#include <iostream>

using namespace std;

int main()
{
	int n, m, q, * a, sum=0;
	cin >> n >> m >> q;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] <= m)
			sum += a[i];
	}
	if (sum > q)
		cout << "true";
	else
		cout << "false";
}
