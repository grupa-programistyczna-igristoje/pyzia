#include <iostream>
#include <cstdio>

using namespace std;

void sprawdzanie()
{
	int m, n;

	cout << "Podaj liczbe m: ";
	cin >> m;

	if (m > 0)
	{
		cout << "Wynik to: n = 1" << endl;
	}
	else if ( m == 0)
	{
		cout << "Wynik to: n = 0" << endl;
	}
	else if (m < 0)
	{
		cout << "Wynik to: n = -1" << endl;
	}

}

int main()
{
	sprawdzanie();
	getchar();
}
