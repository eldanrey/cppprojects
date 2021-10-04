/*
name: kagesama
Date/Time: 04/10/21|06:38

Modify the high score program you wrote for Project 4 in
Chapter 3. In this version, you should defi ne the following
new functions:
• void SetDefaultEntries()—sets initial entry values
• void DisplayTable()—displays the high score table
• void InsertEntry()—inserts new entry into the high
score table
I didn’t list the parameters for these functions—this time,
determining them will be up to you. But don’t forget to use
const whenever possible. Finally, your program should allow
a player to manipulate the high score table through a menu
with the following choices:
0 - Quit
1 - Display table
2 - Insert new entry into table
*/



#include <bits/stdc++.h>
using namespace std;
vector <pair<string,int>> vect;
bool sortpairsec(const pair <string,int> &a, const pair <string,int> &b){
    return (a.second>b.second);
}
void setDefaultEntries(){
    vect.push_back(make_pair("Eldan",1000));   
    vect.push_back(make_pair("Rey",1000));
    vect.push_back(make_pair("Dofredo",1000));
    vect.push_back(make_pair("Lorien",1000));
    vect.push_back(make_pair("Azundra",1000));
    
}
void displayTable(){
    for(int i=0;i<vect.size();i++){
        cout<<vect[i].first<<'\t'<<vect[i].second<<'\n';
    }
    cout<<"\n\n";
    
}
void insertEntry(){
    cout<<vect.size();
        cout<<"Enter a Name: ";
        string name;
        cin>>name;
        cout<<"Enter a score: ";
        int score;
        cin>> score;
        for(int i=0;i<vect.size();i++){
        if(vect[i].second==score){
            vect.insert(vect.begin()+i,make_pair(name,score));
            vect.pop_back();
            break;
        }
        else if(vect[vect.size()-1].second<score){
            // vect.push_back();
            vect.insert(vect.begin(),make_pair(name,score));
            vect.pop_back();
            sort(vect.begin(),vect.end(),sortpairsec);
            break;
        }
}

}
int main(){
    setDefaultEntries();
    main:
    int choice;
    cout<<"[0]Insert entry into table\n[1]Display table\n[2]Quit\nYour choice: ";
    cin>>choice;
    switch (choice)
    {
    case 0:insertEntry();goto main;
        break;
    case 1: displayTable();goto main;break;
    case 2: return 0;
    
    default:
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"\n\n\t\tINVALID INPUT\n\n";
            system("pause");
            system("cls");
            goto main;
    }


}