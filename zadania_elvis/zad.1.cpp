#include <iostream>
#include <cstdio>

using namespace std; 

int a , b;

void sprawdzanie()
{
	cout << "Podaj pierwsza liczbe do porownania" << endl;
	cin >> a;
	cout << "Podaj druga liczbe do porownania" << endl;
	cin >> b;

	if (a == b)
	{
		cout << "Liczby sa rowne" << endl;
	}
	else
		cout << "Liczby nie sa rowne" << endl;
}

int main()
{
	sprawdzanie();

	getchar(); //używasz starej nazwy, normalna nazwa funkcji (w visualu) to _getch()
		   //brak return
}
