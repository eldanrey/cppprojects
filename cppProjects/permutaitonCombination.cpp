/*
A 4th grader is having trouble with Permutation and Combination problem in Mathematics, 
so a friend offered help to create a program they can use. The program contains 3 options, 
1st option is for Permutation, 2nd option is Combination and 3rd is for terminating the system.
For option 1, Permutation, they uses the following formula: nPr = n!/(n-r)! ; where r must 
not be greater than n. It should not proceed if this condition is not met. For 2nd option, 
Combination, they uses the formula : nCr = n!/r!(n-r)! ; where r must not be greater
than n as well. For the 3rd option, the program owner’s information shall be displayed, 
like name, subject code and account number, before the program terminates.
*/

#include <iostream>
#include "PermutationCombination.h"
using namespace std;




int main(){
    main:
    cout<<"\t\tWelcome!, This program will answer Permutation and Combination questions!\n\n";
    cout<<"\n\t\t[1]Permutation\n\t\t[2]Combination\n\t\t[3]Exit\n";
    cout<<"\n\t\tYour choice: ";
    int choice;
    cin>>choice;
    if(choice==1){permutation();system("pause");system("cls");goto main;}
    else if(choice==2){combination();system("pause");system("cls");goto main;}
    else if(choice==3){exitProgram();return 0;}
    else{
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"\n\n\t\tINVALID INPUT\n\n";
        system("pause");
        system("cls");
        goto main;
    }

}