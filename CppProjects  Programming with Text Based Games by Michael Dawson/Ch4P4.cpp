/*
name: kagesama
Date/Time: 03/10/21|13:21

Modify the Word Jumble game presented in Chapter 3. Separate
the code from main() into four new functions:
• string randomWord()—returns a random word for the
player to guess
• string mixUp(const string& aWord)—returns a jumbled
version of aWord
• void welcomePlayer(const string& aJumble)—welcomes
the player and explains the game
• void play(const string& aWord)—plays the game by
getting a guess from the player until the player guesses correctly
or quits; fi nally, thanks the player for playing
Th e main() function should become:
int main()
{
srand(static_cast<unsigned int>(time(0)));
string word = randomWord();
string jumble = mixUp(word);
welcomePlayer(jumble);
play(word);
return 0;
}
*/



#include <bits/stdc++.h>
using namespace std;
string randomWord(){
    const string randWords[]={
        "banana",
        "learn",
        "invasion",
        "prosecute",
        "confuse",
        "government",
        "rank",
        "jump",
        "vegetation",
        "rich"
    };
    return (randWords[rand()%10]);   
}
string mixUp(const string& aWord){
    string jumbledWord=aWord;
    for(int i=0;i<jumbledWord.length();i++){
        swap(jumbledWord[i],jumbledWord[(rand()%jumbledWord.length())]);
    }
    return jumbledWord;
}
void welcomePlayer(const string& aJumbled){
    cout<<"\n\nWELCOME PLEASE GUESS THE RANDOM JUMBLED WORD\n\n";
    cout<<"THE JUMBLED WORD IS: "<<aJumbled<<"\n\n";
}
void gameExit(){
    cout<<"\n\nThank you for Playing\n\n ";
}
void play(const string& aWord){
    while(1){
    cout<<"Enter your guess: ";
    string guess;
    cin>>guess;
    if(aWord==guess){cout<<"\n\nCONGRATS\n\n";break;}
    else if(guess=="quit"){gameExit();break;}
    else cout<<"\n\nWRONG GUESS TRY AGAIN\n\n";
}}
int main()
{
srand(static_cast<unsigned int>(time(0)));
string word = randomWord();
string jumble = mixUp(word);
welcomePlayer(jumble);
play(word);
return 0;
}