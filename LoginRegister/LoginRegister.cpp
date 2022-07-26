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
    
    void setIdNumber(string idnumber) {
        IdNumber = idnumber;
    }
    void setName(string name) {
        Name = name;
    }
    void setPassword(string password) {
        Password = password;
    }
    void setBirthDay(string day) {
        std::stringstream s;
        int intday;
        s << day;
        s >> intday;
        BirthDay = intday;
    }
    void setBirthMonth(string month) {
        std::stringstream s;
        int intmonth;
        s << month;
        s >> intmonth;
        BirthMonth = intmonth;
    }
    void setBirthYear(string year) {
        std::stringstream s;
        int intyear;
        s << year;
        s >> intyear;
        BirthYear = intyear;
    }
    void setAge(string year) {
        std::stringstream s;
        int intyear;
        s << year;
        s >> intyear;
        Age = intyear;
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
    void setYearStanding(string year) {
        std::stringstream s;
        int intyear;
        s << year;
        s >> intyear;
        
        YearStanding = intyear;
    }
    void status() {
        cout << "Name: " << Name << "\nAge: " << Age << "\nId Number: " << IdNumber << "\nBirthDate " << BirthMonth << "/" << BirthDay << "/" << BirthYear<<"\nStanding: "<<YearStanding<<std::endl;
    }
    
   
    


};
void CreateAnAccount() {
    string IdNumber, Name, Password;
    int BirthDay, BirthMonth, BirthYear, Age, YearStanding;
    writeFile.open("C:/Users/dand1/source/repos/eldanrey/cppprojects/LoginRegister/records.dat",std::ios::out |std::ios::app);
    cin.ignore(1000,'\n');
    cout << "Name: ";
    std::getline(cin,Name) ;
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
    
    writeFile << IdNumber << "\n" << Password << "\n" << Name << "\n" << Age << "\n" << BirthMonth << "\n" << BirthDay << "\n" << BirthYear << "\n" << YearStanding << "\n";
    writeFile.close();
    cout << "DONE";
}



bool compareCredentials(string idnumber, string password) {                              
    readFile.open("C:/Users/dand1/source/repos/eldanrey/cppprojects/LoginRegister/records.dat", std::ios::in);
    string data[8]; 
    /*
        DATA:
        1.) IDNUMBER
        2.) PASSWORD
        3.) NAME
        4.) AGE
        5.) BIRTH MONTH
        6.) BIRTH DAY
        7.) BIRTH YEAR
        8.) YEAR STANDING
    */
    
    bool flag = 0;
    for (int i = 0; i < 8; i++) {
        std::getline(readFile, data[i]);
            if (data[0] == idnumber && data[1] == password) {
                flag = 1;
                break;
            }
    }
    
    readFile.close();
    if (flag) {
        if (tolower(data[0].at(0)) == 's') {
            Student student;
            student.setName(data[2]);
            student.setAge(data[3]);
            student.setIdNumber(data[0]);
            student.setBirthYear(data[6]);
            student.setBirthMonth(data[4]);
            student.setBirthDay(data[5]);
            student.setYearStanding(data[7]);
            system("pause");
            return 1;
        }
    }
    return 0;
}

bool LoginSystem() {
login:
    system("cls");
    string idnumber, password;
    cout << "Id Number: ";
    cin >> idnumber;
    cout << "Password: ";
    cin >> password;
    if (compareCredentials(idnumber,password))return 1;

    else {
        system("cls");
        cout << "\n\n\n\t\tINVALID ID NUMBER OR PASSWORD\n\n\n\n";
        system("pause");
        goto login;
    }
}
void Menu() {
    system("cls");
    Student student;
    cout << student.getAge();
    cout << "\n[1] Check Status";
    cout << "\nYour Choice: ";
    int choice;
    cin >> choice;
    switch (choice) {
    case 1:
        student.status();
        
        break;

    }



}
void Start() {
    system("cls");
    cout << "\n\n\t\tWelcome To My Simple Login Register Application\n\n";
    cout << "\n[1] Create an Account";
    cout << "\n[2] Login";
    cout << "\nYour Choice: ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            CreateAnAccount();
            break;
        case 2:
            if(LoginSystem())Menu();
           
            break;
    }

}
int main()
{   
    Start();
}


