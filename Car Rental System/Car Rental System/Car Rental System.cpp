/*
ELdan Rey V. Dofredo
03/08/2022
CAR RENTAL SYSTEM

[X]Login System  
[]Car Selection
[]Customer Invoice


*/

#include <iostream>
#include <ctime>
#include <chrono>
#include <random>
#include <fstream>
#include <sstream> //hmmmmmmmmm interesting

std::ofstream writeFile;
std::ifstream readFile;
//JUST HERE



class Cars {
    std::string CarModel;
    int CarNumber, SeatCapacity, Qty;
    float RentPrice;

public:
    // SHOULD I USE CLASSES THO?
    void showCars() {
        
    }
    void addCars(std::string carmodel, int carnumber, int seatCapacity, float rentPrice) {
        writeFile.open("C:/Users/dand1/source/repos/eldanrey/cppprojects/Car Rental System/cars.dat", std::ios::out | std::ios::app);
        writeFile << carmodel << "$" << carnumber << "$" << seatCapacity << "$" << 1 << "$" << rentPrice << "$\n";
    }
    std::string readCarsFromDatabase() {
        readFile.open("C:/Users/dand1/source/repos/eldanrey/cppprojects/Car Rental System/cars.dat", std::ios::in);
        std::string temp, data[5];
        while (std::getline(readFile, temp, '$')) {
            //read data from car records 
        }
    }

};
Cars cars;

// cars.showCars()????/

int RandomNumber(int lowerBound, int upperBound) {
    // this we set the seed for the random generator to be the seconds counted
    // since january 19, 1970 so every call of the RandomNumber function
    // it will generate a "true random" this is true for every execution of the program also
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 generator(seed);
    
    // here we set the distribution of the random gen if im right
    // we put in the parameter the lower bound and upperbound of the random number generator
    std::uniform_int_distribution<int> dist(lowerBound, upperBound);
    int ran = dist(generator);

    //return the random generator
    return ran;
}
bool CompareToDatabase(const std::string& iuser, const std::string& ipass)
{   
    // opens the users.dat file and read from each line
    // if the inputted username and password is equal or present in the database
    readFile.open("C:/Users/dand1/source/repos/eldanrey/cppprojects/Car Rental System/users.dat", std::ios::in);
    std::string temp, user, pass;
    std::stringstream ss;
    while (std::getline(readFile, temp))
    {
        ss << temp;
        ss >> user >> pass;
        if (iuser == user && ipass == pass)
        {
            return true;
        }
    }
    return false;

}
void Register()
{
    // created a goto event
start:
    //clear the screen for better istitik
    system("cls");
    
    //initialize username, password, and confirm password
    std::string username = " ", password = " ", confirmPassword = " ";

    //prompt the user to enter username
    std::cout << "\n\n\t\tEnter username: ";
    std::cin >> username;

    // prompt user to enter password
    std::cout << "\n\t\tPassword: ";
    std::cin >> password;

    // confirm the password for the user
    std::cout << "\n\t\tConfirm Password: ";
    std::cin >> confirmPassword;

    // if the passwords do not match the function will go to the 'start:' from the top of the function
    // if the password do match it will write the username and password to the database which is the users.dat
    if (password == confirmPassword)
    {
        writeFile.open("C:/Users/dand1/source/repos/eldanrey/cppprojects/Car Rental System/Car Rental System/users.dat", std::ios::in | std::ios::app);
        writeFile << username << " " << password << "\n";
        writeFile.close();
    }
    else
    {
        //prompt an error for the user to know that the password is not equal
        system("cls");
        std::cout << "\n\n\n\t\t\tPASSWORD IS NOT EQUAL \n\n\n";
        system("pause");
        goto start;
    }
    
    /*
       Later Implementation\
        -Check if the username is already taken

   */
}



int Login() {
    //for now just admin admin user and pass
    /*
        Later Implementation:
            Add Database for employees Username and Password
            Add Highest Authorization for admin's Username and Password
                -Able to Edit Employees Data;
            Employees Authorization is only limited to add and rent cars
    */
    again:
    system("cls");
    
    try  {
        std::string user, pass;
        std::cout << "\n\n\n\t\tUsername: ";
        std::cin >> user;
        std::cout << "\t\tPassword: ";
        std::cin >> pass;
        if (CompareToDatabase(user,pass))return 1;
        else throw 420;
    }
    catch (...) {
        system("cls");
        std::cout << "\n\n\t\tERROR420:\n\t\tINVALID USER NAME AND PASSWORD\n\n\n";
        system("pause");
        goto again;
    }
  


}

void AddCars() 
{
    system("cls");
    //SHOULD WE AUTOMATE CAR MODEL AND NUMBER OR JUST LET IT BE FROM INPUT????
    /*OKAY IM GONNA
        TAKE SOME BREAK;
    */
    std::cout << "\n\n\n\t\t";

}

int Menu() {
    start:
    system("cls");
    std::cout << "\n\n\n\t\tWELCOME TO RENTAL CAR COMPANY\n\n";
    std::cout << "\n\n\t\t[1]Rent a car \n\t\t[2]Add a car\n\t\t[3]Return Car\n\t\tYour Choice: ";
    int choice;
    if(std::cin >> choice)
    {
        switch (choice)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:

            break;
        }
    }
    else
    {
        std::cout << "\n\n\t\t\tINVALID INPUT\n\n\n";
        system("pause");
        goto start;
    }
    
    return 1;

}

int Start()
{
start:
    system("cls");
    std::cout << "\n\n\t\t\t[1]Login\n\n\t\t\t[2]Register\n\n\t\t\tYourChoice: ";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1: if(Login())Menu();
        break;
    case 2: Register();
        std::cout << "\n\n\n\t\tREGISTER COMPLETE\n\n\n";
        system("pause");
        goto start;
        break;
    }
    return 1;
}
int main()
{
    Start();
}



