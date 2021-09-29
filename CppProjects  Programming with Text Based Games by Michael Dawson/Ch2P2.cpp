/*
Modify the Guess My Number chapter game program so
that the player has only fi ve guesses. If the player runs out
of guesses, the program should end the game and display an
appropriately chastising message.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    //seed rand num generator
srand(static_cast<unsigned int>(time(0)));
//max possible secret number
const int MAX_NUMBER = 100;
//rand num between 1-100
int randomNumber = (rand() % MAX_NUMBER) + 1;

int guessNumber;
cout<<"THIS PROGRAM WILL GENERATE A RANDOM NUMBER TO GUESS\n";
int guesses=0;
bool isGuessed=false;
while(guesses!=5){
cout<<"Enter your guess number: ";
cin>>guessNumber;
guesses++;
if(guessNumber>randomNumber)cout<<"Lower!\n";
else if(guessNumber<randomNumber)cout<<"Higher!\n";
else {cout<<"Correct! Congratz\n";break;isGuessed=true;
}}
cout<<"You guessed the number "<<guesses<<" times\n";
}
