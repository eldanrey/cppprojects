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
    
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
rem remainder;
ll predict = genEquation(198,7);
cout<<"Predicted Number: "<<predict<<'\n';

int degree = 4;
ll range= pow(2,(degree-1));
cout<<"d\tp\n";
for(int i= 1;i<range;i+=2){
    remainder = getRemainder(i,degree);
    cout<<remainder.d<<"\t"<<remainder.p<<"\n";
}
   
}