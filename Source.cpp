#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
void mainMenu();
void option();
void bomberman();
void Halo();
void nba();
void fortnite();
void Madden();
void coc();
double account();
int choice;
double cost, amount;
char response;

int main() {
	string username, password;
	cout << "Hello, Welcome to Game Center. In order to access games please enter a username and password\n";
	cout << "Username: "; 
	getline(cin,username);
	cout << "Password: ";
	getline (cin,password);
	mainMenu();
	option();
	system("pause");
	return 0;
}

void mainMenu() {
	cout << "\nMain Menu\n";
	cout << "\t\tAll Games\n\t\t--------\n";
	cout << "1. Bomberman\t2. Halo\t3. NBA 2K20\n4. Fortnite\t5. Madden 2020\t6. Clash of Clans\n";
}

void option() {
	cout << "Choose the number of the game that you want: ";
	cin >> choice; 
	switch (choice) {
	case 1:  bomberman();
		break;
	case 2:  Halo();
		break;
	case 3:  nba();
		break;
	case 4:  fortnite();
		break;
	case 5:  Madden();
		break;
	case 6:  coc();
		break;
	default:
		cout << "Incorrect input, enter again\n";
		cin >> choice;
	}
}

void bomberman() {
	cost = 10.99;
	cout << "Bomberman costs $10.99 to buy.\nDo you Wish to pay for it(y/n)? ";
	cin >> response;
	switch (response) {
	case 'Y':
	case 'y':
		account();
		break;
	case 'N':
	case 'n':
		cout << "Transaction cancelled\nWould you like to go back to the last page(y/n)?";
		cin >> response;
		if (response == 'Y' || response == 'y') {
			option();
		}
		exit(0);
		break;
	default:
		cout << "Not a correct response please enter 'y' or 'n' for your response\n";
		cin >> response; 
	}
}

void Halo() {
	cost = 15.99;
	cout << "Halo costs $15.99 to buy.\nDo you Wish to pay for it(y/n)? ";
	cin >> response;
	switch (response) {
	case 'Y':
	case 'y':
		account();
		break;
	case 'N':
	case 'n':
		cout << "Transaction cancelled\nWould you like to go back to the last page(y/n)?";
		cin >> response;
		if (response == 'Y' || response == 'y') {
			option();
		}
		exit(0);
		break;
	default:
		cout << "Not a correct response please enter 'y' or 'n' for your response\n";
		cin >> response;
	}
}

void nba() {
	cost = 30.99;
	cout << "NBA 2K20 costs $30.99 to buy.\nDo you Wish to pay for it(y/n)? ";
	cin >> response;
	switch (response) {
	case 'Y':
	case 'y':
		account();
		break;
	case 'N':
	case 'n':
		cout << "Transaction cancelled\nWould you like to go back to the last page(y/n)?";
		cin >> response;
		if (response == 'Y' || response == 'y') {
			option();
		}
		exit(0);
		break;
	default:
		cout << "Not a correct response please enter 'y' or 'n' for your response\n";
		cin >> response;
	}
}

void fortnite() {
	cost = 5;
	cout << "Fortnite costs $5 to buy.\nDo you Wish to pay for it(y/n)? ";
	cin >> response;
	switch (response) {
	case 'Y':
	case 'y':
		account();
		break;
	case 'N':
	case 'n':
		cout << "Transaction cancelled\nWould you like to go back to the last page(y/n)?";
		cin >> response;
		if (response == 'Y' || response == 'y') {
			option();
		}
		exit(0);
		break;
	default:
		cout << "Not a correct response please enter 'y' or 'n' for your response\n";
		cin >> response;
	}
}

void Madden() {
	cost = 25.99;
	cout << "Madden costs $25.99 to buy.\nDo you Wish to pay for it(y/n)? ";
	cin >> response;
	switch (response) {
	case 'Y':
	case 'y':
		account();
		break;
	case 'N':
	case 'n':
		cout << "Transaction cancelled\nWould you like to go back to the last page(y/n)?";
		cin >> response;
		if (response == 'Y' || response == 'y') {
			option();
		}
		exit(0);
		break;
	default:
		cout << "Not a correct response please enter 'y' or 'n' for your response\n";
		cin >> response;
	}
}

void coc() {
	cost = 0;
	cout << "Clash of Clans is free.\nWould You like to purchase this(y/n)?";
	cin >> response;
	switch (response) {
	case 'Y':
	case 'y':
		cout << "Game has been purchased!\nWould you like to purchase another Game(y/n)?";
		cin >> response;
		if (response == 'Y' || response == 'y') {
			option();
		}
		else {
			cout << "Thank you for using game center\n";
			exit(0);
		}
	case 'N':
	case 'n': 
		cout << "Transaction cancelled\nWould you like to go back to the last page(y/n)?";
		cin >> response;
		if (response == 'Y' || response == 'y') {
			option();
		}
		exit(0);
		break;
	default:
		cout << "Not a correct response please enter 'y' or 'n' for your response\n";
		cin >> response;
	}
}

double account() {
	if (amount == 0) {
		cout << "There's no money in your account. You will need to add some if you want to purchase this game.\n";
		cout << "Enter amount of money you wish to deposit into account $";
		cin >> amount;
	}
	double amountLeft = amount - cost;
	amount = amountLeft;
	while (amount <0) {
		cout << "You cannot afford this game. Would you like to add more money into the account(y/n)? ";
		cin >> response;
		if (response == 'Y' || response == 'y') {
			cout << "Enter amount you want to add $";
			cin >> amount;
		}
		amount += amountLeft;
	}
	cout << "You now have $" << amount << " in your account.\n";
	cout << "Do you wish to purchase another game(y/n)? ";
	cin >> response; 
	switch (response) {
	case 'Y':
	case 'y':
		option();
		break;
	case 'N':
	case 'n':
		cout << "Thank you for using game center\n";
		exit(0);
		break;
	default:
		cout << "Not a correct response please enter 'y' or 'n' for your response\n";
		cin >> response;
	}
	return amountLeft; 
}

