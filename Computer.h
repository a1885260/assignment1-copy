#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class Computer : public Player {

    public:
        Computer();                     // Constructor
        char makeMove() override;       // Override inherited abstract member function 
        string getName() override;      // Override inherited abstract member function

};

#endif
