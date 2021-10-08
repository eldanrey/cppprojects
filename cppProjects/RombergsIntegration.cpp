/*
NAME: ELDAN REY V. DOFREDO
SUBJECT/CODE: BEE311L(1602)
PLATE #3
*/

#include <bits/stdc++.h>
using namespace std;
void welcome(){
cout<<"\n\n\t\tWELCOME THIS PROGRAM WILL COMPUTE ITNEGRATION USING";
cout<<"\n\n\t\tROMBERS TRAPEZOIDAL METHOD\n\n\n\n\n\n";
                                                                           
                                                                           
}
void noteSegments(){
	system("cls");
  cout<<"\n\t\tENTER THE NUMBER OF SEGMENTS\n\n\n";
  cout<<"\t|=================================================================================================|\n";
  cout<<"\t|                      NOTE: N MUST BE A WHOLE NUMBER AND IS EQUAL TO log2(k)=N                   |\n";
  cout<<"\t|                             WHERE K IS THE LEVEL OF INTEGRATION                                 |\n";
  cout<<"\t|=================================================================================================|\n";

}
void noteBounds(){
	system("cls");
  cout<<"\n\t\tENTER THE BOUND OF THE INTEGRATION\n\n\n";
  cout<<"\t|=================================================================================================|\n";
  cout<<"\t|                      NOTE: YOU CAN INPUT PI(3.1415) TO THE BOUND                                |\n";
  cout<<"\t|                           SAMPLE INPUT ARE THE FOLLOWING                                        |\n";
  cout<<"\t|                              EXAMPLE: BOUND IS: 3pi/2                                           |\n";
  cout<<"\t|                              EXAMPLE: BOUND IS: 45                                              |\n";
  cout<<"\t|                              EXAMPLE: BOUND IS: 105PI/67                                        |\n";
  cout<<"\t|=================================================================================================|\n";
  cout<<"\t|=================================================================================================|\n";
  cout<<"\t|      NOTE: THE ONLY VALID INPUT IS 'PI', Integers, and Arithmetic Operations(+,-,*,/)           |\n";
  cout<<"\t|                            INVALID INPUTS ARE THE FOLLOWING                                     |\n";
  cout<<"\t|                              EXAMPLE: BOUND IS: 45(pi)/2                                        |\n";
  cout<<"\t|                              EXAMPLE: BOUND IS: 45E9/2                                          |\n";
  cout<<"\t|                              EXAMPLE: BOUND IS: 2*(PI)/32                                       |\n";
  cout<<"\t|=================================================================================================|\n";
}

void initializeAnswers(double nAnswers[],const double uB,const double lB,const int k){
  for(int i=0;i<=k;i++){
    double h=(uB-lB)/(pow(2,i));
        nAnswers[i]=h;
    }
}

int getSize(const int k){
  int size=0;
  for(int i=0;i<=k;i++){
    size+=pow(2,i)-1;
  }
  return size;
}
string toStringEq(const int a){
   stringstream ss;
  ss<<a;
  string toEq;
  ss>>toEq;
  return toEq;
}
string toStringEq(const double a){
  stringstream ss;
  ss<<a;
  string toEq;
  ss>>toEq;
  return toEq;
}
void getFinalJ(double h[], double ans[], double bound[], double final[],int k){
  int counter=0;
  for(int i=0;i<sizeof(ans)/sizeof(ans[0]);i++){
    cout<<"\n\n"<<ans[i]<<"\n\n";
  }
  for(int i=0;i<=k;i++){
    cout<<"\n\nbound: "<<bound[i]<<"\n\n";
  }
  for(int i=0;i<=k;i++){
    cout<<"\n\nh: "<<h[i]<<"\n\n";
  }
  for(int i=0;i<=k;i++){
    final[i]=0.0;
  }
          for(int i=0;i<=k;i++){
            for(int j=0;j<((pow(2,i))-1);j++){
              final[i]+=ans[counter];
              counter++;
            }
            final[i]+=bound[i];
            final[i]*=h[i];
            
            }
            
}
double solveImprovedArea(int k,double final[]){
  system("cls");

  cout<<"\n\n\t______________________________________________________________________________________________";
  cout<<"\n\t____                              THE IMPROVED AREA                                         ____";
  cout<<"\n\t____                                     J                                                  ____";
  cout<<"\n\t____                             "<<final[0]<<"                                             ____";
  cout<<"\n\t____                              "<<final[1]<<"                                            ____";
  cout<<"\n\t____                              "<<final[2]<<"                                            ____";
  cout<<"\n\t____                              "<<final[3]<<"                                            ____";
  cout<<"\n\t______________________________________________________________________________________________\n\n";
  int counter=0;
  for(int i=0;i<=k;i++){
    for(int j=0;j<k-i;j++){
      final[j]=(double)(((pow(4.0,(i+1)))*(final[j+1]))-final[j]) / (double)((pow(4.0,(i+1)))-1);
    }
    
  }
  return final[0];
}
void getEquation( double h[],const double uB,const double lB, int k){
  ask:
  int size=(getSize(k));
  cout<<size;
  double tempAns[size];
  double tempBound[k];
  double tempBound1[k];
  double tempBound2[k];
  double abound1[k];
  double abound2[k];
  double finalAnswer[k];
  
  double ans[size];
   for(int i=0;i<=size;i++){
    tempAns[i]=1.0;
    
  }
  for(int i=0;i<=k;i++){
    tempBound[i]=0.0;
    tempBound1[i]=0.5;
    tempBound2[i]=0.5;
    abound1[i]=1.0;
    abound2[i]=1.0;
  }
  
   bool isAdd=false, isSub=false, isMult=true,isDiv=false;
   string subEq;

string input;
string equation="";
bool isExit=false;
while(!isExit){
  system("cls");
  cout<<"\n\nTHE EQUATION IS: "<<equation;
  cout<<"\n\n\t|---------------------------------------------------------------------------------------------------|";
  cout<<"\n\t|          [a1] x^2                      [a6] e^x                      [a11] cos(x)               --|";
  cout<<"\n\t|          [a2] x^a                      [a7] ln(x)                    [a12] tan(x)               --|";
  cout<<"\n\t|          [a3] PI                       [a8] log10(x)                 [a13] sinh(x)              --|";
  cout<<"\n\t|          [a4] sqrt(x)                  [a9] logb(x)                  [a14] cosh(x)              --|";
  cout<<"\n\t|          [a5] nth root(x)              [a10] sin(x)                  [a15] tanh(x)              --|";
  cout<<"\n\t|---------------------------------------------------------------------------------------------------|\n\n";
  cout<<"\n\n\t|---------------------------------------------------------------------------------------------------|";
  cout<<"\n\t|          NOTE: IF YOU ARE FINISHED INPUTTING TO THE EQUATION INPUT 'q' or 'Q'                   --|";
  cout<<"\n\t|              ACCEPTED INPUT (+, -, *, /) AND INTEGERS                                           --|";
  cout<<"\n\t|---------------------------------------------------------------------------------------------------|\n\n";
  cout<<"Enter a choice (a1->a15): ";
double a[size]={1.0};
cin>>input;
for(int z=0;z<input.size();z++){
  
  if(input[0]=='+')
      {isAdd=true;
       isSub=false;
       isMult=false;
       isDiv=false;
       for(int i=0;i<=size;i++){
         a[i]=0.0;
       }
       equation+=" + ";
      }
      else if(input[0]=='-')
      {isAdd=false;
       isSub=true;
       isMult=false;
       isDiv=false;
       for(int i=0;i<=size;i++){
         a[i]=0.0;
       }
       equation+=" - ";
       
      }
      else if(input[0]=='*')
      {isAdd=false;
       isSub=false;
       isMult=true;
       isDiv=false;
       for(int i=0;i<=size;i++){
         a[i]=1.0;
       }
       equation+=" * ";
      }
      else if(input[0]=='/')
      {isAdd=false;
       isSub=false;
       isMult=false;
       isDiv=true;
       for(int i=0;i<=size;i++){
         a[i]=1.0;
       }
       equation+=" / ";
      }
      else if(tolower(input[0])=='a'){
         if(input[1]=='1'&& input[2]=='0'){
            cout<<"\n\n\t\t A * sin(x): ";
            cout<<"\n\n\t\tEnter the Value for A (default=1): ";
            double coef=1.0;
            cin>>coef;
            int counter=0;
            for(int i=0;i<=k;i++){
              abound1[i]=(coef*sin(lB));
              abound2[i]=(coef*sin(uB));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=coef*sin(base);
              counter++;
            }}
            if(coef>1){
              equation+=" ( "+toStringEq(coef)+" * sin(x) ) ";
            }
            else equation+=" ( sin(x) ) ";
            z++;
          }
          else if(input[1]=='1'&& input[2]=='1'){
            cout<<"\n\n\t\t A * cos(x): ";
            cout<<"\n\n\t\tEnter the Value for A (default=1): ";
            double coef=1.0;
            cin>>coef;
            int counter=0;
            for(int i=0;i<=k;i++){
              abound1[i]=(coef*cos(lB));
              abound2[i]=(coef*cos(uB));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=coef*cos(base);
              counter++;
            }}
            if(coef>1){
              equation+=" ( "+toStringEq(coef)+" * cos(x) ) ";
            }
            else equation+=" ( cos(x) ) ";
            z++;
          }
          else if(input[1]=='1'&& input[2]=='2'){
            cout<<"\n\n\t\t A * tan(x): ";
            cout<<"\n\n\t\tEnter the Value for A (default=1): ";
            double coef=1.0;
            cin>>coef;
            int counter=0;
            for(int i=0;i<=k;i++){
              abound1[i]=(coef*tan(uB));
              abound2[i]=(coef*tan(uB));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=coef*tan(base);
              counter++;
            }}
            if(coef>1){
              equation+=" ( "+toStringEq(coef)+" * tan(x) ) ";
            }
            else equation+=" ( tan(x) ) ";
            
            z++;
          }
          else if(input[1]=='1'&& input[2]=='3'){
            cout<<"\n\n\t\t A * sinh (x): ";
            cout<<"\n\n\t\tEnter the Value for A (default=1): ";
            double coef=1.0;
            cin>>coef;
            int counter=0;
            for(int i=0;i<=k;i++){
              abound1[i]=(coef*sinh(lB));
              abound2[i]=(coef*sinh(uB));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=coef*sinh(base);
              counter++;;
            }}
            if(coef>1){
              equation+=" ( "+toStringEq(coef)+" * sinh(x) ) ";
            }
            else equation+=" ( sinh(x) ) ";
            z++;
          }
          else if(input[1]=='1'&& input[2]=='4'){
            cout<<"\n\n\t\t A * cosh (x): ";
            cout<<"\n\n\t\tEnter the Value for A (default=1): ";
            double coef=1.0;
            cin>>coef;
            int counter=0;
            for(int i=0;i<=k;i++){
              abound1[i]=(coef*cosh(lB));
              abound2[i]=(coef*cosh(uB));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=coef*cosh(base);
              counter++;
            }}
            if(coef>1){
              equation+=" ( "+toStringEq(coef)+" * cosh(x) ) ";
            }
            else equation+=" ( cosh(x) )";
            z++;
          }
          else if(input[1]=='1'&& input[2]=='5'){
            cout<<"\n\n\t\t A * tanh (x): ";
            cout<<"\n\n\t\tEnter the Value for A (default=1): ";
            double coef=1.0;
            cin>>coef;
            int counter=0;
            for(int i=0;i<=k;i++){
              abound1[i]=(coef*tanh(lB));
              abound2[i]=(coef*tanh(uB));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=coef*tanh(base);
              counter++;
            }}
            if(coef>1){
              equation+=" ( "+toStringEq(coef)+" * tanh(x) ) ";
            }
            else equation+=" ( tanh(x) )";
            z++;
          }
        else if(input[1]=='1'){
          int counter=0;
          for(int i=0;i<=k;i++){
            abound1[i]=(pow(lB,2));
            abound2[i]=(pow(uB,2));
            for(int j=0;j<((pow(2,i))-1);j++){
              if(i>0){
                int temp=pow(2,(i-1));
              double base=(j+1)*(h[i]);
                a[counter]=pow(base,2);
                counter++;
              }
              else a[j]=pow(h[i],2);
              
            }
          }
          equation+="( X^2 ) ";
        }
        else if(input[1]=='2'){
          cout<<"\n\nEnter the exponent: ";
          int exponent;
          string temptext;
          cin>>exponent;
          stringstream ss;
          ss<<exponent;
          ss>>temptext;
          int counter=0;
          for(int i=0;i<=k;i++){
            abound1[i]=(pow(lB,exponent));
            abound2[i]=(pow(uB,exponent));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=pow(base,exponent);
              counter++;
              
            }}
          equation+=(" ( X^"+temptext+" ) ");
        }
        else if(input[1]=='3'){
          for(int i=0;i<=k;i++){
            abound1[i]=M_PI;
            abound2[i]=M_PI;
          }
          for(int i=0;i<=size;i++){
            a[i]=M_PI;
          }
          equation+=" ( PI ) ";
        }
        else if(input[1]=='4'){
          int counter=0;
           for(int i=0;i<=k;i++){
             abound1[i]=(sqrt(lB));
             abound2[i]=(sqrt(uB));
            for(int j=0;j<((pow(2,i))-1);j++){
              double x=(j+1)*(h[i]);
              a[counter]=sqrt(x);
              counter++;
              
            }}
            
              equation+=" ( sqrt(x) ) ";
            
          }
          else if(input[1]=='5'){
            cout<<"\n\n\t\tEnter the index of the root: ";
            int index;
            cin>>index;
            int counter=0;
            for(int i=0;i<=k;i++){
              abound1[i]=(pow(lB,1.0/index));
              abound2[i]=(pow(uB,1.0/index));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=pow(base,(1.0/index));
              counter++;
              
            }}
            equation+=" ( "+toStringEq(index)+"root(x) )";
          }
          else if(input[1]=='6'){
            cout<<"\n\n\t\tEnter the exponent for e^x: ";
            int exponent;
            cin>>exponent;
            int counter=0;
            for(int i=0;i<=k;i++){
              abound1[i]=(exp(exponent));
              abound2[i]=(exp(exponent));
            for(int j=0;j<((pow(2,i))-1);j++){
              a[counter]=exp(exponent);
              counter++;
              
            }}
            equation+=" ( e^x ) ";
          }
          else if(input[1]=='7'){
            cout<<"\n\n\t\tA*ln(x)\n\t\tPLEASE ENTER THE VALUE FOR A(default=1): ";
            double coef=1;
            cin>>coef;
            int counter=0;
             for(int i=0;i<=k;i++){
               abound1[i]=(coef*log(lB));
               abound2[i]=(coef*log(uB));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=coef*log(base);
              counter++;
            }}
             if(coef>1){
              equation+=" ("+toStringEq(coef)+" * ln(x) ) ";
            }
            else equation+=" ( ln(x) ) ";
          }
          else if(input[1]=='8'){
            cout<<"\n\n\t\tA*log10(x)\n\t\tPLEASE ENTER THE VALUE FOR A(default=1): ";
            double coef=1;
            cin>>coef;
            int counter=0;
             for(int i=0;i<=k;i++){
               abound1[i]=(coef*log10(lB));
               abound2[i]=(coef*log10(uB));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=coef*log10(base);
              counter++;
            }}
            if(coef>1){
              equation+=" ("+toStringEq(coef)+" * log10(x) ) ";
            }
            else equation+=" ( log10(x) ) ";
          }
          else if(input[1]=='9'){
            cout<<"\n\n\t\tA*logB(x)\n\t\tPLEASE ENTER THE VALUE FOR A(default=1): ";
            double coef=1;
            cin>>coef;
            cout<<"\n\t\tENTER THE VALUE FOR BASE 'B': ";
            int baselog;
            cin>>baselog;
            int counter=0;
             for(int i=0;i<=k;i++){
               abound1[i]=(coef*(log(lB)/log10(baselog)));
               abound2[i]=(coef*(log(uB)/log10(baselog)));
            for(int j=0;j<((pow(2,i))-1);j++){
              double base=(j+1)*(h[i]);
              a[counter]=coef*(log10(base)/log10(baselog));
              counter++;
              cout<<i<<'\t'<<j<<'\t'<<"\t"<<h[i]<<"\t"<<base<<'\t'<<a[counter-1]<<'\n';
            }}
            if(coef>1){
              equation+=" ("+toStringEq(coef)+" * log"+toStringEq(baselog)+"(x) ) ";
            }
            else equation+=" ( log"+toStringEq(baselog)+"(x) ) ";
          }
 
        z++;
      }
      	else if(isdigit(input[z])){
  		subEq+=input[z];
		} 
    else if(tolower(input[0])=='q'){
      isAdd=false;
      isSub=false;
      isMult=false;
      isDiv=false;
      isExit=true;}
    else{
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"\n\n\t\tINVALID INPUT\n\n";
        system("pause");
        system("cls");
        goto ask;
    }
     if((isdigit(input[z])&&!isdigit(input[z+1])) || z==input.length()-1){
		    for(int i=0;i<=size;i++){
         stringstream ss(subEq);
        ss>>a[i];
       }
       equation+=subEq;
        subEq="";
	}}
  for(int i=0;i<=size;i++){
  if(isAdd){
    tempAns[i]+=a[i];
    }
  else if(isSub){
     tempAns[i]-=a[i];
    }
  else if(isMult){
     tempAns[i]*=a[i];
    }
  else if(isDiv){
     tempAns[i]/=a[i];
    }
  }
  for(int i=0;i<=k;i++){
    if(isAdd){
    tempBound1[i]+=abound1[i];
    tempBound2[i]+=abound2[i];
    }
  else if(isSub){
    tempBound1[i]-=abound1[i];
    tempBound2[i]-=abound2[i];
    }
  else if(isMult){
    tempBound1[i]*=abound1[i];
    tempBound2[i]*=abound2[i];
    }
  else if(isDiv){
    tempBound1[i]/=abound1[i];
    tempBound2[i]/=abound2[i];
    }
  }
 for(int i=0;i<=k;i++){
    tempBound[i]=tempBound1[i]+tempBound2[i];
  }
  
  

  
  
  
  }
// for(int i=0;i<=k;i++){
//     cout<<"\n"<<tempBound[i]<<"\n";
//   }
 getFinalJ(h,tempAns,tempBound,finalAnswer,k);       
      for(int i=0;i<=k;i++){
    cout<<"\n"<<finalAnswer[i]<<"\n";
  } 
  double area= solveImprovedArea(k,finalAnswer);
cout<<"\n\n\t============================================================";
cout<<"\n\t======     FINAL IMPROVED AREA: "<<area<<"             =======";
cout<<"\n\t============================================================\n\n";
      

}
double getBound(const string& prompt){
  ask:
  	noteBounds();
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
      goto ask;
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
   noteSegments();
  cout<<prompt;
  int n;
  cin>>n;
  if(!cin){
      cin.clear();
      cin.ignore(1000,'\n');
      cout<<"\n\n\t\tINVALID INPUT\n\n";
      system("pause");
      system("cls");
  }
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
  welcome();
  system("pause");
  system("cls");
  segments=getSegments("\n\n\t\tEnter the number of segments (n): ");
  cout<<"\n\n\t\t"<<segments<<"\n\n\t\t";
  system("pause");
  upperBound=getBound("\n\n\t\tEnter the Upper Bound: ");
  cout<<fixed<<setprecision(6)<<"\n\n\t\t"<<upperBound<<"\n\n\t\t";
  system("cls");
  lowerBound=getBound("\n\n\t\tEnter the LowerBound: ");
  cout<<fixed<<setprecision(6)<<"\n\n\t\t"<<lowerBound<<"\n\n\t\t";
  system("pause");
  int k=log2(segments);
  double nAnswers[k]={1};
  initializeAnswers(nAnswers,upperBound,lowerBound,k);
 getEquation(nAnswers,upperBound,lowerBound,k);
  // cout<<segments<<"\t"<<upperBound<<"\t"<<lowerBound<<"\t"<<fx<<"\t";
  
  // cout<<"\nEnter your choice: ";
  // string choice;
  
 
}