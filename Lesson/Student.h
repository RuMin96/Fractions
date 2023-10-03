#pragma once
class Student
{
private:
	// ���
	char* name;
	int markCount;
	int* marks;
public:
	// ���������� �������� �����
	double getAver();
	Student()
	{
			std::cout << "��������� ����������� Student"<< std::endl;
	}
	Student(const char* studentName,const int studentMarkCount,const int* studentMarks);
	Student(const char* studentName)
	{
		std::cout << "��������������� ����������� Student" << std::endl;
		setName(studentName);
	}

// ������ � ���� name
const char* getName();
void setName(const char* studentName);
// ������ � ��������� ������� marks
int getMark(int index);
void setMark(int mark, int index);
};