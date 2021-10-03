/*

In the game Binary Code Breaker, the player must guess a
four-digit code made up of 1’s and 0’s. Th e player submits a
guess by entering each of the four digits through a separate
prompt. After the player enters the last digit of a guess, the
computer lets him or her know how many digits matched
the secret code. If the player guesses the complete four-digit
code in fi ve or fewer guesses, he or she wins; otherwise, it’s
game over.

1.)generate a random 4 digit of 1's and 0's
2.)get input of 1's and 0's from user
3.)compare generated to input
4.)count how many match
5.)guess>5 and correct wins

If you want to let the user decide how many 1's and 0's to guess
get the input of the number of 1's and 0's  the users want to guess
then set the random number to (rand()%max);

where "max" is (for loop range 0 -> n max+=2^n) after for loop max+=1 where "n" is the number of 1's and 0's
so if the user wants to guess 6(six) 1's and 0's

the randomNumber should be (rand()%max) and max is (for loop range n= 0 -> 5 max+=2^n) which is 63, then add 1 ==64
so the range of the random number is 0 - 62 wehre 62 can be represented in 111111


*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(0)));
    int randomNum=(rand()%16);
    string randomBinary="";
    while(randomNum>0){
        if(randomNum%2==0)randomBinary.insert(randomBinary.begin(),'0');
        else randomBinary.insert(randomBinary.begin(),'1');
        randomNum>>=1;
    }
    for(int i=randomBinary.size();i<=3;i++)randomBinary.insert(randomBinary.begin(),'0');
    string guess;
    int chances=1;
    bool isOk=false;
    int correctGuesses=0;
    while(correctGuesses<4 || chances<5){
    correctGuesses=0;
    for(int i=0;i<4;i++){
        cout<<"Enter a number ( 1 | 0 ): ";
        cin>>guess[i];
        if(guess[i]==randomBinary[i])correctGuesses++;
        if(correctGuesses==4)isOk=true;
    }
    chances++;
    if(isOk)break;
     else cout<<"You guessed "<<correctGuesses<<" numbers correctly\n"<<"\n\nTRY AGAIN!\n\n";

    }
    if(isOk)cout<<"\n\nCONGRATS";
    else cout<<"\n\nBETTER LUCK NEXT TIME";
    
}