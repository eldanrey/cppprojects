#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

double getBound(const string& prompt){
  cout<<prompt;
  string eq,subEq;
  double a=1;
  bool isAdd=false, isSub=false, isMult=true,isDiv=false;
  cin>>eq;
  double bound=1;
  for(int i=0;i<eq.length();i++){
    if(eq[i]=='+')
      {isAdd=true;
       isSub=false;
       isMult=false;
       isDiv=false;
       a=0;
      }
      else if(eq[i]=='-')
      {isAdd=false;
       isSub=true;
       isMult=false;
       isDiv=false;
       a=0;
      }
      else if(eq[i]=='*')
      {isAdd=false;
       isSub=false;
       isMult=true;
       isDiv=false;
       a=1;
      }
      else if(eq[i]=='/')
      {isAdd=false;
       isSub=false;
       isMult=false;
       isDiv=true;
       a=1;
      }
	else if(isdigit(eq[i])){
  		subEq+=eq[i];
		} 	
    else if(tolower(eq[i])=='p'&&tolower(eq[i+1])=='i')
	{a=M_PI;
	i++;
	}
  else{
      cin.clear();
      cin.ignore(1000,'\n');
      cout<<"\n\n\t\tINVALID INPUT\n\n";
      system("pause");
      system("cls");
  }
	 if(!isdigit(eq[i+1]) || i==eq.length()-1){
		stringstream ss(subEq);
        ss>>a;
        subEq="";
	}
	
   
    if(isAdd)bound+=a;
    if(isSub)bound-=a;
    if(isMult)bound*=a;
    if(isDiv)bound/=a;

  }
  return bound;
}

int getSegments(const string& prompt){
  ask:
  cout<<prompt;
  int n;
  cin>>n;
  int k=log2(n);
  if(pow(2,k)==n)return n;
  else{
      cin.clear();
      cin.ignore(1000,'\n');
      cout<<"\n\n\t\tINVALID INPUT\n\n";
      system("pause");
      system("cls");
      goto ask;
  }
}
int main(){
    int segments;
     double upperBound,lowerBound;
  // cout<<"\t\tTHIS PROGRAM IS A CALCULATOR APP THAT CAN SOLVE INTEGRAL USING ROMBERG'S METHOD\n\n";
  // getBounds("Hello");
  cout<<"\nEnter the number of segments (n): ";
  cin>>segments;
  segments=getSegments("\nEnter the number of segments (n): ");
  cout<<segments;
  upperBound=getBound("\nEnter the Upper Bound: ");
  cout<<fixed<<setprecision(6)<<upperBound;
  lowerBound=getBound("\nEnter the LowerBound: ");
  cout<<fixed<<setprecision(6)<<lowerBound;
  // cin.clear(); cin.sync();
  // cout<<"\nEnter the Lower Bound: "; 
  // getline(cin,lowerBound);
  // cin.clear(); cin.sync();
  // cout<<"\nEnter f(x): ";
  // getline(cin,fx);
  // cin.clear(); cin.sync();
  // cout<<segments<<"\t"<<upperBound<<"\t"<<lowerBound<<"\t"<<fx<<"\t";
  // cout<<"\n[a1]X^2\t\t[a2]X^a\t\t[a3]Pi\n[a4]sqrt\t[a5]nth root\t[a6]e^x\n[a7]ln(x)\t[a8]log10(x)\t[a9]logx\n[a10]sin(x)\t[a11]cos(x)\t[a12]tan(x)\n[a13]sinh(x)\t[a14]cosh(x)\t[a15]tanh(x)\n";
  // cout<<"\nEnter your choice: ";
  // string choice;
  
 
}