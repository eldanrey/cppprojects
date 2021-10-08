/*
name: 
Subject/Code: 
Date/Time: 07/10/21|13:40

Create a working CPP program. Do the following Algorithm:
1.Ask user to input username and password.
2.Display error message if entered username and/or password is incorrect and/or Welcome message if login successfully. 
3.Prompt user to input dimension of a matrix (row by column)
4.Prompt user to input elements of a matrix based on the dimension given (row by column)
5.The program will identify the smallest element and largest element.
6.The program will compute and display the average of all elements. 
7.Display your full name, Subject code and Account ID before program terminates.

Requirements:
1. Make use of the following structures
?Any Conditional structure
?Any Looping structure
?Programmer-Defined Function 
?Array

Username: ebenitez
Password: 201710866
*/

#include <iostream>
#include <climits>

using namespace std;
string getInput(const string& prompt){
	string input;
    cout<<prompt;
    cin>>input;
    return input;
}
bool login(){
    bool isCorrectUsername=false,isCorrectPassword=false;
    string username="ebenitez";
    string password="201710866"; 
string inputUsername,inputPassword;
inputUsername=getInput("\n\n\t\tENTER THE USERNAME: ");
inputPassword=getInput("\n\n\t\tENTER THE PASSWORD: ");
for(int i=0;i<inputUsername.length();i++){
    if(username[i]==inputUsername[i]){
        isCorrectUsername=true;
    }
    else{isCorrectUsername=false;break;}
}
for(int i=0;i<inputPassword.length();i++){
    if(password[i]==inputPassword[i]){
        isCorrectPassword=true;
    }
    else{isCorrectPassword=false;break;}
}
if(isCorrectPassword&&isCorrectUsername)return true;
else return false;

}
void welcome(){
    cout<<"\n\n\t\tWELCOME TO THE PROGRAM\n\n";
    cout<<"\n\n\t\tTHIS PROGRAM WILL SHOW MATRIX AND GET THE SMALLEST AND LARGEST NUMBER\n\n\n\n";
}
int getsize(const string& prompt){
    cout<<prompt;
    int size;
    cin>>size;
    return size;
}
void matrix(){
    int sum=0;
    int minElement=INT_MAX;
    int maxElement=INT_MIN;
    int row=getsize("\n\n\t\t ENTER THE ROW OF THE MATRIX: ");
    int column=getsize("\n\n\t\t ENTER THE COLUMN OF THE MATRIX: ");
    int matrixArray[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"\n\n\t\tENTER AN ELEMENT TO BE ADDED TO THE MATRIX: ";
            int temp;
            cin>>temp;
			matrixArray[i][j]=temp;
            sum+=temp;
            if(temp<=minElement)minElement=temp;
            if(temp>=maxElement)maxElement=temp;
        }
    }
    cout<<"THE MATRIX YOU INPUTTED: \n\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"\t"<<matrixArray[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n\nTHE SMALLEST NUMBER OF THE ELEMENTS IS: "<<minElement<<"\n\n";
    cout<<"\n\nTHE LARGEST NUMBER OF THE ELEMENTS IS: "<<maxElement<<"\n\n";
    cout<<"\n\nTHE AVERAGE OF ALL ELEMENTS IS: "<<sum/(row*column)<<"\n\n";
}
void exit(){
    cout<<"\n\nNAME: ";
    cout<<"\n\nSUBJECT/CODE: ";
    cout<<"\n\nID: ";
    cout<<"\n\n\n";
    system("pause");
}
int main(){
    while(1){
        bool isLoggedin=login();
        if(isLoggedin)break;
        else{
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"\n\n\t\tINVALID PASSWORD AND USERNAME\n\n";
            system("pause");
            system("cls");
        }
    }
    welcome();
    matrix();
    exit();
    



}