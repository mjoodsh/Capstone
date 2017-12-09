// Author: Majed Alshaikhhussain

#include "Rotor.h"

//initilize the variables when an instant is created
Rotor::Rotor(int m, int a): multer(m), adder(a){
}

//encode the character by multiply it with the multiplier
// then add it to the adder
int Rotor::encode(int ch){
  return ch*multer+adder;
}

//decode the character by subtracting the adder and then
// dividing by the multiplyer which is the reverse function
// of what we did when encoding
int Rotor::decode(int i){
  return (i-adder)/multer;    
}
