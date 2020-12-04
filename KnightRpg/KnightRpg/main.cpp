#include <iostream>
#include <string>
#include "KnightRpg.h"
#include "time.h"


using namespace std;




void main() {


	srand(time(NULL));  // random seed
	
	PlayGame *game = new PlayGame();
	bool keepRunning = true;
	
	while (keepRunning) {
		game->intro();
		game->mainMenu(&keepRunning);
		if (keepRunning == 0) {
			break;
		}
		/*cout << endl;
		cout << keepRunning << endl;
		cout << "if above statement is false i should quit" << endl;*/
		game->playGameStart(&keepRunning);
		game->playGame(&keepRunning);
	}

	delete game;


	
}


