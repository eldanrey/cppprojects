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


class User {
protected:
    string IdNumber, Name, Password;
    int BirthDay, BirthMonth, BirthYear, Age;

public:
    virtual void status() {
        cout << "Name: " << Name << "\nAge: " << Age << "\nId Number: " << IdNumber << "\nBirthDate " << BirthMonth << "/" << BirthDay << "/" << BirthYear << std::endl;
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
    virtual void CreateAnAccount() {
        writeFile.open("records.dat", std::ios::out);
    }
};
class Student: public User {
    int YearStanding;
public:
    string getYearStanding() {
        std::stringstream ss;
        ss << YearStanding;
        string ystanding;
        ss >> ystanding;
        switch (YearStanding) {
        case 1:  ystanding += "st Year Student"; break;
        case 2:  ystanding += "nd Year Student"; break;
        case 3:  ystanding += "rd Year Student"; break;
        default:  ystanding += "th Year Student"; break;
        }
        return ystanding;
    }
    void status() {
        cout << "Name: " << Name << "\nAge: " << Age << "\nId Number: " << IdNumber << "\nBirthDate " << BirthMonth << "/" << BirthDay << "/" << BirthYear<<"\nStanding: "<<YearStanding<<std::endl;
    }
    
   
    


};
void CreateAnAccount() {
    string IdNumber, Name, Password;
    int BirthDay, BirthMonth, BirthYear, Age, YearStanding;
    writeFile.open("C:/Users/dand1/source/repos/eldanrey/cppprojects/LoginRegister/records.dat",std::ios::out |std::ios::app);
    cout << "Name: ";
    cin >> Name;
    cout << "Password: ";
    cin >> Password;
    cout << "IdNumber: ";
    cin >> IdNumber;
    cout << "Age: ";
    cin >> Age;
    cout << "Birth Month: ";
    cin >> BirthMonth;
    cout << "Birth Day: ";
    cin >> BirthDay;
    cout << "Birth Year: ";
    cin >> BirthYear;
    cout << "Year Standing: ";
    cin >> YearStanding;
    
    writeFile << IdNumber << " " << Password << " " << Name << " " << Age << " " << BirthMonth << " " << BirthDay << " " << BirthYear << " " << YearStanding << " *end\n";
    writeFile.close();
    cout << "DONE";
}



bool compareCredentials(string idnumber, string password) {
    cout << "Here";
    readFile.open("records.dat", std::ios::in);
    string dbidnumber, dbpassword;
    string ss;
    std::stringstream s;
    bool flag = 0;
    while (std::getline(readFile, ss) ) {
        cout << ss;
        s << ss;
        s >> dbidnumber >> dbpassword;
        if (dbidnumber == idnumber && dbpassword == password) {
            flag = 1;
        }
    }
    return (flag) ? 1 : 0;
    readFile.close();
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
    cout << "[1] Create an Account: ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            CreateAnAccount();
            break;
    }

}
int main()
{   
    Menu();
    
    

}


