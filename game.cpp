/*
	Richard Phan

	This program is a simple, turn based JRPG game 
*/

#include <iostream>
#include <string>
using namespace std;

//Function Prototypes
void displayTitle();
void displayIntro();

int main() {
	//Welcome user
	displayTitle();
	//Introduce the game
	displayIntro();
	//ask for user name - const variable


	return 0;
}

//Functions

//Prints title of the game
void displayTitle() {
	cout << "===== Welcome to Chronicles of a Cursed Crown ===== " << endl << endl; //FIXME \n not registered by VS studio
}
//Welcome message
void displayIntro() {
	cout << "Hello Player!" << endl;
	cout << "You have been summoned to investigate the monster calamity plauging this world." << endl;
	cout << "As you embark on your journey, you'll encounter many different kinds of people, challenges, and enemies." << endl;
	cout << "Please start by entering your name and selecting your class: " << endl << endl;


}

//character class with variables HP, strength, MP

//Class skills

//Store w purchasable items

//function to mimick battle sequence (main function)