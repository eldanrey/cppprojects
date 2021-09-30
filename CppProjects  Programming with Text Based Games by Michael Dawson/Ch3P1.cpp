/*
Improve the Word Jumble game presented in this chapter so
that each word is paired with a hint. If the player enters hint,
the program should display the corresponding hint. Use a
parallel array to store the hints.
Random Words:
banana
learn
invasion
prosecute
confuse
government
rank
jump
vegetation
rich
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<<"\n\nTHIS PROGRAM JUMBLES A RANDOM WORD FOR USER TO GUESS\n";
    const int randWordsNumber=10;
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
    const string randWordsHint[]={
        "a long curved fruit which grows in clusters and has soft pulpy flesh and yellow skin when ripe.",
        "gain or acquire knowledge of or skill in (something) by study, experience, or being taught.",
        "an instance of invading a country or region with an armed force.",
        "institute legal proceedings against (a person or organization).",
        "cause (someone) to become bewildered or perplexed.",
        "the governing body of a nation, state, or community.",
        "a position in the hierarchy of the armed forces.",
        "push oneself off a surface and into the air by using the muscles in one's legs and feet.",
        "plants considered collectively, especially those found in a particular area or habitat.",
        "having a great deal of money or assets; wealthy.",
    };
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber=(rand()%(randWordsNumber));
    string randomWordGenerated=randWords[randomNumber];
    string jumbledWords=randomWordGenerated;
    for(int i=0;i<jumbledWords.length();i++){
        swap(jumbledWords[i],jumbledWords[(rand()%jumbledWords.length())]);
    }
    cout<<"\nTHE RANDOM JUMBLED WORD IS: "<<jumbledWords;
    string guess;
    while(guess!=randomWordGenerated && guess!="quit"){
    cout<<"\nYour guess: ";
    cin>>guess;
    if(guess==randomWordGenerated)cout<<"\nCONGRATS\n";
    if(guess=="hint"){
        cout<<"THE HINT IS: \n"<<randWordsHint[randomNumber];
    }
    if(guess!=randomWordGenerated && guess!="quit" && guess!="hint")cout<<"\n\nINCORRECT TRY AGAIN\n\n";
    
    }


}