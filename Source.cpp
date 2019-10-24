#include <iostream>
using namespace std;


int main() {

	//declares variables						

	int bankPin;
	float b = 1000000;
	string Npass, Nuser;
	string Lpass, Luser;

	//Asks the user to create a new account and initializes new user and password variables

	cout << "What's good g welcome to dad's bank." << endl << "Since you are a new user please create an account." << "\n";
	cout << "User: ";
	cin >> Nuser;
	cout << "Password: ";
	cin >> Npass;

	cout << "Please Log in. " << endl;

try_again: // goto for the while loop.

//prompts the user for their username and password that they created.

	cout << "User: ";
	cin >> Luser;
	cout << "Password: ";
	cin >> Lpass;

	// if the login username/password and the new username/password do not match, have the user try again using goto. 

	while (Npass != Lpass || Nuser != Luser) {
		cout << "Invalid credentials. Please try again." << endl;

		goto try_again;
	}
	cout << "Welcome, " << Nuser << "!" << endl;

	//prompting the user to see if they want to make a bank pin
yes_No:

	char yesNo;
	cout << "Would you like to set a bank pin? [y] [n] ";
	cin >> yesNo;

	//Checks pin, and responds accordingly

	switch (yesNo) {
	case 'y':
	case 'Y':

		cout << "Please create a 4 digit PIN: ";
		cin >> bankPin;
	bank_Pin:
		while (bankPin < 1000 || bankPin > 9999) {
			cout << "Invalid Pin, Please try again.";
			goto bank_Pin;
			
		}

		// Has user re-enter the pin to confirm it

		int confirmPin;

	pin: // if/else statement goto for the pins not matching.

		cout << "Please re-enter your pin to confirm: ";
		cin >> confirmPin;
		if (bankPin == confirmPin) {
			cout << "Bank pin successfully created!" << endl;

		}
		else {
			cout << "Pins do not match" << endl;
			goto pin;
		}
		break;

		// if user does not want pin then it just skips out of the switch.

	case 'n':
	case 'N':

		break;

	default:
		cout << "Invalid Response." << endl;
		goto yes_No; // If user doesnt answer y/n for the bank pin.
	}

}
/* START DOING DEPOSIT / WITHDRAWL / BALANCE */





