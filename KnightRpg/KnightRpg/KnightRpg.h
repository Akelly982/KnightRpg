#include <string>
#include <iostream>
#include "KnightRpgUi.h"
#include "userInput.h"
#include "character.h"
#include "time.h"

using namespace std;

#ifndef KNIGHTRPG_H
#define KNIGHTRPG_H


class  PlayGame {
private:
	int objectiveCounter = 0;   // counts objectives completed
	int impossible = 2000;      // <==== checked against coin 
	Ui enviro;
	userInput userChoice;
	Character *player = new Character();

public:
	PlayGame() {
		// empty constructor
	};

	int getObjectiveCounter();
	void setObjectiveCounter(int _counter);  
	void difficultySelector();
	void easyObjective();
	void mediumObjective();
	void hardObjective();
	void easy01();
	void easy02();
	void easy03();
	void medium01();
	void medium02();
	void hard01();

	
	//--------  below = game running stuff ------------
	
	void intro();
	void mainMenu(bool *_keepRunning);
	void playGame(bool *_keepRunning);
	void playGameStart(bool *_keepRunning);
	bool endGame();


};






#endif //KNIGHTRPG