#include <iostream>
#include <cstdio>

using namespace std;

void glosowanie()
{
	int wiek;

	cout << "Wprowadz swoj wiek: ";
	cin >> wiek;

	if (wiek >= 18)
		cout << "Mozesz glosowac, zapraszamy" << endl;
	else
		cout << "Niestety nie mozesz glosowac, tam jest wyjscie" << endl;
}

int main()
{
	glosowanie();
	getchar();
}
