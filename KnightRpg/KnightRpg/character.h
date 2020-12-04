#pragma once
#include <string>

using namespace std;

#ifndef CHARACTER
#define CHARACTER


class Character {
private:
	string name;
	int health;
	int damage;
	int defense;
	int coin;

public:
	Character();
	Character(string _name, int _health, int _damage);
	
	void setNamePlayer(string _playerName);
	string getName();
	void setHealth(int hp);
	int getHealth();
	void setDamage(int dmg);
	int getDamage();
	void setDefense(int def);
	int getDefense();
	void setCoin( int c);
	void addCoin(int c);
	int getCoin();
	void displayStatsPlayer();
	void takeDamage(int hp);
	void displayStatsPlayer2();
	void addHealth(int h);
	void addDamage(int d);
};







#endif // !CHARACTER
