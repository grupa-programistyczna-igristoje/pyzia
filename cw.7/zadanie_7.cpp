#include <iostream>		//przecietniacy niewiedza			
#include <windows.h>	//do sleepa (tak wiem, ze pojdzie tylko w winie)
#include <cstdlib>		//zwiazane z losowaniem
#include <time.h>		//do pobrania czasu syst. (losowosc)

using namespace std;		//a chu,j czemu nie

int liczba;

int main(){
	cout << "Autorski program do wybirania szesciu liczb typem chybil trafil" << endl;
	Sleep(2000);			//jakies urozmaicenia, ze niby znawca cpp	

	srand(time(NULL));

	liczba = rand() % 100 + 1;		//chcialem uzyc for dla czytelnosci kodu, no ale pokazywalo mi 5 razy to samo :|
	cout << liczba << endl;

	liczba = rand() % 100 + 1;
	cout << liczba << endl;

	liczba = rand() % 100 + 1;
	cout << liczba << endl;

	liczba = rand() % 100 + 1;
	cout << liczba << endl;

	liczba = rand() % 100 + 1;
	cout << liczba << endl;
		
	liczba = rand() % 100 + 1;
	cout << liczba << endl;			//edit: liczba za malo byla


	return 0;
}
