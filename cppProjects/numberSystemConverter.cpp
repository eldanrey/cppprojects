/*
name: 
Subject/Code: 
Date/Time: 12/10/21|10:31

Problem Statement:

Create a menu-driven program that will illustrate how to convert number systems.

Number Systems involve are the following:

Decimal Number System
Binary Number System
Octal Number System
Hexadecimal Number System
Requirements:
Create your own design. 
The output, variable names, and coding must be unique.
The program shall only terminate when option EXIT is chosen.
Record a video discussing the content of your code.
Compile and show every option in your program.
The following structure must be evident in your program.
conditional structure
looping structure
programmer defined function (both void and return type)
array



*/

#include <iostream>
typedef long long ll;

using namespace std;
int progMenu();

void welcome(){
    cout<<"\n\n\t\tTHIS PROGRAM WILL CONVERT NUMBERS TO DIFFERENT NUMBER SYSTEMS\n\n";
    cout<<"\t\tTHE NUMBER SYSTEMS TO BE CONVERTED: ";
    cout<<"\n\n\t\tDecimal Number System\n\t\tBinary Number System\n\t\tOctal Number System\n\t\tHexadecimal Number System\n\n";
    system("pause");
    system("cls");
}
string decToBin(){

}
int decNumberSystem(){
    menu:
    cout<<"\n\t\tDecimal Number System\n\n";
    cout<<"\n\t\t[1]Decimal -> Binary";
    cout<<"\n\t\t[2]Decimal -> Octal";
    cout<<"\n\t\t[3]Decimal -> Hexadecimal";
    cout<<"\n\t\t[4]Decimal -> Back to Menu";
     switch(choice) {
        case 1: 
            decNumberSystem();
            break;
        case 2: binNumberSystem(); break;
        case 3: octNumberSystem(); break;
        case 4: progMenu(); break;
        default: 
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"\n\n\t\tINVALID INPUT\n\n";
            system("pause");
            system("cls");
            goto menu;
            break;
    }
    
}
int binNumberSystem(){
       menu:
    cout<<"\n\t\tBinary Number System\n\n";
    cout<<"\n\t\t[1]Binary -> Decimal";
    cout<<"\n\t\t[2]Binary -> Octal";
    cout<<"\n\t\t[3]Binary -> Hexadecimal";
    cout<<"\n\t\t[4]Binary -> Back to Menu";
     switch(choice) {
        case 1: 
            decNumberSystem();
            break;
        case 2: binNumberSystem(); break;
        case 3: octNumberSystem(); break;
        case 4: progMenu(); break;
        default: 
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"\n\n\t\tINVALID INPUT\n\n";
            system("pause");
            system("cls");
            goto menu;
            break;
    }
}
int octNumberSystem(){
       menu:
    cout<<"\n\t\tOctal Number System\n\n";
    cout<<"\n\t\t[1]Octal -> Binary";
    cout<<"\n\t\t[2]Octal -> Decimal";
    cout<<"\n\t\t[3]Octal -> Hexadecimal";
    cout<<"\n\t\t[4]Octal -> Back to Menu";
     switch(choice) {
        case 1: 
            decNumberSystem();
            break;
        case 2: binNumberSystem(); break;
        case 3: octNumberSystem(); break;
        case 4: progMenu(); break;
        default: 
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"\n\n\t\tINVALID INPUT\n\n";
            system("pause");
            system("cls");
            goto menu;
            break;
    }
}
int hexNumberSystem(){
       menu:
    cout<<"\n\t\tHexadeecimal Number System\n\n";
    cout<<"\n\t\t[1]Hexadecimal -> Binary";
    cout<<"\n\t\t[2]Hexadecimal -> Octal";
    cout<<"\n\t\t[3]Hexadecimal -> Decimal";
    cout<<"\n\t\t[4]Hexadecimal -> Back to Menu";
     switch(choice) {
        case 1: 
            decNumberSystem();
            break;
        case 2: binNumberSystem(); break;
        case 3: octNumberSystem(); break;
        case 4: progMenu(); break;
        default: 
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"\n\n\t\tINVALID INPUT\n\n";
            system("pause");
            system("cls");
            goto menu;
            break;
    }
}
int progMenu(){
    menu:
    cout<<"\n\n\t\tCHOOSE A NUMBER SYSTEM: \n\n";
    cout<<"\t\t[1]Decimal Number System\n\t\t[2]Binary Number System\n\t\t[3]Octal Number System\n\t\t[4]Hexadecimal Number System\n\t\t[5]EXIT\n\n\n";
    cout<<"Your choice: ";
    int choice;
    cin>>choice;
    system("cls");
    switch(choice) {
        case 1: 
            decNumberSystem();
            break;
        case 2: binNumberSystem(); break;
        case 3: octNumberSystem(); break;
        case 4: hexNumberSystem(); break;
        case 5: return 0; break;
        default: 
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"\n\n\t\tINVALID INPUT\n\n";
            system("pause");
            system("cls");
            goto menu;
            break;
    }

}

int main(){
    welcome();
    progMenu();
    return 0;
}