#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;


int wybor, a;
float liczba[8];
float wynik[4];

int main()
{
	a = 1;
	while (a == 1)					//kurwa while, niby proste, a skomplikowane xddd
	{
		cout << " | Kalkulator autorstwa Aleksandra Czecha |" << endl;
		cout << " |        WYBIERZ RODZAJ DZIALANIA        |" << endl;
		cout << " |            1 - Dodawanie               |" << endl;
		cout << " |            2 - Odejmowanie             |" << endl;
		cout << " |            3 - Mnozenie                |" << endl;
		cout << " |            4 - Dzielenie               |" << endl;
		cout << " |             0 - Wyjscie                |" << endl;
		cin >> wybor;
		

		if (wybor == 1)
		{
			cout << "Podaj pierwsza liczbe" << endl;
			cin >> liczba[1];
			cout << "Podaj druga liczbe" << endl;
			cin >> liczba[2];

			wynik[1] = (liczba[1] + liczba[2]);
			cout << "Suma to " << wynik[1] << endl;
			_getch();
			system("cls");
		}

		if (wybor == 2)
		{
			cout << "Podaj pierwsza liczbe" << endl;
			cin >> liczba[3];
			cout << "Podaj druga liczbe" << endl;
			cin >> liczba[4];

			wynik[2] = ((liczba[3]) - (liczba[4]));
			cout << "Roznica to " << wynik[2] << endl;
			_getch();
			system("cls");
		}

		if (wybor == 3)
		{
			cout << "Podaj pierwsza liczbe" << endl;
			cin >> liczba[5];
			cout << "Podaj druga liczbe" << endl;
			cin >> liczba[6];

			wynik[3] = ((liczba[5]) * (liczba[6]));
			cout << "Iloczyn to " << wynik[3] << endl;
			_getch();
			system("cls");
		}

		if (wybor == 4)
		{
			cout << "Podaj pierwsza liczbe" << endl;
			cin >> liczba[7];
			cout << "Podaj druga liczbe" << endl;
			cin >> liczba[8];

			wynik[4] = ((liczba[7]) / (liczba[8]));
			cout << "Iloraz to " << wynik[4] << endl;
			_getch();
			system("cls");
		}

		if (wybor == 0)					
		{
			a != 1; //co ty tu odjebales, daj cokolwiek żeby te a nie było równe 1, np. 2, 4, 5, 324421
			return 0;
		}
	}
}
