#include <iostream>
#include <locale>

int main()
{
	char chLetter('a');

	setlocale(LC_ALL, "Russian");

	std::cout << "������� ����� ������� ��������:\n\n";

	std::cin >> chLetter;

	chLetter = chLetter - 32;

	std::cout << "\n�� �� ����� � ������� ��������: " << chLetter << ".\n\n";

	return 0;
}