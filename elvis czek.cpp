
#include <iostream>
#include <string>

std::string imie;

int main()
{
	std::cout << "Jak masz na imie?" << std::endl;
	std::cin >> imie;

	if (imie == "X")
	{
		std::cout << "Gdy na dachu parkuje renifer\nkiedy cieplo mruczy kaloryfer\ngdy choinka zdobi najwazniejszy w domu kat\nja Ci zycze zdrowych i Wesolych Swiat!" << std::endl;
	}
	else if (imie == "Y")
	{
		std::cout << "Bardzo duzo prezentow\nmalo w zyciu zakretow\nduzo babelkow w szampanie\nkogos kto zrobi sniadanie\na na kazdym kroku szczescia w Nowym Roku!" << std::endl;
	}
	else if (imie == "Z")
	{
		std::cout << "Gdy pierwsza gwiazdka na niebie zablysnie\nniech aniolek Cie mocno ode mnie uscisnie\ni zlozy serdeczne zyczenia z okazji Swiat Bozego Narodzenia!" << std::endl;
	
	}
	std::cin.ignore(2); //lepsze od system pause
	return 0;
}
