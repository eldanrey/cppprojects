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
#include <sstream>
#include <algorithm>
#include <cmath>
typedef long long ll;

using namespace std;
const char digits[] ={'0', '1', '2', '3', '4','5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int progMenu();

void welcome(){
    cout<<"\n\n\t\tTHIS PROGRAM WILL CONVERT NUMBERS TO DIFFERENT NUMBER SYSTEMS\n\n";
    cout<<"\t\tTHE NUMBER SYSTEMS TO BE CONVERTED: ";
    cout<<"\n\n\t\tDecimal Number System\n\t\tBinary Number System\n\t\tOctal Number System\n\t\tHexadecimal Number System\n\n";
    system("pause");
    system("cls");
}
string decToBin(ll dec){
    string bin="";
    while(dec>0){
        int remainder=0;
        remainder = dec%2;
        bin+=digits[remainder];
        dec/=2;    
    }
    reverse(bin.begin(),bin.end());
    return bin;
}
string decToOct(ll dec){
    string oct="";
    while(dec>0){
        int remainder=0;
        remainder = dec%8;
        oct+=digits[remainder];
        dec/=8;
    }
    reverse(oct.begin(),oct.end());
    return oct;
}
string decToHex(ll dec){
string hex="";
    while(dec>0){
        int remainder=0;
        remainder = dec%16;
        hex+=digits[remainder];
        dec/=16;
    }
    reverse(hex.begin(),hex.end());
    return hex;

}
ll binToDec( string bin){
    ll dec=0;
    reverse(bin.begin(),bin.end());
    for(int i=0;i<bin.size();i++){
        for(int j=0;j<2;j++){
            if(bin[i]==digits[j]){
                dec+=(j*pow(2,i));
            }
        }
    }
    return dec;
}
ll octToDec( string oct){
    ll dec=0;
    reverse(oct.begin(),oct.end());
    for(int i=0;i<oct.size();i++){
        for(int j=0;j<8;j++){
            if(oct[i]==digits[j]){
                dec+=(j*pow(8,i));
            }
        }
    }
    return dec;

}
ll hexToDec( string hex){
    ll dec=0;
    reverse(hex.begin(),hex.end());
    for(int i=0;i<hex.size();i++){
        for(int j=0;j<16;j++){
            if(hex[i]==digits[j]){
                dec+=(j*pow(16,i));
            }
        }
    }
    return dec;

}
int decNumberSystem(){
    menu:
    system("cls");
    ll dec;
    cout<<"\n\t\tDecimal Number System\n\n";
    cout<<"\n\t\tEnter the Decimal Number to convert: ";
    cin>>dec;
    cout<<"\n\t\tDECIMAL -> BINARY: "<<dec<<" -> "<<decToBin(dec);
    cout<<"\n\t\tDECIMAL -> OCTAL: "<<dec<<" -> "<<decToOct(dec);
    cout<<"\n\t\tDECIMAL -> HEXADECIMAL: "<<dec<<" -> "<<decToHex(dec);
    cout<<"\n\n\n\n\n\n";
    system("pause");
    
}
int binNumberSystem(){
       menu:
    string bin;
    cout<<"\n\t\tBinary Number System\n\n";
    cout<<"\n\t\tEnter the Binary Number to convert: ";
    cin>>bin;
    ll dec=binToDec(bin);
    cout<<"\n\t\tBINARY -> DECIMAL: "<<dec<<" -> "<<dec;
    cout<<"\n\t\tBINARY -> OCTAL: "<<dec<<" -> "<<decToOct(dec);
    cout<<"\n\t\tBINARY -> HEXADECIMAL: "<<dec<<" -> "<<decToHex(dec);
    cout<<"\n\n\n\n\n\n";
    system("pause");

}
int octNumberSystem(){
      menu:
    string oct;
    cout<<"\n\t\tBinary Number System\n\n";
    cout<<"\n\t\tEnter the Octal Number to convert: ";
    cin>>oct;
    ll dec=octToDec(oct);
    cout<<"\n\t\tOCTAL -> DECIMAL: "<<oct<<" -> "<<dec;
    cout<<"\n\t\tOCTAL -> BINARY: "<<oct<<" -> "<<decToBin(dec);
    cout<<"\n\t\tOCTAL -> HEXADECIMAL: "<<oct<<" -> "<<decToHex(dec);
    cout<<"\n\n\n\n\n\n";
    system("pause");
}
int hexNumberSystem(){
       menu:
    string hex;
    cout<<"\n\t\tBinary Number System\n\n";
    cout<<"\n\t\tEnter the Hexadecimal Number to convert: ";
    cin>>hex;
    ll dec=hexToDec(hex);
    cout<<"\n\t\tHEXADECIMAL -> DECIMAL: "<<hex<<" -> "<<dec;
    cout<<"\n\t\tHEXADECIMAL -> OCTAL: "<<hex<<" -> "<<decToOct(dec);
    cout<<"\n\t\tHEXADECIMAL -> BINARY: "<<hex<<" -> "<<decToBin(dec);
    cout<<"\n\n\n\n\n\n";
    system("pause");
}
int progMenu(){
    menu:
    system("cls");
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
        case 2: binNumberSystem();goto menu; break;
        case 3: octNumberSystem();goto menu; break;
        case 4: hexNumberSystem();goto menu; break;
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