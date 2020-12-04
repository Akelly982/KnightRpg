#include "KnightRpg.h"
#include "character.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;



// -------START GAME SEQUENCE-------------------

void PlayGame::intro() {
	enviro.startImg();
}
void PlayGame::mainMenu(bool *_keepRunning) {
	// mainPage + first intro loop (creating character)
	bool mainPage = true;
	while (mainPage) {
		int choice;
		enviro.mainPageCharacter();
		cout << " Your input: ";
		choice = userChoice.runUserChoice(3);
		if (choice == 1) {
			enviro.enviroTheVillage();									 
			string playerName = "Input your characters name:  ";
			playerName = userChoice.runUserChoice(playerName);   // set player name includes  string validation
			player->setNamePlayer(playerName);
			cout << endl;
			cout << "------ Starter Stats --------------" << endl;
			player->displayStatsPlayer();
			cout << "-----------------------------------" << endl;
			system("pause");
			mainPage = false;
		}
		else if (choice == 2) {
			enviro.instructions();
		}
		else if (choice == 3) {
			delete player;
			*_keepRunning = false;
			mainPage = endGame();
			
			
		}
	}
}





// --------PLAY GAME Start-----------------------

void PlayGame::playGameStart(bool *_keepRunning) {
	bool mainPage = true;
	while (mainPage) {
		int choice;
		enviro.mainPage();   // .mainpage has START GAME comment
		player->displayStatsPlayer2();
		cout << endl;
		cout << " Your input: ";
		choice = userChoice.runUserChoice(3);
		if (choice == 1) {
			difficultySelector();
			mainPage = false;            // exits after first mission contiuing to PLAY GAME SEQUENCE
		}
		else if (choice == 2) {
			enviro.instructions();
		}
		else if (choice == 3) {
			delete player;
			*_keepRunning = false;
			mainPage = endGame();

		}
	}
}

// --------PLAY GAME SEQUENCE-----------------------

void PlayGame::playGame(bool *_keepRunning) {
	bool mainPage = true;
	while (mainPage) {
		int choice;
		enviro.dayEnd(); 
		player->displayStatsPlayer2();
		cout << endl;
		cout << " Your input: ";
		choice = userChoice.runUserChoice(3);
		if (choice == 1) {
			difficultySelector();       
		}
		else if (choice == 2) {
			enviro.instructions();
		}
		else if (choice == 3) {				// only exits once user chooses to
			delete player;
			*_keepRunning = false;
			mainPage = endGame();
		}
	}
}







//------------END GAME--------------
bool PlayGame::endGame() {
	cout << "Thanks for playing" << endl;
	system("pause");
	return false;
}








//--------OBJECTIVES---------------------------

int  PlayGame::getObjectiveCounter() {
	return objectiveCounter;
}
void PlayGame::setObjectiveCounter(int _counter) {
	objectiveCounter += _counter;

}


//------------SELECT and Run------------------------------------

void PlayGame::difficultySelector() {
	enviro.enviroTheVillage();
	enviro.enviroDifficulty();
	//cout << "select your plan for your day    ( 1 = Improve Self \n 2 = Benefit Village \n 3 = Increase honour of the village)" << endl;
	int userInput = 0;
	userInput = userChoice.runUserChoice(3);
	if (userInput == 1) {
		easyObjective();
	}
	else if (userInput == 2) {
		mediumObjective();
	}
	else if (userInput == 3) {
		hardObjective();
	}
	


}

void PlayGame::easyObjective() {
	bool keepRunning = true;
	bool result = true;
	int selector;
	while (keepRunning) {
		enviro.enviroTheVillage();
		enviro.enviroImproveSelf();					// insert a improve self display
		cout << endl;
		cout << "your input: ";
		selector = userChoice.runUserChoice(3);
		if (selector == 1) {                      // if number run objective    
			easy01();    // increases coin
			keepRunning = false;
		}
		else if (selector == 2) {
			easy02();
			keepRunning = false;
		}
		else if (selector == 3) {
			easy03();
			keepRunning = false;
		}
	}
}

void PlayGame::easy01() {      
	int fishing = 0;
	int fishCought = 0;
	int profit = 0;

	cout << "Here is somthing easy for you to do" << endl;
	cout << player->getName() << " go out on the boat and collect so fish " << endl;
	cout << endl;
	cout << endl;
	system("pause");
	enviro.enviroBoat();
	// run fishing simulator
	for (int i = 0; i < 10; i++) {
		Sleep(1000);
		fishing = rand() % 100 + 1;
		if (fishing < 20) {
			cout << "you cought a Fish" << endl;
			fishCought += 1;
		}
		else if (fishing > 90) {
			cout << "you cought a Squid" << endl;
			fishCought += 1;
		}
		else {
			cout << " fishing........" << endl;
		}
	}
	cout << endl;
	cout << endl;
	cout << " you cought " << fishCought << " fish"<< endl;
	cout << " they are worth 3 coin each. " << endl;
	profit = fishCought * 3;
	player->addCoin(profit);
	cout << " current coin = " << player->getCoin() << endl;
	system("pause");
}  

void PlayGame::easy02() {  // increases health
	int eating = 0;
	int consumed = 0;
	int healthGain = 0;

	cout << player->getName() << " goes to the kitchen. " << endl;
	cout << " to find somthing to eat, making them health gains.." << endl;
	cout << endl;
	cout << endl;
	system("pause");
	enviro.enviroTheVillage();
	// run eating simulator
	for (int i = 0; i < 10; i++) {
		Sleep(700);
		cout << player->getName() << " consumes " << endl;
		eating = rand() % 10 + 1;   
		if (eating < 4) {
			cout << " Steak " << endl;
			consumed += 2;
		}
		else if (eating == 5) {
			cout << " Monster Meat" << endl;
			consumed += 1;
		}
		else if (eating == 6) {
			cout << " Monster Tenticle's" << endl;
			consumed += 1;
		}
		
		else if (eating > 9) {
			cout << " Calamari" << endl;
			consumed += 2;
		}
		else {
			cout << " not sure what to eat....." << endl;
		}
	}
	cout << endl;
	cout << endl;
	cout << " You are so full gaining 5kg in weight. " << endl;
	cout << " your health before eating: " << player->getHealth() << endl;
	healthGain = consumed * 2;
	player->addHealth(healthGain);
	cout << " current health after eating: " << player->getHealth() << endl;
	system("pause");
}

void PlayGame::easy03() {  // increases Dmg
	int eating = 0;
	int hitsTarget = 0;
	int damageGain = 0;

	cout << player->getName() << " goes to the kitchen. " << endl;
	cout << " to find somthing to eat, making them health gains.." << endl;
	cout << endl;
	cout << endl;
	system("pause");
	enviro.enviroTheVillage();
	// run eating simulator
	for (int i = 0; i < 10; i++) {
		Sleep(700);
		cout << player->getName() << " consumes " << endl;
		eating = rand() % 10 + 1;
		if (eating < 4) {
			cout << " Body slash " << endl;
			hitsTarget += 2;
		}
		else if (eating == 5) {
			cout << " leg stab" << endl;
			hitsTarget += 1;
		}
		else if (eating == 6) {
			cout << " shoulder tap" << endl;
			hitsTarget += 1;
		}

		else if (eating > 9) {
			cout << " head shot" << endl;
			hitsTarget += 2;
		}
		else {
			cout << " misses target....." << endl;
		}
	}
	cout << endl;
	cout << endl;
	cout << " You are drained after such vigorous training. " << endl;
	cout << " your damage before training: " << player->getHealth() << endl;
	damageGain = hitsTarget * 2;
	player->addHealth(damageGain);
	cout << " current damage after training: " << player->getHealth() << endl;
	system("pause");
}




void PlayGame::mediumObjective() {
	bool keepRunning = true;
	int selector = 0;
	while (keepRunning) {
		selector = rand() % 4 + 1;	              // goes from 0 - 10    ---   later to be used to select objective from medium
		if (selector == 1) {                      // if number run objective    
			medium01();
			keepRunning = false;
		}
		else if (selector == 2) {
			medium02();
			keepRunning = false;
		}
	}             
}

void PlayGame::medium01() {
	int randomNum = 0;
	bool keepRunning = true;

	//create an enemy rand    
	string n;
	int h;
	int d;

	srand(time(NULL));  // random seed

	while (keepRunning) {
		randomNum = rand() % 5 + 1;
		//cout << "this is the random num " <<randomNum << endl;
		if (randomNum == 1) {
			n = "Bear";
			h = 120;
			d = 5;
			keepRunning = false;
		}
		else if (randomNum == 2) { 
			n = "Mammoth";
			h = 200;
			d = 8;
			keepRunning = false;
		}
		else if (randomNum == 3) {
			n = "Big Spider";
			h = 50;
			d = 4;
			keepRunning = false;
		}
	}
	//create enemy
	Character *enemy = new Character(n, h, d);   // name health damage as inputs

	// run enviro
	enviro.enviroTheVillage();
	cout << endl;
	cout << player->getName() << " The village is running low on PRIME MEAT!!!!" << endl;
	cout << " YOU must go out on the hunt!!!!!! " << endl;
	system("pause");
	enviro.enviroMountain();
	cout << " you walk out into the mountains looking for Creatures" << endl;
	cout << " after some time you find a "<< enemy->getName() << endl;
	system("pause");
	while (enemy->getHealth() > 0 && player->getHealth() > 0) {
		enemy->takeDamage(player->getDamage());
		cout << enemy->getName() << " takes damage: " << player->getDamage() << "         " << enemy->getName() <<" health: " << enemy->getHealth() << endl;
		Sleep(500);
		player->takeDamage(enemy->getDamage());
		cout << player->getName()<<" takes damage: " << enemy->getDamage() << "         " << player->getName() <<" health: " << player->getHealth() << endl;
		Sleep(500);
	}
	cout << endl;
	cout << endl;
	if (player->getHealth() < 0) {
		cout << " you where knocked out" << endl;
		cout << "       Your head hurts " << endl;
		cout << " later a villager finds you and they draged" << endl;
		cout << " you back to the village" << endl;
		player->setHealth(10);
	}
	else {
		cout << player->getName() << " got MEAT for the village your reward is 25 coin" << endl;
		player->addCoin(25);

	}
	

	delete enemy;   // delete enemy dynamic memory (Enemy character)
	system("pause");
}

void PlayGame::medium02() {
	int randomNum = 0;
	bool keepRunning = true;

	//create an enemy rand    
	string n;
	int h;
	int d;

	srand(time(NULL));  // random seed

	while (keepRunning) {
		randomNum = rand() % 5 + 1;
		//cout << "this is the random num " << randomNum << endl;
		if (randomNum == 1) {
			n = "Swarm of snakes";
			h = 75;
			d = 3;
			keepRunning = false;
		}
		else if (randomNum == 2) {
			n = "Swarm of bats";
			h = 80;
			d = 5;
			keepRunning = false;
		}
		else if (randomNum == 3) {
			n = "Big Spider";
			h = 80;
			d = 4;
			keepRunning = false;
		}
	}
	//create enemy
	Character *enemy = new Character(n, h, d);   // name health damage as inputs

												 // run enviro
	enviro.enviroTheVillage();
	cout << endl;
	cout << player->getName() << " The village is running low on RAW MEAT!!!!" << endl;
	cout << " YOU must go out on the hunt!!!!!! " << endl;
	system("pause");
	enviro.enviroCave();
	cout << " you walk out from the village and find a Cave" << endl;
	cout << " after some time within the cave you find a " << enemy->getName() << endl;
	system("pause");
	while (enemy->getHealth() > 0 && player->getHealth() > 0) {
		enemy->takeDamage(player->getDamage());
		cout << enemy->getName() << " takes damage: " << player->getDamage() << "         " << enemy->getName() << " health: " << enemy->getHealth() << endl;
		Sleep(500);
		player->takeDamage(enemy->getDamage());
		cout << player->getName() << " takes damage: " << enemy->getDamage() << "         " << player->getName() << " health: " << player->getHealth() << endl;
		Sleep(500);
	}
	cout << endl;
	cout << endl;
	if (player->getHealth() < 0) {
		cout << " you where knocked out" << endl;
		cout << "       Your head hurts " << endl;
		cout << " later a villager finds you and they draged" << endl;
		cout << " you back to the village" << endl;
		player->setHealth(10);
	}
	else {
		cout << player->getName() << " got MEAT for the village your reward is 25 coin" << endl;
		player->addCoin(25);

	}


	delete enemy;   // delete enemy dynamic memory (Enemy character)
	system("pause");
}





void PlayGame::hardObjective() {
	bool keepRunning = true;
	int selector;
	while (keepRunning) {
	selector = rand() % 5 + 1;	              // goes from 0 - 10    ---   later to be used to select objective from hard
		if (selector == 1) {                      // if number run objective    
			hard01();
			// run player lost
			// else player won
			keepRunning = false;
		}
	}             
}

void PlayGame::hard01() {
	int randomNum = 0;
	bool keepRunning = true;

	//create an enemy rand    
	string n;
	int h;
	int d;

	srand(time(NULL));  // random seed

	while (keepRunning) {
		randomNum = rand() % 5 + 1;
		//  cout << "this is the random num " << randomNum << endl;   \\ -- use to display num generated for DEBUG
		if (randomNum == 1) {
			n = "Chimera";
			h = 400;
			d = 20;
			keepRunning = false;
		}
		else if (randomNum == 2) {
			n = "Centour";
			h = 400;
			d = 25;
			keepRunning = false;
		}
		else if (randomNum == 3) {
			n = "Medusa";
			h = 400;
			d = 20;
			keepRunning = false;
		}
	}
	//create enemy
	Character *enemy = new Character(n, h, d);   // name health damage as inputs

												 // run enviro
	enviro.enviroTheVillage();
	cout << endl;
	cout << player->getName();
	if (player->getCoin() > 100) {
		cout << " As one of the more experienced individuals of our tribe it is your duty to get us a \n beasts head as a trophy for our village " << endl;
		
	}
	else {
		cout << " As one of our newest tribe members it is your duty to prove yourself. \n retrieve a beasts head as a trophy for our village " << endl;
		
	}
	cout << " this will defidently prove the might of our tribe..." << endl;
	system("pause");
	enviro.enviroForrest();
	cout << " Into the forest you go with spear in hand to find your kill.... " << endl;
	cout << " you spot a " << enemy->getName() << " in the distance"<< endl;
	system("pause");
	while (enemy->getHealth() > 0 && player->getHealth() > 0) {
		enemy->takeDamage(player->getDamage());
		cout << enemy->getName() << " takes damage: " << player->getDamage() << "         " << enemy->getName() << " health: " << enemy->getHealth() << endl;
		Sleep(500);
		player->takeDamage(enemy->getDamage());
		cout << player->getName() << " takes damage: " << enemy->getDamage() << "         " << player->getName() << " health: " << player->getHealth() << endl;
		Sleep(500);
	}
	cout << endl;
	cout << endl;
	if (player->getHealth() <= 0) {
		cout << " you where knocked out" << endl;
		cout << "       Your head hurts " << endl;
		cout << " later a villager finds you and they draged" << endl;
		cout << " you back to the village" << endl;
		cout << " on your return the chief of the village finds you a disgraces \n you for your loss in battle " << endl;
		player->setHealth(10);
	}
	else {
		cout << player->getName() << " has returned with a mighty trophy for the village " << endl;
		player->addCoin(25);

	}


	delete enemy;   // delete enemy dynamic memory (Enemy character)
	system("pause");
}

