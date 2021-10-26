#include<iostream>
using namespace std;
int factorial(int value); 

//5! = 1 * 2 * 3 * 4 * 5
//   = 120
     
void content()
{
	int number;
	cout << "This is an example program.\n";
	cout << "A Programmer defined function within another function...\n";
	cout << "Looping Program\n";
	cout << "Factorial of a Number \n";
	cout << "Enter an integer value : ";
	cin >> number;
	cout << factorial(number);
}



int factorial(int value)
{	
	
	
	if (value==1)
	{cout<<"1 = ";return 1;}
	else if(value>1)cout<<value<<"*";
	return value*factorial(value-1);
}
int main(){
    content();
}