// HELLOW_GIT.cpp: ���������� ����� ����� ��� ����������� ����������.
//

//#include "stdafx.h"
#include <iostream>
#include <locale.h> /* ��� �������� ����� ...........................*/

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus"); /* ����������� ������ ���� ������........ */
	char a1[100];
	std::cout << "���������� ���� ���������� ���!\n";
	std::cout << " 1  ���������� ���� ���!\n";
	std::cout << "2  ���������� ���� ���!\n";
	std::cout << "3  ���������� ���� ���!\n";
	std::cout << "4  ���������� ���� ���!\n";
	std::cout << "5  ���������� ���� ���!\n";
	std::cout << "6  ���������� ���� ���!\n";
	std::cout << "7 ��� ��� �����!\n";
	std::cout << "8 ��� ���  ������� �����!\n";
	cin >> a1;
	cout << a1 << endl;
	system("pause");  //���: "��� ����������� ......."
	char t = getchar();
	if (t == 1)exit(0);//ctrl + A
	return 0;
}