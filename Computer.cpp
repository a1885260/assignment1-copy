#include "Computer.h"

Computer::Computer() {
    this->name = "Computer";  // Initalise Computer's name when object is instantiated
    this->move = "R";         // Initalise Computer's move when object is instantiated
}     

char Computer::makeMove() {
    return this->move;        // return the move made by the computer when makeMove member function is called
}

string Computer::getName() {
    return this->name;        // return the name of the computer when makeMove member function is called
}                
