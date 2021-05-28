#include <iostream>
#include <sstream>
#include <fstream>
#include <chrono>
std::ofstream outf;
std::ifstream inf;

void showAllBooks(){
inf.open("data.dat");
std::string idBook="7",titleBook,authorBook,dateBook;
while(1){
      getline(inf,idBook);
      if(idBook=="\0")break;
      std::cout<<"\n\nBook Id: "<<idBook<<"\n";
      getline(inf,titleBook);
      std::cout<<"Book Title: "<<titleBook<<"\n";
      getline(inf,authorBook);
      std::cout<<"Book Author: "<<authorBook<<"\n";
      getline(inf,dateBook);
      std::cout<<"Book Date Published: "<<dateBook<<"\n\n";

}

inf.close();
}

void addBooks(){
  system("cls");
  auto idBook=  std::chrono::system_clock::now().time_since_epoch().count();
  idBook=idBook/36000000;
  std::string titleBook, authorBook, dateBook;
  std::cin.ignore();
  std::cin.clear();
  std::cout<<"Title of the book: ";
  getline(std::cin,titleBook);

  std::cout<<"Name of the Author: ";
  getline(std::cin,authorBook);

  std::cout<<"Date Published: ";
  getline(std::cin,dateBook);

  std::string temp;
  inf.open("data.dat");
  outf.open("temp.dat", std::ios::app);
  while(getline(inf,temp)){
    outf<<temp<<"\n";
  }
  outf<<idBook<<"\n"<<titleBook<<"\n"<<authorBook<<"\n"<<dateBook<<"\n";
  outf.close();
  inf.close();
  remove("data.dat");
  rename("temp.dat","data.dat");
}

void removeBooks(){
  system("cls");

  std::string titleBook, authorBook, dateBook;
  std::cin.ignore();
  std::cin.clear();
  showAllBooks();
  std::string temp,idBook,dbidBook,dbtitleBook,dbauthorBook,dbdateBook;
  std::cout<<"Please Enter the ID of the Book: ";
  std::cin>>idBook;
  inf.open("data.dat");
  outf.open("temp.dat");
while(1){
    getline(inf,dbidBook);
    getline(inf,dbtitleBook);
    getline(inf,dbauthorBook);
    getline(inf,dbdateBook);
    if(dbidBook==idBook)continue;
    else if(dbidBook=="\0")break;
    else{
      outf<<dbidBook<<"\n";
      outf<<dbtitleBook<<"\n";
      outf<<dbauthorBook<<"\n";
      outf<<dbdateBook<<"\n";
    }

  }

  outf.close();
  inf.close();
  remove("data.dat");
  rename("temp.dat","data.dat");
}
int main(){
  main:
std::cout<<"WELCOME TO LIBRARY MANAGER IN C++\n\n";
std::cout<<"[1] Show All Books";
std::cout<<"\n[2] Add Books";
std::cout<<"\n[3] Remove Books";
std::cout<<"\n[4] Exit";
int choice;
std::cout<<"\nYour Choice: ";
std::cin>>choice;
switch(choice){
  case 1: {
    showAllBooks();
    break;
  }
  case 2: {
    addBooks();
    break;
  }
  case 3: {
    removeBooks();
    break;
  }
  case 4: {
    return 0;
  }
  default: {
    std::cin.clear();
    std::cin.ignore();
    std::cout<<"\n\n\n WRONG INPUT PLEASE TRY AGAIN\n\n";
    system("cls");
    system("pause");
    goto main;
    break;
  }
}
}
