#include "character.h"
#include "KnightRpg.h"




//-------SET/GET-------------
void Character::setNamePlayer(string _playerName) {
	name = _playerName;
}
string Character::getName() {
	return name;
}
void Character::setHealth(int hp) {
	health = hp;
}
void Character::takeDamage(int hp) {
	health = health - hp;
}
int Character::getHealth() {
	return health;
}
void Character::setDamage(int dmg) {
	damage += dmg;
}

int Character::getDamage() {
	return damage;

}
void Character::setDefense(int def) {
	defense = def;
}
int Character::getDefense() {
	return defense;
}
void Character::setCoin(int c) {
	coin = c;
}

void Character::addCoin(int c) {
	coin += c;
}
int Character::getCoin() {
	return coin;
}

void Character::addHealth(int h) {
	health += h;
}
void Character::addDamage(int d) {
	damage += d;
}
// -------------------------

void Character::displayStatsPlayer(){
	cout << "Character name: " << name << endl;
	cout << "Health: " << health << "  " << "coin: " << coin << endl;
	cout << "Damage: " << damage << endl;
	cout << "Defense: " << defense << endl;
	

}

void Character::displayStatsPlayer2() {
	cout << "Character name: " << name;
	cout << " / Health: " << health; 
	cout << " / coin: " << coin;
	cout << " / Damage: " << damage;
	cout << " / Defense: " << defense;


}


// ----------------------CONSTRUCTORS----------------------
Character::Character() { 
	name = "default";
	health = 200;
	damage = 10;
	defense = 10;
	coin = 0;
}
Character::Character(string _name, int _health, int _damage) {
	name = _name;
	health = _health;
	damage = _damage;
	defense = 0;
	coin = 0;
}
