#include "Lesson.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Lesson::Date::Date(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

void Lesson::Date::printdate() {
	cout << setfill('0') << setw(4) << year << '-' << setw(2) << month << '-' << setw(2) << day << ' ';
}

void Lesson::print(){
	cout << lesson << ' '<< group << endl;
}
