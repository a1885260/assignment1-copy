#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <iostream>
#include "Player.h"
using namespace std;

class Human : public Player {

    public:
        Human(); //default constructor, initialises name to human if no input is given
        Human(string playerName); //parameterised constructor, initalises player name to string input    
        char makeMove( ) override; //
        string getName( ) override;

};

#endif
