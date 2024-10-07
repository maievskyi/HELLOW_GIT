// HELLOW_GIT.cpp: определяет точку входа для консольного приложения.
//

//#include "stdafx.h"
#include <iostream>
#include <locale.h> /* Для русского языка ...........................*/

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus"); /* Обязательно должно быть первым........ */
	char a1[100];
	std::cout << "Здравствуй весь обновлённый мир!\n";
	std::cout << " 1  Здравствуй весь мир!\n";
	
	std::cout << "9 Вот моя  девятая прога!\n";
	std::cout << "-----------------  9  ----------------\n";
	std::cout << "91 Пошли 1 шаг по девятой ветке!\n";
	std::cout << "92 Пошли 2 шаг по девятой ветке!\n";
	std::cout << "93 Пошли 3 шаг по девятой ветке!\n";
	cin >> a1;
	cout << a1 << endl;
	system("pause");  //выв: "для продолжения ......."
	char t = getchar();
	if (t == 1)exit(0);//ctrl + A
	return 0;
}