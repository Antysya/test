/*�������� ����� ���� (Date), ���� ������ ����, �����, ���. ���� �������� ����������. 
�������� ��������� ���-, ���- ������ � ������������� ������������: ��� ����������, � �����������. 
�������� ������� ������������ ����.
���������, ��� ����� ��������. �������� � ������������ ����.*/

#include <iostream>
#include "Date.h"
using namespace std;

int main() {
	Date date;
	date.print();

	Date newyear(2021, 01, 01);
	newyear.print();

	newyear.setYear(2022);
	cout << newyear.getYear() << endl;

	newyear.print();
	
}