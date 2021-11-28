#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i, j, n, m;

	cout << "enter number of row: ";
	cin >> n;
	cout << "enter number of column: ";
	cin >> m;

	for (int i = 1; i <= n; i++)
	{
		cout << endl;

		for (int j = 1; j <= m; j++)
		{
			cout << i * j << '\t';

		}
	}
	getch();
}