/*
Write another version of the program you wrote in Project 1
but this time, instead of parallel arrays, use a multidimensional
array to store both the words and their corresponding
hints.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<<"\n\nTHIS PROGRAM JUMBLES A RANDOM WORD FOR USER TO GUESS\n";
    const int randWordsNumber=10;
    const string randWords[][2]={
        {"banana","a long curved fruit which grows in clusters and has soft pulpy flesh and yellow skin when ripe."},
        {"learn","gain or acquire knowledge of or skill in (something) by study, experience, or being taught."},
        {"invasion","an instance of invading a country or region with an armed force."},
        {"prosecute","institute legal proceedings against (a person or organization)."},
        {"confuse","cause (someone) to become bewildered or perplexed."},
        {"government","the governing body of a nation, state, or community."},
        {"rank","a position in the hierarchy of the armed forces."},
        {"jump","push oneself off a surface and into the air by using the muscles in one's legs and feet."},
        {"vegetation","plants considered collectively, especially those found in a particular area or habitat."},
        {"rich","having a great deal of money or assets; wealthy."}
    };
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber=(rand()%(randWordsNumber));
    string randomWordGenerated=randWords[randomNumber][0];
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
        cout<<"THE HINT IS: \n"<<randWords[randomNumber][1];
    }
    if(guess!=randomWordGenerated && guess!="quit" && guess!="hint")cout<<"\n\nINCORRECT TRY AGAIN\n\n";
    
    }


}