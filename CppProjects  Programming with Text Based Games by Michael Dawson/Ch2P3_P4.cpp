/*
 Th is game is a twist on the Guess My Number game
where the player and computer switch roles. Th at is, the
player picks a number between 1 and 100 and the computer
tries to guess it. Th e computer tells the player its guess, and
the player must tell the computer whether the guess is too
high, too low, or right on the money. If the guess is too high
or too low, the computer guesses again. If the guess is correct,
the computer congratulates itself and announces how many
guesses it took to get it right. (Hint: Most people try to guess
the number by picking the midpoint between the known lowest
and highest possible values for the number. Try to implement
this strategy for the computer.)
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<<"\t\tTHIS PROGRAM WILL GUESS THE USERS RANDOM NUMBER\n";
    int lowerBound, upperBound;
    cout<<"Please Enter the Lower Limit: ";
    cin>>lowerBound;
    cout<<"Please Enter the Upper Limit: ";
    cin>>upperBound;
    bool isGuessed=false;
    while(!isGuessed){
        cout<<"Is the Number: "<<(upperBound+lowerBound)/2;
        cout<<"\n[1]Too High!\n[2]Too Low!\n[3]Correct\nYour choice: ";
        int choice;
        cin>>choice;
        if(choice==1){
             upperBound=(upperBound+lowerBound)/2;
        }
        else if(choice==2){
            lowerBound=(upperBound+lowerBound)/2;
        }
        else if(choice==3){
            isGuessed=true;
        }
        else cout<<"\n\nInvalid Input!\n\n";
    }
    cout<<"Thank you for playing";


}