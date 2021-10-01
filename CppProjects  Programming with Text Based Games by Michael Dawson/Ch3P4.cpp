/*
Write a program that maintains a high score table of fi ve
entries, where each entry is made up of a player’s name and
score. Th e table should store the entries in order, from highest
score to lowest. Your program should initialize the table
using your name and 1000 for all fi ve entries. Next, your
program should display the entries and allow a player to add
a new one. Your program should accept a name and a score
for the potential new entry. If the score is greater than or
equal to the lowest score in the table, your program should
insert the new entry at the correct position, adjust the rest of
the table accordingly, and display a message saying that the
entry was inserted. Otherwise, your program should display
a message telling the player that the score was too low for the
entry to be added. Your program should continue to display
the table and allow the player to add new entries as long as he
or she wants. (Hint: Your program doesn’t have to do a full
sort of the entries when a new one is added. You can assume
that the entries are already sorted; a new entry needs only to
be inserted at the correct position with the rest of the table
adjusted accordingly).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <vector<int>> highscore={{"Eldan",1000},{"Red",1000},{"Rey",1000},{"Elen",1000},{"Jane",1000}};
    
}