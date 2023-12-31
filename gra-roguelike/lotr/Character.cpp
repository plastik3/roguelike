#include "Character.h"

Character::Character(){
    _row = 0;
    _column = 0;
}

/*void Character::characterInit(std::string name, int ego, int chances){
    _name = name;
    _ego = ego;
    _chances = chances;
}*/

void Character::lostBattle() {
    _chances--;
    cout << "Emma didn't manage to seduct this gentleman." << endl << "Chances left: " << _chances << endl;
}

void Character::wonBattle() {
    _ego++;
    cout << "Congratulations! Emma won this gentleman's heart! Her EGO grew!" << endl << "EGO points: " << _ego << endl;
}

void Character::displayStats() {
    cout << "Chances: " << _chances << endl;
    cout << "EGO: " << _ego << endl;
}

Character::Character(int manipulation, int charisma, int intelligence, int charm, int ego, int chances) : Entity(
        manipulation, charisma, intelligence, charm), _ego(ego), _chances(chances) {}

