#include <iostream>
#include <conio.h>					
#include <windows.h>
#include <string>

using namespace std;

float x, y;
int wybor, a = 1;



int main()
{
	while (a = 1)
	{
		cout << "Wybierz 1 liczbe: ";
		cin >> x;
		cout << "Wybierz 2 liczbe: ";
		cin >> y;

		cout << " | Kalkulator autorstwa Aleksandra Czecha |" << endl;
		cout << " |        WYBIERZ RODZAJ DZIALANIA        |" << endl;
		cout << " |            1 - Dodawanie               |" << endl;
		cout << " |            2 - Odejmowanie             |" << endl;
		cout << " |            3 - Mnozenie                |" << endl;
		cout << " |            4 - Dzielenie               |" << endl;
		cout << " |             0 - Wyjscie                |" << endl;

		cout << endl;
		wybor = _getch();

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
		_getch();
		system("cls");
		
	}

}

/*
już chuj, że wszystko w mainie, już chuj, że getchar i edit z tym stringiem już nic
ale kurwa ta nieskończona pętla XDDDDDD
co ty miałeś w głowie oluś
*/
