/*
Name: 
Subject/Code: 
Date/Time: 08/10/21|15:36

f(x)= x^3 - (4x^2) + 10x - 4
*/



#include <iostream>
#include <cmath>
using namespace std;
double getIntput(const string& prompt) {
    ask:
    cout<<prompt;
    double input;
    cin>>input;
    if(!cin){
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"\n\n\t\tINVALID INPUT\n\n";
        system("pause");
        system("cls");
        goto ask;
    }
    else return input;

}
double getAnswer(const double x){
    return ( (double) (pow(x,3)) - (4*(pow(x,2))) + (10*x) -4  );
}
int main(){
    double initial, max, interval;

    initial=getIntput("\n\n\t\tENTER THE INITIAL VALUE OF X: ");
    max=getIntput("\n\n\t\tENTER THE MAX VALUE OF X: ");
    interval=getIntput("\n\n\t\tENTER THE INTERVAL COUNT: ");
    while(initial<=max){
        double answer= getAnswer(initial);
        cout<<initial<<"\t\t"<<answer<<"\n";
        initial+=interval;
    }


}