// Вычислить среднюю оценку студента
#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	cout << "Успеваемость студента."<< endl << endl;

	// определение объекта
	Student Petrov;
	cout << "После вызова конструктора" << endl;
	// присвоение значений объекту
	Petrov.setName("Петров А.И.");
	Petrov.setMark(10, 0);
	Petrov.setMark(10, 1);
	Petrov.setMark(9, 2);
	// выполнение метода объекта
	cout << "Средний балл " << Petrov.getName() << " : " << fixed << setprecision(2) << Petrov.getAver() << endl;
	Student Ivanov("Иванов А.И.");
	cout << "Средний балл " << Ivanov.getName() << " : " << fixed << setprecision(2) << Ivanov.getAver() << endl;
	return 0;
}