// ��������� ������� ������ ��������
#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	cout << "������������ ��������."<< endl << endl;

	// ����������� �������
	Student Petrov;
	cout << "����� ������ ������������" << endl;
	// ���������� �������� �������
	Petrov.setName("������ �.�.");
	Petrov.setMark(10, 0);
	Petrov.setMark(10, 1);
	Petrov.setMark(9, 2);
	// ���������� ������ �������
	cout << "������� ���� " << Petrov.getName() << " : " << fixed << setprecision(2) << Petrov.getAver() << endl;
	Student Ivanov("������ �.�.");
	cout << "������� ���� " << Ivanov.getName() << " : " << fixed << setprecision(2) << Ivanov.getAver() << endl;
	return 0;
}