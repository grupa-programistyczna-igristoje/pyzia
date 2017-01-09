#include <iostream>
#include <cstdio>

using namespace std; 

int liczba;

void sprawdzanie()
{
	cout << "Podaj liczbe do sprawdzenia" << endl;
	cin >> liczba;

	if ( liczba >= 0)
	{
		cout << "Liczba jest dodatnia" << endl;
	}
	else
		cout << "Liczba nie jest dodatnia" << endl;
}

int main()
{
	sprawdzanie();

	getchar();
}
