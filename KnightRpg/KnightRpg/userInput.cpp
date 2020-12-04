#include "userInput.h"
#include <string>
#include <ctype.h>
#include <cstring>







int userInput::runUserChoice(int _ammountOfChoicesNum) { // the number that goes into here defines the ammount of choices the user has either 2 or 3.
	bool keepRunning = true;
	bool result = false;
	while (keepRunning) {
		setUserChoice();
		if (_ammountOfChoicesNum == 2) {
			result = validateUserChoice2(userChoice);
			if (result) {
				keepRunning = false;
			}
		}
		else if (_ammountOfChoicesNum == 3) {
			result = validateUserChoice3(userChoice);
			if (result) {
				keepRunning = false;
			}
		}
		else {
			invalidUserChoice();
		}
	}
	return userChoice;
}
	
string userInput::runUserChoice (string _whatAreYouTryingToSet) {     // runUserChoice is an overloaded function    // input a string of what you want them to type
	bool keepRunning = true;
	bool result = false;
	while (keepRunning) {
		cout << _whatAreYouTryingToSet << " ";
		setUserChoiceStr();
		result = validateString(); {
			if (result) {
				keepRunning = false;
			}
		}
	}

	
	return userChoiceStr;
}


// get and set -------
int userInput::getUserChoice() {
	return userChoice;
}

void userInput::setUserChoice() {
	cin >> userChoice;
	
}

string userInput::getUserChoiceStr() {
	return userChoiceStr;
}

void userInput::setUserChoiceStr() {
	cin >> userChoiceStr;
}



// ---------Validation-------------


bool userInput::validateUserChoice3(int _userChoice) {
	// cout << " validate user choice 3" << endl; // Dbug assist
	if (_userChoice == 1) {
		return true;
	}
	else if (_userChoice == 2) {
		return true;
	}
	else if (_userChoice == 3) {
		return true;
	}
	else
		invalidUserChoice();
		return false;
}

void userInput::invalidUserChoice() {
	cout << "incorrect input try again" << endl;
}

bool userInput::validateUserChoice2(int _userChoice) {
	// cout << "validate user choice 2 entered" << endl;  // Dbug assist
	if (_userChoice == 1) {
		return true;
	}
	else if (_userChoice == 2) {
		return true;
	}
	else
		invalidUserChoice();
		return false;
}

bool userInput::validateString() {
	int size;
	size = userChoiceStr.size();
	for (int i = 0; i < size; i++) {
		if (ispunct(userChoiceStr[i])) {
			cout << " not allowed punct characters " << endl; //Dbug assist
			return false;
		}
		else if (isdigit(userChoiceStr[i])) {
			cout << " not allowed digit characters " << endl; //Dbug assist
			return false;
		}

	}
	return true;

}





	

