/*
Write a program that displays all of the cards from a deck of
playing cards. Th e program should use either "A", "2", "3",
"4", "5", "6", "7", "8", "9", "10", "J", "Q", or "K" for the
rank of the card and either 'c', 'h', 's', or 'd' for the suit.
So if the program randomly selects the jack of clubs, it should
display Jc. Use an array of string objects for the ranks and
another array of char values for the suits. Th e program should
display:
2c 2h 2s 2d
3c 3h 3s 3d
4c 4h 4s 4d
5c 5h 5s 5d
6c 6h 6s 6d
7c 7h 7s 7d
8c 8h 8s 8d
9c 9h 9s 9d
10c 10h 10s 10d
Jc Jh Js Jd
Qc Qh Qs Qd
Kc Kh Ks Kd
Ac Ah As Ad
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> rank={"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    vector<string> suit={"c","h","s","d"};
    cout<<"\t\tDISPLAY ALL CARDS\n\n";
    for(int i=0; i<rank.size();i++){
        for(int j=0;j<suit.size();j++){
            cout<<rank[i]+suit[j]<<'\t';
        }
        cout<<'\n';
    }
}