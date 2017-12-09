/*
 ** Author: Majed Alshaikhhussain
 ** Cyrus CryptoMachine 
 ** Takes sentences and encrypt them in form of numbers by passing them through
 **	multistage rotors or takes encrypted massage and decrypt it back to a readable form
 */

#include<fstream>
#include<sstream>
#include<iostream>
#include "Machine.h"
#include <string>
using namespace std;

//to determine if the user want to save messages eaither decrypted or
// encrypted to a file or not
void createFile(string &ui, char &cf, ofstream &of);

int main(){
  string userInput;	//to hold the user statment to be encrypted
  char createFlage;  //to hold the value of wither the user want to save to a file
  char chooseFunction; //decrypte or encrypte
  ofstream outFile;  //define output stream
  char flow = ' ';	//to hold the user wish to eathier countinue or done
  Machine cryptoMachine;	//to hold the sequence of rotors that will be used in encryption
  cout<<"*********Welcome to Cyrus CryptoMachine*********"<<endl; //welcoming message
  cout<<"This program takes sentences entered by the user"<<endl;
  cout<<"     and encrypt them in form of numbers"<<endl;
  cout<<"or takes encrypted message in form of numbers "<<endl;
  cout<<"      and decreypt it back to a message"<<endl;
  cout<<" by passing them through multistage rotors"<<endl;
  cout<<"---------------------------------------------"<<endl<<endl;
  //determine what function needed by the user
  do{
    cout<<"Do you wish to Encrypte or Decrypte (enter E for Encrypte / D for Decrypte)?"<<endl;
    cin>>chooseFunction;
  }while(chooseFunction!='E' && chooseFunction!='e' && chooseFunction!='D' && chooseFunction!='d');
  //determaine if the message needs to be saved to a file or printed on the commandline
  createFile(userInput, createFlage, outFile);
  while(1){
    if(chooseFunction=='E' or chooseFunction=='e'){
      cout<<"Please enter a statment then hit enter"<<endl;   //ask the user to enter a statment
      getline(cin,userInput);	//get statment from the user
      //go through each character in the statment and encrypte it with the pre-defined rotors
      for(int i=0;i<userInput.length();i++){
        if(createFlage=='y' || createFlage=='Y') //eathier output to file or commandline
          outFile<<cryptoMachine.encrypt(userInput[i])<<" ";
        else
          cout<<cryptoMachine.encrypt(userInput[i])<<" ";
      }
    }
    else{
      cout<<"Please enter codded message and hit enter(only numbers)"<<endl;
      char ch; 
      getline(cin,userInput);
      long temp;
      stringstream ssin(userInput); //parsing the string by the seperated spaces
      while (ssin >> temp){
        if(createFlage=='y' || createFlage=='Y')
          outFile<< cryptoMachine.decrypt(temp);
        else
          cout << cryptoMachine.decrypt(temp);
      }
    }
    //ask the user if wish to continue encrypting or not
    while((flow!='Y') && (flow!='N')){
      cout<<endl<<"Do you want to continue Y/N?"<<endl;
      cin>>flow;
    }
    //breaking out of the infinit loop if the user is done
    if(flow == 'N' || 'n')
      break;
    flow = ' ';	//if user not done then reset the flow control to nothing
    cin.ignore();	//ignore trailing from operator >>
  }
  return 0;
}

void createFile(string &ui, char &cf, ofstream &of){
  cout<<"Do you want to create new file for your message Y/N?"<<endl;
  cin>>cf;
  if(cf == 'Y' || cf == 'y'){
    cout<<"Enter a name for the file without the extension: "<<endl;
    cin>>ui;
    ui.append(".txt");
    of.open(ui.c_str());
  }
  cin.ignore();	//ignore trailing from operator >>
}
