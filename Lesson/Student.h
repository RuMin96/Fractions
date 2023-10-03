#pragma once
class Student
{
private:
	// ФИО
	char* name;
	int markCount;
	int* marks;
public:
	// вычисление среднего балла
	double getAver();
	Student()
	{
			std::cout << "Дефолтный Конструктор Student"<< std::endl;
	}
	Student(const char* studentName,const int studentMarkCount,const int* studentMarks);
	Student(const char* studentName)
	{
		std::cout << "Параметрический Конструктор Student" << std::endl;
		setName(studentName);
	}

// доступ к полю name
const char* getName();
void setName(const char* studentName);
// доступ к элементам массива marks
int getMark(int index);
void setMark(int mark, int index);
};