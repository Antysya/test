/*Создайте класс Дата (Date), куда входят день, месяц, год. Поля сделайте приватными. 
Создайте публичные гет-, сет- методы и перегруженные конструкторы: без аргументов, с аргументами. 
Создайте функцию «распечатать дату».
Проверьте, что класс работает. Создайте и распечатайте дату.*/

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