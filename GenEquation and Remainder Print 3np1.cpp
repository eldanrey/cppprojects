#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct {
    ll d;
    ll p;
}rem;
ll getNthNumber(ll natNum, int degree){
    ll result=natNum;
    for(int i=1;i<degree;i++){
        if(result%2==0)result/=2;
        else result = (3*result)+1;
    }
    return result;
}

rem getRemainder(ll natNum, int degree){
    rem remainder;
    ll numOfPatterns = pow(2, (degree-1));
    int a = (getNthNumber(natNum,degree))-(getNthNumber((natNum-numOfPatterns),degree));
    remainder.d = a;
    remainder.p = getNthNumber(natNum%numOfPatterns,degree);
    return remainder;
}
ll genEquation(ll natNum, int degree){
    rem remainder;
    remainder = getRemainder(natNum,degree);
    int numOfPatterns = pow(2,(degree-1));
    ll result = (floor(natNum/numOfPatterns)*(remainder.d))+remainder.p;
    return result;
}




int main(){
	 again:
	system("cls");
 rem remainder;   
cout<<"[1] Predict using GenEquation\n[2]Print all Remainders (d and p)\nChoice: ";
int choice;
cin>>choice;
system("cls");
int degree=1;
ll natNum=0,predict;
switch(choice){
	case 1: 	
		cout<<"Enter Natural Number: ";
		cin>>natNum;
		cout<<"\nEnter Degree: ";
		cin>>degree;
		 predict = genEquation(natNum,degree);
		cout<<"\nPredicted Number: "<<predict<<"\n\n\n";
		break;
	case 2:
		cout<<"Enter Degree: ";
		cin>>degree;
		ll range= pow(2,(degree-1));
		cout<<"d\tp\n";
		for(int i= 1;i<range;i++){
    		remainder = getRemainder(i,degree);
    		cout<<remainder.d<<"\t"<<remainder.p<<"\n";
			}
			break;
}
system("pause");system("cls");
cout<<"\n\n\nEXIT(Y/N)???";
char ch;
cin>>ch;
if(ch == 'y' || ch =='Y')return 0;
goto again;





   
}
