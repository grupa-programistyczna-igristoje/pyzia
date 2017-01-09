#include <iostream>
#include <conio.h>					
#include <windows.h>
#include <string>

using namespace std;

float x, y;
int wybor;


int main()
{
	for (;;)              //nieskonczona petla, dopoki wybor = 0 
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
		wybor = _getch();                 //nie wywala juz przy znakach

		switch (wybor)                    //uzylem case, bo widzialem nie raz u kogos i nie umialem jeszcze 
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
			exit(0);
			break;

		default:
			cout << "Wpisales zly numer" << endl;
		}
		_getch();
		system("cls");              //czysci konsole i mozna podawac nowe liczby 
		}
}

/*
już chuj, że wszystko w mainie, już chuj, że getchar i nieprzekonwertowany string do obliczeń
ale kurwa ta nieskończona pętla XDDDDDD
co ty miałeś w głowie oluś
*/
