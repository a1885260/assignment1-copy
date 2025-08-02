#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "Player.h"

#include <iostream>
using namespace std;

int main () {

    string name;
    int playerMove; 

    cout << "Enter Name:" << endl;
    cin >> name;

    Computer c1;
    Human p1(name);
    Referee ref1;
    Player* winner = ref1.refGame(&p1, &c1);

    if (winner == nullptr) {
        cout << "It's a tie!" << endl;
    } else {
        cout << winner->getName() << "Wins" << endl;
    }

}
