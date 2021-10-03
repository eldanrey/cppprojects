/*
Write a program with an overloaded function name,
randomNumber. You should defi ne two forms of the function.
In the fi rst form, the function accepts a single integer
and returns a random integer, zero through one less than the
integer. In the second form, the function accepts low and high
integer values and returns a random number between them,
inclusive. Here are the prototypes:
int randomNumber(int high)
int randomNumber(int low, int high)
In your main() function, call randomNumber() ten times by
passing a single integer so that the function returns a random
number between zero and fi ve. Display each returned value.
Next, call the function ten times by passing two integers so
that the function returns a random number between 3 and 6,
inclusive. Display each returned value.
*/

#include <bits/stdc++.h>
using namespace std;

int randomNumber(int high){
    return (rand()%(high+1));
}
int randomNumber(int low,int high){
    return (rand()%((high-low)+1))+low;
}
int main(){
    srand(static_cast<unsigned int>(time(0)));
for(int i=0;i<10;i++)cout<<randomNumber(5)<<'\n';
cout<<"\n\n\n";
for(int i=0;i<10;i++)cout<<randomNumber(3,6)<<'\n';
}