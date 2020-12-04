#include "KnightRpgUi.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void Ui::enviroWaitTimer( int _time) {
	Sleep(_time);
}


void Ui::startImg() {
	cout << endl;
	cout << endl;
	cout << "       /|                                                                      " << endl;
	cout << "      / |                                                                      " << endl;
	cout << "     /| |                                                                      " << endl;
	cout << "    / | |          @@@ @@@ @@@@@@@  @@   @@@    @@   @@ @@@@@@@                " << endl;
	cout << "    | | |          @@ @@   @@  @@@     @@@  @@  @@   @@   @@                   " << endl;
	cout << "    | | |          @@@@    @@  @@@  @@ @@       @@@@@@@   @@                   " << endl;
	cout << "    | | |          @@ @@   @@  @@@  @@ @@  @@@  @@   @@   @@                   " << endl;
	cout << "    | | |          @@ @@@  @@  @@@  @@  @@@@    @@   @@   @@                   " << endl;
	cout << "    | | |        -------------------------------------------------------       " << endl;
	cout << "    | | |                                                                      " << endl;
	cout << "    | | |                                @@@@@@   @@@@@@    @@@                " << endl;
	cout << "    | | |                                @@   @@  @@   @@ @@@  @@              " << endl;
	cout << "  __| | |__                              @@@@@@@  @@@@@@  @@                   " << endl;
	cout << " |__|_|_|__|                             @@    @@ @@      @@  @@@              " << endl;
	cout << "     | |                                 @@    @@ @@       @@@@                " << endl;
	cout << "     | |                             -----------------------------------       " << endl;
	cout << "     | |                                                                       " << endl;
	cout << "     (_)                                                                       " << endl;
	cout << endl;
	cout << endl;
	enviroWaitTimer(2500);
	system("cls");
}

void Ui::mainPageCharacter() {
	system("cls");
	cout << R"(
         /|                                                                      
        / |                                                                      
       /| |                                                                      
      / | |                ____________________________________
      | | |               @                                    @
      | | |                |         Age old news daily       |
      | | |                |                                  |
      | | |                |     1) Create your Charcter--    |
      | | |                |                                  |
      | | |                |     2) Instructions----------    |              
      | | |                |     -------------------------    |
      | | |                |                                  |
    __|_|_|__              |     3) Quit -----------------    |
   |__|_|_|__|             |     -------------------------    |                       
       | |                 |     -------------------------    |                               
       | |                 |                                  |                  
       | |                @ __________________________________ @                                                       
       (_)
)";
	cout << endl;
	cout << endl;
}

void Ui::mainPage() {
	system("cls");
	cout << R"(
         /|                                                                      
        / |                                                                      
       /| |                                                                      
      / | |                ____________________________________
      | | |               @                                    @
      | | |                |         Age old news daily       |
      | | |                |                                  |
      | | |                |     1) Start Adventure-------    |
      | | |                |                                  |
      | | |                |     2) Instructions----------    |              
      | | |                |     -------------------------    |
      | | |                |                                  |
    __|_|_|__              |     3) Quit -----------------    |
   |__|_|_|__|             |     -------------------------    |                       
       | |                 |     -------------------------    |                               
       | |                 |                                  |                  
       | |                @ __________________________________ @                                                       
       (_)
)";
	cout << endl;
	cout << endl;
}
void Ui::dayEnd() {
	system("cls");
	cout << R"(
         /|                                                                      
        / |                                                                      
       /| |                                                                      
      / | |                ____________________________________
      | | |               @                                    @
      | | |                |         Age old news daily       |
      | | |                |                                  |
      | | |                |     1) Continue--------------    |
      | | |                |                                  |
      | | |                |     2) Instructions----------    |              
      | | |                |     -------------------------    |
      | | |                |                                  |
    __|_|_|__              |     3) Quit -----------------    |
   |__|_|_|__|             |     -------------------------    |                       
       | |                 |     -------------------------    |                               
       | |                 |                                  |                  
       | |                @ __________________________________ @                                                       
       (_)

                 ________________________________________________________
)";
	cout << endl;
	cout << endl;
}

void Ui::enviroCave() {
	system("cls");
	cout << R"(
--------------------------------------------------------------------------------------
@               ... .. ... ...  _______/\__ ...........    ...                      @       
@      .. .. .. .......   ... ./        |_| \... .. . .. .  . .. .     A Dark       @           
@    ...... ... .. . . ....  ..|        |_|  \. . . . . .. . . .....      Dark      @            
@      ..... .. ........ .. .../        |_|   |.... .. .. . . . .. .         Cave   @             
@     __________________________________/ \__| .... ... .. ... .                    @     
--------------------------------------------------------------------------------------
)";
	cout << endl;
	cout << endl;
}

void Ui::enviroMountain() {
	system("cls");
	cout << R"(
-------------------------------------------------------------------------------------
@       /    \____       /\                    /  \                                 @
@      /      __  \     /  \___               /    \____/\           The            @  
@     /      /  \  \   /       \__   _/\     /         /  \             Mountain    @
@    /      |    \  \ /           \ /   \   /         /    \                  Pass  @
@   /       /     |  \             \     \ /         /      \                       @
-------------------------------------------------------------------------------------
)";
	cout << endl;
	cout << endl;
}
void Ui::enviroBoat() {
	system("cls");
	cout << R"(
------------------------------------------------------------------------------------
@                                  /_____||______\                 Out on          @
@                              __________||___________                 the boat    @
@      ..... .....      .......\                     /                             @
@  '''''''''''''''''''''''''''''\___________________/''''''''''''''''''''''''''''''@  
@               '''''''''''''''''''''''''''''''''''''''''''''''''''          ''''  @
-------------------------------------------------------------------------------------
)";
	cout << endl;
	cout << endl;
}
void Ui::enviroTheVillage() {
	system("cls");
	cout << R"(
-----------------------------------------------------------------------------------
@ __ \                    __________              ______| |__                     @
@ _|  \                  /          \            /           \       The          @
@  __ |                 /            \          |  ____   ____|        Village    @
@ |__|| !          !    | |  |       |  !!      |  |. |   |__||                   @
@ . . | .. . . . . . . .| |  |       |. . .. . .|  |  |       | ..    ...   ...   @
-----------------------------------------------------------------------------------
)";
	cout << endl;
	cout << endl;
}
void Ui::enviroForrest() {
	system("cls");
	cout << R"(
---------------------------------------------------------------------------------
@    \#####\  \###########\  \#######\  /###\   \#####/######/                 @
@     \| |#/   \||/  \|  |/   \######/  \| |/   |   |/ \|  |/     The          @
@    --| \      ||    |  |     \|  |/    | |    |   |-  | /|        Forrest    @
@     _|  |--   ||-   |  \--    |  |-   -| |  0-| \ |   |  |                   @
@    /    |     ||    |   |     |  |     |  \   |   |\ /  / \ --------------   @
---------------------------------------------------------------------------------
)";
	cout << endl;
	cout << endl;
}

void Ui::instructions() {
	system("cls");
	cout << R"(                                                               
          ______________________________________________________
         @                                                      @
         |       ----     Instructions  -------------           |
         |                                                      |
         |            1.   Death is not the end of the game.    |
         |                                                      |
         |            2.   Follow displayed instructions.       |
         |                                                      |
         |            3.   This is a simple text game.          |
         |                                                      |
         |            4.   enter numbers when asked for         |
         |                 numbers                              |
         |                                                      |
         |            4.   enter text when asked for            |
         |                 text                                 |
         @_____________________________________________________ @                                                       
   
)";
	system("pause");
}



	void Ui::enviroImproveSelf() {
		cout << endl;
		cout << R"(                                                               
          ______________________________________________________
         @                                                      @
         |    -------     Planning your day     -----           |
         |                                                      |
         |            1.   work for coin     ------------       |
         |            -----------------------------------       |
         |                                                      |
         |            2.   improve your max health ------       |
         |            -----------                               |
         |                                                      |
         |            3.   Train up you attacks  --------       |
         |            ---------------------                     |
         |                                     Page 2 --        |
         @_____________________________________________________ @                                                       
   
)";
		cout << endl;

}

	void Ui::enviroDifficulty() {
		cout << endl;
			cout << R"(                                                               
          ______________________________________________________
         @                                                      @
         |    -------     Planning your day     -----           |
         |                                                      |
         |            1.   Improve Self     ------------        |
         |            ---------------------------------         |
         |                                                      |
         |            2.   benefit village  ------------        |
         |            --------------------------                |
         |                                                      |
         |            3.   Increase the honour of your          |
         |            -----village--------                      |
         |                                                      |
         @_____________________________________________________ @                                                       
   
)";
			cout << endl;
	}