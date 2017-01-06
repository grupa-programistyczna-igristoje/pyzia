#include <iostream>
#include <conio.h>					/*mógłbym zrobić tak jak elvis, że podajesz najpierw liczby
							i byłoby mniej zmiennych, ale jakoś mi się podoba tak C: */
#include <windows.h>
#include <string>

using namespace std;


int wybor, a;
float liczba[8];
float wynik[4];

string pierwsza = "Podaj pierwsza lizcbe";
string druga = "Podaj druga liczbe";


void menu()
{
	cout << " | Kalkulator autorstwa Aleksandra Czecha |" << endl;
	cout << " |        WYBIERZ RODZAJ DZIALANIA        |" << endl;
	cout << " |            1 - Dodawanie               |" << endl;
	cout << " |            2 - Odejmowanie             |" << endl;
	cout << " |            3 - Mnozenie                |" << endl;
	cout << " |            4 - Dzielenie               |" << endl;
	cout << " |             0 - Wyjscie                |" << endl;
	cin >> wybor;
}

void dodawanie()
{
		cout << pierwsza << endl;
		cin >> liczba[1];
		cout << druga << endl;
		cin >> liczba[2];

		wynik[1] = (liczba[1] + liczba[2]);
		cout << "Suma to " << wynik[1] << endl;
		_getch();
		system("cls");
}

void odejmowanie()
{
		cout << pierwsza << endl;
		cin >> liczba[3];
		cout << druga << endl;
		cin >> liczba[4];

		wynik[2] = ((liczba[3]) - (liczba[4]));
		cout << "Roznica to " << wynik[2] << endl;
		_getch();
		system("cls");
}

void mnozenie()
{
		cout << pierwsza << endl;
		cin >> liczba[5];
		cout << druga << endl;
		cin >> liczba[6];

		wynik[3] = ((liczba[5]) * (liczba[6]));
		cout << "Iloczyn to " << wynik[3] << endl;
		_getch();
		system("cls");
}

void dzielenie()
{
		cout << pierwsza << endl;
		cin >> liczba[7];
		cout << druga << endl;
		cin >> liczba[8];

		wynik[4] = ((liczba[7]) / (liczba[8]));
		cout << "Iloraz to " << wynik[4] << endl;
		_getch();
		system("cls");
}

void wyjscie()
{
		a = 2;
}

void blad()
{
	system("cls");
}

int main()		        /*daje funkcje blad, która po wpisaniu każdej innej liczby z mozliwych
	                    wyświetla error i czyści ekran, ale się pierdoli przy literach*/
{
	a = 1;
	while (a == 1)
	{
		menu();

		if (wybor == 1)
			dodawanie();

		else if (wybor == 2)
			odejmowanie();

		else if (wybor == 3)
			mnozenie();

		else if (wybor == 4)
			dzielenie();

		else if (wybor == 0)
			wyjscie();
		else
			blad();
	}

}
