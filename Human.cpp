#include "Human.h"
#include "Player.h"
using namespace std;

Human::Human() {
    this->name = "Human";
}

Human::Human(string playerName) {
    this->name = playerName;
}

char Human::makeMove() {
    cout << "Enter move: ";
    cin >> this->move;
    cout << std::endl;

    if (move == 'R' || move == 'P' || move == 'S') {
        return this->move;
    } else {
        cout << "Invalid Move." << endl;
        exit(1);  // Terminates the program
    }
}

string Human::getName( ) {
    return this->name;
}
