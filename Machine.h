// Author: Majed Alshaikhhussain

#ifndef MACHINE_H
#define MACHINE_H
#include <vector>
#include "Rotor.h"
using namespace std;


class Machine{
  private:
    vector<Rotor> rotors;  //hold an arry of rotors

  public: 
    Machine();
    long encrypt(char c); //encrypt the message through the sequence of rotors
    char decrypt(long n); //decrypt the message through the reverse sequence of rotors
};
#endif
