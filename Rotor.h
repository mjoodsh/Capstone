// Author: Majed Alshaikhhussain

#ifndef ROTOR_H
#define ROTOR_H

class Rotor{
  private:
    int multer;
    int adder;
  public: 
    Rotor(int m, int a); //constructor to initilize the variables
    int encode(int ch);  //perform the encode
    int decode(int i);  //perform the decode
};

#endif
