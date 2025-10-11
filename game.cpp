/*
	Richard Phan

	This program is a simple, turn based JRPG game 
*/

#include <iostream>
#include <string>
using namespace std;

string playerName;
int playerExperience = 0; //to track exp gain

//Function Prototypes
void displayTitle();
void displayIntro();
void CharacterStats(const string& playerName, int characterChoice);
void SelectCharacter();
void DisplaySkills(int characterChoice);
void Store();
void Inventory();

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
void selectClass() {
	int characterChoice;

	while (true) {
		cout << "What is your name?: _______";
		cin >> playerName;

		if (playerName.length() < 8) {
			break;
		}
		else {
			cout << "Hey! Were you dozing off? (Enter a name with less than 8 characters)" << endl;
		}
	}
	
	cout << "\n Welcome " << playerName << "! Nice to meet you! Now, " << endl;\
	cout << "1: Hero\n";
	cout << "2: Warrior\n";
	cout << "3: Mage\n";
	cin >> characterChoice;

	//Call character stats based on choice
	CharacterStats(playerName, characterChoice);
	cout << endl;
		

}
//Class skills
void CharacterStats(const string& playerName, int characterChoice) {
	int PlayerHp,
		PlayerStr,
		PlayerMana;

	switch (characterChoice) {
	case 1: //Hero
		PlayerHp = 150;
		PlayerStr = 95;
		PlayerMana = 120;
		cout << playerName << ", here are your character stats as the (Lv.5) Legendary Hero: \n\n";
		break;
	case 2: //Warrior
		PlayerHp = 350;
		PlayerStr = 100;
		PlayerMana = 30;
		cout << playerName << ", here are your character stats as the (Lv.5) Warrior: \n\n";
	case 3: //Mage
		PlayerHp = 100;
		PlayerStr = 30;
		PlayerMana = 250;
		cout << playerName << ", here are your character stats as the (Lv.5) Mage: \n\n";
	default:
		PlayerHp = 80;
		PlayerStr =50;
		PlayerMana = 50;
		cout << "Greetings, " << playerName << " Hm. It seems none of these roles suit you." << endl;
		cout << "SYSTEM NOTICE: You are assigned as a classless adventurer!\n\n";
		cout << "WARNING: A classless adventurer is unable to learn special skills \n\n";
	}
	cout << "Health: " << PlayerHp << "Strength: \n" << PlayerStr << "Mana:\n" << PlayerMana << "\n\n";
	Mainmenu(); //Main battle sequence FIXME
}

//Skills for each class 
void Skills() {
	int playerClass;

	cout << "Which class skills would you like to see?" << endl;
	cout << "1: Hero\n";
	cout << "2: Warrior \n";
	cout << "3: Mage \n";
	cin >> playerClass;

	//Make into switch statement?
	if (playerClass == 1) {
		cout << "- Holy Blade\n";
		cout << "- Blessing of the Ancients\n";
		cout << "- Speical Skill: Chosen One\n";
	}
	else if (playerClass == 2) {
		cout << "- Dual Strike\n";
		cout << "- Battle Cry\n";
		cout << "- Special Skill: Berserker's Soul";
	}
	else if (playerClass == 3) {
		cout << "- Firebolt\n";
		cout << "- Ice Cannon\n";
		cout << "- Monster Reborn\n";
	}
	else {
		cout << "Invalid character choice! \n";
	}

	cout << endl;
}

//Store w purchasable items
void Store() {
	cout << "Welcome to the Item Shop! \n\n";
	//FIXME: make shop open at level 10
	cout << "SYSTEM: You have not met the requirements to use this feature \n\n";
	cout << "Sorry, but the store is closed for rennovations.\n";
	cout << "Check back later for new items! \n\n";
	Mainmenu();
}

//Inventory
//FIXME add feature to make items consumable
//add feature to create item description (class?)
void Inventory() {
	cout << "Your bag contains a 'World Map' received from home! (It wouldn't hurt to call home sometime...\n";
	cout << "You found the 'Savior's Crest' and the 'Mysterious Stone!'" << endl;
	cout << "Wow! There's also x5 'Smoke Balls' in here! How lucky!" << endl;
	cout << "But wait, there's more! You found 3 sandwiches! (Thanks mom!)" << endl;
	cout << endl;
	Mainmenu();
}

//Simulates battle system
void Wilderness() {



}

//function which displays the main menu
//Allows user to go into the wilderness, visit the item shop, check inventory
//view skills, and quit the experience.
void Mainmenu() {



}