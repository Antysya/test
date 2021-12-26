#pragma once

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int year, int month, int day);
    Date() { year = 0; month = 0; day = 0; }

    int getYear() { return year; }
    void setYear(int year) { this->year = year; }
        
    void print();
};