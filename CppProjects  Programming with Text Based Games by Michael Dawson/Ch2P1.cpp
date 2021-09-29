/*
Write a program that gets a score from a player and rates it
based on the following:
• Given a score less than 0, the program should display the
message “Th at’s not a legal score!”
• Given a score between 0–999, the program should display
the message “Nothing to brag about.”
• Given a score between 1,000–9,999, the program should
display the message “Good score.”
• Given a score over 9,999, the program should display the
message “Very impressive!”
*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a score: ";
    int score;
    cin>>score;
    if(score<0)cout<<"THATS NOT A LEGAL SCORE";
    else if(score<1000 && score>=0)cout<<"Nothing to brag about.";
    else if(score<10000&&score>=1000)cout<<"Good score.";
    else cout<<"Very impressive!";
}
