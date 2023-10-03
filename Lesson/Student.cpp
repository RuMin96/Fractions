#include <iostream>
#include "Student.h"
	
using namespace std;
// ���������� ������ ���������� �������� �����
	double Student::getAver()
	{
		double sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum += marks[i];
		}
		return sum / 3;
	}
	const char* Student::getName()
	{
		return name;
	}
	int Student::getMark(int index)
	{
		return marks[index];
	}
	void Student::setName(const char* studentName)
	{
		// ������������ � ��������� �����
		strcpy_s(name, 20, studentName);
	}
	void Student::setMark(int mark, int index)
	{
		// ������������ � ��������� ������
		if (mark < 1 or mark > 12)
		{
			mark = 0;
		}
		marks[index] = mark;
	}