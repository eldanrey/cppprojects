/**
 *  Author: kagesama
**/
#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ENDL "\n"
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define RFOR(i,a,b) for(int i=a;i>b;i--)
#define all(c) c.begin(),c.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pi;

void solve(){
  
  int max = 100;
 
  FOR(i,0,max-1){
srand(static_cast<unsigned int>(time(0)));
 int randomNum=(rand()%max)+90;
cout<<randomNum<<'\n';
  }




}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
solve();
return 0;
}