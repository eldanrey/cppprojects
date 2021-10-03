/*
name: kagesama
Date/Time: 03/10/21|11:33

Modify the Guess My Number game presented in Chapter 2.
Separate some of the code from main() into two new functions:
• void welcomePlayer()—welcomes the player and explains
his or her objective
• void play(int aSecretNumber)—plays the game by getting
a guess from the player until he or she guesses the
secret number and then congratulates the player
You should call your new functions from main(). You should
also incorporate some of the functions you wrote in Projects 1
and 2. You should add:
• int randomNumber(int low, int high)—returns a random
number between low and high
• int askNumber(int low, int high)—returns a number
entered by player between low and high
You should call randomNumber() from main() to generate
the secret number for the player to guess. You should call
askNumber() from play() so that the player can only submit
a guess that’s between 1 and 100. (Hint: Make MAX_NUMBER a
global constant so that it can be accessed from any function.
Add a global constant MIN_NUMBER that’s equal to 1 so it can
be accessed from any function.)
*/



#include <bits/stdc++.h>
using namespace std;
const int MAX_NUMBER=100;
const int MIN_NUMBER=1;

int askNumber(int low, int high){
    ask:
    cout<<"Please Enter your guess number (1-100): ";
    int num;
    cin>>num;
    if(num>=low && num<=high) return num;
    else {
        cout<<"\n\nINVALID INPUT! TRY AGAIN RANGE IS "<<MIN_NUMBER<<" --> "<<MAX_NUMBER<<"\n\n";
        cin.clear();
        cin.ignore(1000,'\n');
        goto ask;
    }
}
void welcomePlayer(){
    cout<<"\t\tWELCOME USER 001\n\n";
    cout<<"\t\tTHE OBJECTIVE IS TO GUESS A NUMBER FROM 1-100 in 5 GUESSES OR LESS\n\n";
}
void play(int aSecretNumber){
    int numberOfGuesses=0;
    bool isOk=false;
    while(numberOfGuesses<5){
        numberOfGuesses++;
    int guess=askNumber(MIN_NUMBER,MAX_NUMBER);
    if(guess==aSecretNumber){
        cout<<"\n\nCONGRATS THANK YOU FOR PLAYING\n\n";
        isOk=true;
        break;
    }
    else if(guess<aSecretNumber)cout<<"\nTOO LOW!\n\n";
    else if(guess>aSecretNumber)cout<<"\nTOO HIGH!\n\n";
    
    }
    if(!isOk){
        cout<<"\n\nTHE NUMBER IS "<<aSecretNumber<<'\n';
        cout<<"\n\nGAME OVER THANK YOU FOR PLAYING\n\n";
    }
    
}
int randomNumber(int low,int high){
    srand(static_cast<unsigned int>(time(0)));
    return(rand()%((high-low)+1))+low;
}
int main(){
    welcomePlayer();
    play(randomNumber(MIN_NUMBER,MAX_NUMBER));


}