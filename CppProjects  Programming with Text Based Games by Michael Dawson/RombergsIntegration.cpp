#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;
string fx="";
double fxSolve(double x){
  for(int i=0;i<fx.length();i++){
    if(tolower(fx[i])=='x');
  }
}

void getBounds(const string& prompt){
  bool isPlus=false, isMinus=false, isMult=true, isDiv=false;
  string input="";
  double ans=1;
  while(tolower(input)!="q"){
     cout<<prompt;
      cin>>input;
      if(input=="+"){
        isPlus=true;
        isMinus=false; 
        isMult=false; 
        isDiv=false;
      }
      else if(input=="-"){
        isPlus=false; 
        isMinus=true; 
        isMult=false; 
        isDiv=false;
      }
      else if(input=="*"){
        isPlus=false;
        isMinus=false; 
        isMult=true;
        isDiv=false;
      }
      else if(input=="/"){
        isPlus=false;
        isMinus=false; 
        isMult=false;
        isDiv=true;
      }
      if(isPlus){
        
      }
      else if(isMinus){
        
      }
      else if(isMult){
        
      }
      else if(isDiv){
        
      }
  }
 



}
int main(){
    int segments;
    string upperBound,lowerBound;
  cout<<"\t\tTHIS PROGRAM IS A CALCULATOR APP THAT CAN SOLVE INTEGRAL USING ROMBERG'S METHOD\n\n";
  
  cout<<"\nEnter the number of segments (n): ";
  cin>>segments;
  cin.clear(); cin.sync();
  cout<<"\nEnter the Upper Bound: ";
  getline(cin,upperBound);
  cin.clear(); cin.sync();
  cout<<"\nEnter the Lower Bound: "; 
  getline(cin,lowerBound);
  cin.clear(); cin.sync();
  cout<<"\nEnter f(x): ";
  getline(cin,fx);
  cin.clear(); cin.sync();
  cout<<segments<<"\t"<<upperBound<<"\t"<<lowerBound<<"\t"<<fx<<"\t";
  cout<<"\n[a1]X^2\t\t[a2]X^a\t\t[a3]Pi\n[a4]sqrt\t[a5]nth root\t[a6]e^x\n[a7]ln(x)\t[a8]log10(x)\t[a9]logx\n[a10]sin(x)\t[a11]cos(x)\t[a12]tan(x)\n[a13]sinh(x)\t[a14]cosh(x)\t[a15]tanh(x)\n";
  cout<<"\nEnter your choice: ";
  string choice;
  
 
}