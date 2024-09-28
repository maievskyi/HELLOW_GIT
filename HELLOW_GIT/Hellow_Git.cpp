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
	std::cout << "2  Здравствуй весь мир!\n";
	std::cout << "3  Здравствуй весь мир!\n";
	std::cout << "4  Здравствуй весь мир!\n";
	std::cout << "5  Здравствуй весь мир!\n";
	std::cout << "6  Здравствуй весь мир!\n";
	std::cout << "7 Вот моя прога!\n";
	std::cout << "8 Вот моя  восьмая прога!\n";
	cin >> a1;
	cout << a1 << endl;
	system("pause");  //выв: "для продолжения ......."
	char t = getchar();
	if (t == 1)exit(0);//ctrl + A
	return 0;
}