#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <chrono>



int main(){

  std::vector<char> passChars;
  for(int i=33; i<=126;i++){
    passChars.push_back(i);
  }
  std::string password="";
  std::cout<<"WELCOME TO RANDOM PASSWORD GENERATOR\n\n";
  std::cout<<"Please enter the length of the password: ";
int passLength;
std::cin>>passLength;
auto seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed);
std::uniform_int_distribution<int> distribution(1,93);
auto randNum=distribution(generator);
for(int i=0;i<=passLength-1;i++){
  password+=passChars[randNum];
}
std::cout<<password;



}
