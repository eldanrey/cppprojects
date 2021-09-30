/*
Write a two-player version of the game of Nim. In the game,
players take turns removing from 1 to 4 sticks from a pile
of 13. Th e player who picks up the last stick wins the game.
Your program should validate the input from the players. Th is
means that the program should continue to ask a player for
the number of sticks he or she wishes to take as long as any of
the following are true:
• Th e number of sticks the player asks to take is greater than
the number of sticks left.
• Th e number of sticks the player asks to take is greater than
4, the maximum number that he or she is allowed to take.
• Th e number of sticks the player asks to take is less than 1,
the minimum number that he or she is allowed to take.
*/
#include <iostream>
using namespace std;

int main(){
    int sticks=13, getSticks;
    bool p1Win=false,p2Win=false, isPlayable=true;
    cout<<"THIS PROGRAM ASKS 2 PLAYERS TO GET 1-4 sticks to the pile of 13 sticks the last player to get the last stick wins\n\n";
    while(1){
        cout<<"Player 1: ";
        cin>>getSticks;
        sticks-=getSticks;
        if(sticks<4){
            p2Win=true;
            break;
        }
        cout<<"Player 2: ";
        cin>>getSticks;
        sticks-=getSticks;
        if(sticks<4){
            p1Win=true;
            break;
        }
        
    }
    if(p1Win)cout<<"\n\nCongrats to Player 1\n\n";
    else if(p2Win)cout<<"\n\nCongrats to Player 2\n\n";
}