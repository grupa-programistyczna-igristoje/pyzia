#include <iostream>
#include <conio.h>					
#include <windows.h>

using namespace std;

float x, y;
int wybor, a = 1;


void menu()
{
	cout << " | Kalkulator autorstwa Aleksandra Czecha |" << endl;
	cout << " |        WYBIERZ RODZAJ DZIALANIA        |" << endl;
	cout << " |            1 - Dodawanie               |" << endl;
	cout << " |            2 - Odejmowanie             |" << endl;
	cout << " |            3 - Mnozenie                |" << endl;
	cout << " |            4 - Dzielenie               |" << endl;
	cout << " |             0 - Wyjscie                |" << endl;
}


void wybory()
{
	switch (wybor)
	{
	case '1':
		cout << "Wynik to: " << x + y << endl;
		break;

	case '2':
		cout << "Wynik to: " << x - y << endl;
		break;

	case '3':
		cout << "Wynik to: " << x * y << endl;
		break;

	case '4':
		cout << "Wynik to: " << x / y << endl;
		break;

	case '0':
		a = 2;
		break;

	default:
		cout << "Wpisales zly numer" << endl;
	}
}


int main()
{
	while (a = 1)
	{
		cout << "Wybierz 1 liczbe: ";
		cin >> x;
		cout << "Wybierz 2 liczbe: ";
		cin >> y;

		menu();

		cout << endl;
		wybor = _getch();

		wybory();

		_getch();
		system("cls");
	}
	//brak return dla funkcji, która zwraca wartość
}

