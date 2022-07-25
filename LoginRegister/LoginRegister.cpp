// LoginRegister.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::string;
using std::cout;
using std::cin;

class Student {
    int Age;
    string IdNumber;
    string Name;
    int BirthDay, BirthMonth, BirthYear;

public:
    void status() {
        cout << "Name: " << Name << "\nAge: " << Age << "\nId Number: " << IdNumber << "\nBirthDate " << BirthMonth << "/" << BirthDay << "/" << BirthYear << std::endl;
    }
    Student(string name, string idnumber, int age, int birthmonth, int birthday, int birthyear) {
        Name = name;
        Age = age;
        IdNumber = idnumber;
        BirthDay = birthday;
        BirthMonth = birthmonth;
        BirthYear = birthyear;
    }
};
int main()
{   
    Student student1 = Student("Eldan", "S512938", 21, 10, 30, 2000);
    student1.status();
    std::cout << "Hello World!\n";

}


