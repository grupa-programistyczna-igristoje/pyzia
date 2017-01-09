#include <iostream>
#include <cstdio>

using namespace std; 

int liczba;

void sprawdzanie()
{
	cout << "Podaj liczbe do sprawdzenia" << endl;
	cin >> liczba;

	if ( liczba % 2 == 0)
	{
		cout << "Liczba jest parzysta" << endl;
	}
	else
		cout << "Liczba nie jest parzysta" << endl;
}

int main()
{
	sprawdzanie();

	getchar();//używasz starej nazwy, normalna nazwa funkcji (w visualu) to _getch()
		   //brak return
}
