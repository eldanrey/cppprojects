//** Name: Queenielyn L. Cazar **//
//** Numerical: Practical Exam **//

#include <iostream>
#include <iomanip>

using namespace std;

double c0, c1, cn, y0 ,h, k1, k2, k3, k4, equate;

int main(){

again:
	
	cout<<"\n\n\n\t\t\t\t\t THIS PROGRAM WILL SOLVE THE 1ST ORDER DE.";
	cout<<"\n\n\n\t\t\t This program will only solve the equation C0*dy/dx + C1*y = Cn";
	cout<<"\n\t\t\t Please input the values asked below.";
	cout<<"\n\n\n\t\t\t\t\t Enter coefficient C0 beside dy/dx: ";
	cin>> c0;
		if(c0==0){
			cout<<"\n\n\t WARNING!!";		
			cout<<"\n\t You have entered an invalid input!!! Please try again!!!";
			cout<<"\n\t Coefficient C0 must not be equal to ZERO!!\n\n\n";
			cin.clear();
			cin.ignore(1000,'\n');
			system ("pause");
			system("cls");
			goto again;	
		}
		
			cout<<"\t\t\t\t\t Enter coefficient C1 beside y: ";
			cin>> c1;
			cout<<"\t\t\t\t\t Enter coefficient Cn : ";
			cin>> cn;		
				
	if(!cin){
		cout<<"\n\n\t WARNING!!";
		cout<<"\n\t You have entered a letter as a value!!! Please try again!!!";
		cin.clear();
		cin.ignore(1000,'\n');
		system ("pause");
		system("cls");
		goto again;
		cout<<" \n\n\n";
	}
	
	again1:
	cout<<"\n\n\n\t\t\t\t\t Please input the value for y(0): ";
	cin>>y0;
	
	if(!cin){
		cout<<"\n\n\t WARNING!!";
		cout<<"\n\t You have entered a letter as a value!!! Please try again!!!";
		cin.clear();
		cin.ignore(1000,'\n');
		system ("pause");
		system("cls");
		goto again1;
		cout<<" \n\n\n";
	}
	
	cout<<"\t\t\t\t\t Please input value of h: ";
	cin>>h;
	
	if(!cin){
		cout<<"\n\t WARNING!!";
		cout<<"\n\n\t You have entered a letter as a value!!! Please try again!!!\n\n\n";
		cin.clear();
		cin.ignore(1000,'\n');
		system ("pause");
		system("cls");
		goto again1;
		cout<<" \n\n\n";
	}
	
	k1=h*((cn-(c1*y0))/c0);
	k2=h*((cn-(c1*(y0+(k1/2))))/c0);
	k3=h*((cn-(c1*(y0+(k2/2))))/c0);
	k4=h*((cn-(c1*(y0+(k3))))/c0);
	
	cout<<"\n\n\n\t\t Value of k1: "<<k1;
	cout<<"\n\t\t     Value of k2: "<<k2;
	cout<<"\n\t\t     Value of k3: "<<k3;	
	cout<<"\n\t\t     Value of k4: "<<k4;
	
	equate=y0+((1.0/6.0)*(k1+2*k2+2*k3+k4));	
	
	cout<<"\n\n\n\t\t Using Runge-Kutta Method: ";
	cout<<"\n\t\t\t y(x0 + h)  = yo + (1/6)(k1+2k+2k3+k4)";
	cout<< "\n\t\t\t y(0 + " << h << ") = " << y0 << " + (1/6)(" << k1 << " + " << 2*k2 << " + " << 2*k3 << " + " << k4<<")";
	cout<< "\n\t\t\t y(" << h <<")     = "<<fixed<<setprecision(6)<<equate<<" \n\n\n";

	again2:
	
	char choice;	
	
	cout<<"\n\n\n\t Do you want to exit?"<<endl;
	cout<<"\t Types 'Y' for YES and 'N' for NO"<<endl;
	cout<<"\t Your choice: ";
	cin>> choice;
				
		if(choice=='y'||choice=='Y'){
			system("pause");
			system("cls");
			cout<<"\n\n"<< setfill('=') <<setw(121)<< " \n";
			cout<<"\t\t\t\t\t\tTHANK YOU AND GODBLESS\n";
			cout<< setfill('=') <<setw(121)<< " ";
			return 0;	
		}else if(choice=='n'||choice=='N'){
			system("pause");
			system("cls");
			main();
		}else{
			cout<< setfill('=') <<setw(120)<< " \n";
			cout<<"\n\n\t\t\t\t\t\t INVALID INPUT! PLEASE TRY AGAIN!!\n\n"<<endl;
			cout<< setfill('=') <<setw(120)<< " \n";
			goto again2;
		}
}