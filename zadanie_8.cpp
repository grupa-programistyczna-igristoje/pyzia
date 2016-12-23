/*#####################################
gra sam versus komputer
grupa programistyczna "Igristoje"
olo pyzia
sciagniety pomysl od kapiego w razie w
2016 prawie 2017
#####################################*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int liczba, wybor, proba = 0;			 //zmienne + proba = 0 zeby fajnie nam liczylo

int main() {
	cout << "Strzel i ustrzel! Zgadnij liczbe z zakresu od 0 do 100 i wygraj samochod!" << endl;		//slijcie sms o tresci: "wygrywam" na numer 0997
	srand(time(NULL));
	liczba = rand() % 100 + 1;			//generator liczb losowych (niby)
	//cout << liczba << endl;	       linijka testowa jesli ktos potrzezbuje				

	while (wybor != liczba) {			//mozliwosci  

		proba++ ;						//licznik prob

		cout <<"(" << proba << " pr\242ba) " << "Podaj liczbe synek:" << endl;
		cin >> wybor;

		if (wybor == liczba)
			cout << "Brawo! Wygrales samochod!" << endl;			//przecietna nagroda Xd
		if (wybor > liczba)
			cout << "Za duza wybrana liczba" << endl;
		else if (wybor < liczba)
			cout << "Za mala wybrana liczba" << endl;
	}
	return 0;
}

