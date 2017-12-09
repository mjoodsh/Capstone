// Author: Majed Alshaikhhussain

#include "Machine.h"
#include<fstream>

//read the value of the rotors from a pre-written file
Machine::Machine(){
  ifstream inFile;
  inFile.open("Rotor.txt");
  string str;
  int m,a;
  while(!inFile.eof()){
    inFile>>m;
    inFile.ignore();
    inFile>>a;
    inFile.ignore();
    Rotor r(m,a);
    rotors.push_back(r);
  }
}

//encrypte a charachter by passing it through a sequence of the readed rotors
long Machine::encrypt(char c){
  long n;
  n=(long)c;
  for(int i=0;i<rotors.size();i++){
    n=rotors[i].encode(n);
  }
  return n;
}

//decrypte a charachter by passing it through the reverse sequence of the readed rotors
char Machine::decrypt(long n){
  char c;
  for(int i=rotors.size()-1;i>=0;i--){
    n=rotors[i].decode(n);
  }
  c=(char)n;
  return c;
}
