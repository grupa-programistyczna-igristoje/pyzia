#include <iostream>
#include <cstdio>

using namespace std;

void glosowanie(int wiek) //jak zrobiłeś tak jak na dole, to tutaj dajesz na przykład (zmienna "wiek" w tej funkcji jest całkowicie inna od zmiennej "wiek" w funkcji main)
{
	//int wiek;

	cout << "Wprowadz swoj wiek: ";
	cin >> wiek;

	if (wiek >= 18)
		cout << "Mozesz glosowac, zapraszamy" << endl;
	else
		cout << "Niestety nie mozesz glosowac, tam jest wyjscie" << endl;
}

int main()
{
	glosowanie();//lepiej by było gdybyś zrobił:
	/*
	int wiek;
	cin >> wiek;
	glosowanie (wiek)
	*/
	getchar();//używasz starej nazwy, normalna nazwa funkcji (w visualu) to _getch()
		   //brak return
}
