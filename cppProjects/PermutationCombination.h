
#include <iostream>
using namespace std;


int factorial(int value)
{	
	if (value==1)return 1;
	return value*factorial(value-1);
}

int getInput(const string& prompt){
    int input;
    cout<<prompt;
    cin>>input;
    return input;
}
int getPermutation(int n, int r){
    return factorial(n) / factorial(n-r);
}
int getCombination(int n, int r){
    return factorial(n) / (factorial(r)*factorial(n-r));
}
void permutation(){
    int n=getInput("\n\t\tENTER THE VALUE FOR N: ");
    askr:
    int r=getInput("\n\t\tENTER THE VALUE FOR R: ");
    if (r>n){
        cout<<"\n\t\tINVALID INPUT 'r' MUST NOT BE GREATER THAN 'n'\n\n";
        cin.clear();
        cin.ignore(1000,'\n');
        goto askr;
    }
    int answer = getPermutation(n,r);
    cout<<"\n\t\tTHE PERMUTAION is: "<<answer<<" \n\n";

}
void combination(){
    int n=getInput("\n\t\tENTER THE VALUE FOR N: ");
    askr:
    int r=getInput("\n\t\tENTER THE VALUE FOR R: ");
    if (r>n){
        cout<<"\n\t\tINVALID INPUT 'r' MUST NOT BE GREATER THAN 'n'\n\n";
        cin.clear();
        cin.ignore(1000,'\n');
        goto askr;
    }
    int answer = getCombination(n,r);
    cout<<"\n\t\tTHE COMBINATION is: "<<answer<<" \n\n";
}
void exitProgram(){
    system("pause");
    system("cls");
    cout<<"\n\n\t\tNAME: ";
    cout<<"\n\t\tSUBJECT CODE: ";
    cout<<"\n\t\tACCOUNT NUMBER: ";
}


