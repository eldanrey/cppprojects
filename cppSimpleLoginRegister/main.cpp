#include <iostream>
#include <fstream>
#include <sstream>
std::ofstream writefile;
std::ifstream readfile;
void Login(){
  login:
  system("cls");
  std::string name,password,dbname,dbpassword,temp;
  readfile.open("data.dat");
  std::cout << "LOGIN\n" << '\n';
  std::cout << "Name: ";
  std::cin>>name;
  std::cout << "Password: ";
  std::cin>>password;
  while(std::getline(readfile,temp)){
    std::stringstream ss(temp);
    ss>>dbname>>dbpassword;
    if(dbname==name && dbpassword==password){

      break;
    }
    else {
      std::cout << "INCORRECT NAME OR PASSWORD" << '\n';
      goto login;
    }
  }
  std::cout << "WELCOME\t" <<name<< '\n';
  readfile.close();


}
void Register(){
reg:
std::string name, password,dbname,dbpassword,temp;
writefile.open("data.dat",std::ios::app);
readfile.open("data.dat");
std::cout << "REGISTER\n" << '\n';
std::cout << "Name: ";
std::cin>>name;
std::cout << "Password: ";
std::cin>>password;
while(getline(readfile,temp)){
  std::stringstream ss(temp);
  ss>>dbname>>dbpassword;
}
if(dbname==name){
  std::cout << "NAME ALREADY TAKEN" << '\n';
  goto reg;
}
else{
  writefile<<name<<" "<<password<<'\n';
}

writefile.close();
}

int main() {
    std::cout << "WELCOME TO SIMPLE LOGIN & REGISTER SYSTEM\n\n";
    std::cout << "[1]Login" << '\n';
    std::cout << "[2]Register" << '\n';
    std::cout << "[3]Exit" << '\n';
    std::cout << "Your Choice: ";
    int choice;
    std::cin>>choice;
    system("cls");
    switch(choice){
      case 1: {
        Login();
        break;
      }
      case 2: {
        Register();
        break;
      }
      case 3: {
        return 0;
      }
      default:{
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Wrong input Try Again" << '\n';
      }
    }
  return 0;
}
