/*�������� ����� ���� (Lesson). � ������ ����� ������:
- ���� ���������� ����� (����������� ����� Date)
- ���� ����� (������)
- �������� ������ (������)
�������� �����������. �������� ������� ������������ ����.
���������, ��� ����� ��������. �������� � ������������ 3 �����.*/

#include <iostream>
#include "Lesson.h"
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	Lesson lesson1, lesson2, lesson3;
	Lesson::Date date1(2021, 15, 11);
	Lesson* p;

	p = &lesson1;
	p->lesson = "������ ����";
	p->group = "������ ���123";
	date1.printdate();
	lesson1.print();

	p = &lesson2;
	p->lesson = "������ ����";
	p->group = "������ ���256";
	date1.printdate();
	lesson2.print();

	Lesson::Date date2(2021, 28, 11);
	p = &lesson3;
	p->lesson = "������ ����";
	p->group = "������ ���123";
	date2.printdate();
	lesson3.print();
	

}