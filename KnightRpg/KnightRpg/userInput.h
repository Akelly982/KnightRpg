#pragma once
#include <string>
#include <iostream>

using namespace std;


#ifndef USERCHOICE
#define USERCHOICE



class userInput {
private:
	int userChoice = 0;
	string userChoiceStr;
public:
	int runUserChoice(int _ammountOfChoicesNum); // the number that goes into here defines the ammount of choices the user get either 2 or 3.
	string runUserChoice(string _whatAreYouTryingToSet);     // runUserChoice is an overloaded function    // input a string of what you want them to type
	int getUserChoice();
	void setUserChoice();
	string getUserChoiceStr();
	void setUserChoiceStr();
	bool validateUserChoice3(int _userChoice);
	void invalidUserChoice();
	bool validateUserChoice2(int _userChoice);
	bool validateString();

};


#endif // !USERCHOICE