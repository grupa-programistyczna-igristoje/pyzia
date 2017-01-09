#include <iostream>
#include <cstdio>

using namespace std;

void liczenie()
{
	int rok;

	cout << "Wprowadz rok: ";
	cin >> rok;

	if (rok % 4 == 0) //mówiłem, masz na to wzór, bo takie coś może czasami zawodzić
	{
		if (rok % 100 == 0)
		{
			if (rok % 400 == 0)
				cout << rok << " jest przestepny" << endl;
			else
				cout << rok << " nie jest przestepny" << endl;
		}
		else
			cout << rok << " jest przestepny" << endl;
	}
	else
		cout << rok << " nie jest przestepny" << endl;
}

int main()
{
	liczenie();
	getchar();//używasz starej nazwy, normalna nazwa funkcji (w visualu) to _getch()
		   //brak return
}
