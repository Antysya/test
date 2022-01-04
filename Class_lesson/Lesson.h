#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Lesson {
public:
    class Date {
        int year;
        int month;
        int day;
    public:
        Date(int year, int month, int day);
        void printdate();
    };
    string lesson; 
    string group; 

public:
    void printdate();
    void print();
       
};

