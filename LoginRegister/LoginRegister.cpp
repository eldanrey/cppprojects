// LoginRegister.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    What I Need To Do:
        1.) Set up a class for Student's Info
        2.) Read File from .dat to confirm the input idnumber and password


*/

#include <iostream>
#include <fstream>
#include <sstream>


using std::string;
using std::cout;
using std::cin;
std::ifstream readFile;
std::ofstream writeFile;


class Student {
    
    int Age;
    string IdNumber;
    string Name;
    string Password;
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
    string getIdNumber() {
        return IdNumber;
    }
    string getPassword() {
        return Password;
    }
    int getAge() {
        return Age;
    }
    string getName() {
        return Name;
    }
    string getBirthDate() {
            std::stringstream s;
            s << BirthMonth << "/" << BirthDay << "/" << BirthYear;
            string bd = s.str();
        return bd;
    }
};


bool compareCredentials(string idnumber, string password) {
    readFile.open("records.dat", std::ios::in);
    string ss;
    std::stringstream s;

}
bool LoginSystem() {
    string idnumber, password;
    cout << "Id Number: ";
    cin >> idnumber;
    cout << "Password: ";
    cin >> password;
    if (compareCredentials(idnumber,password))return 1;
    else return 0;
}
void Menu() {
    cout << "\t\tWelcome To My Simple Login Register Application\n\n";

}
int main()
{   
    if (LoginSystem())Menu();
    cout << "WHAT";
    
    Student student1 = Student("Eldan", "S512938", 21, 11, 30, 2000);
    cout << student1.getBirthDate();
    student1.status();
    std::cout << "Hello World!\n";

}


