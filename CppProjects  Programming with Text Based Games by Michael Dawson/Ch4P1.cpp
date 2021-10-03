/*
Write a program with a function that prompts a player to
enter a number within a specifi c range. If the player enters
a number that’s too low, the function should tell the player
that the number is illegal and remind the player of the lowest
acceptable value. If the player enters a number that’s too high,
the function should tell the player that the number is illegal
and remind the player of the highest acceptable value. Th e
function should have the following prototype:
int askNumber(int low, int high)
Th e parameter low is the lowest number in the acceptable
range, while the parameter high is the highest acceptable
number. Th e function should return the valid number the
player enters. In your main() function, call askNumber() so
that the player is asked for a number between 1 and 10.
Display the value the player enters.
*/
#include <bits/stdc++.h>
using namespace std;
int askNumber(int low, int high){
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    if(num>high)cout<<"\n\nTOO HIGH\nrange is only from "<<low<<" --> "<<high<<" \n\n";
    else if(num<low)cout<<"\n\nTOO LOW\nrange is only from "<<low<<" --> "<<high<<" \n\n";
    else cout<<"\n\nGOOOOOOD BOOOY\n\n";
}
int main(){
    askNumber(1,10);
}