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
	
	cin >> a1;
	cout << a1 << endl;
	system("pause");  //���: "��� ����������� ......."
	//char t = getchar();
	//if (t == 1)exit(0);//ctrl + A
	if (a1 == "a")exit(0);//a
	//
	//������ ����� ��������������
	//
	return 0;
}