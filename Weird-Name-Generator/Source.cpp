#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "\t\t\tWelcome to the Name Generator!" << endl;
	cout << "\t\t\tFor all your alias needs!" << endl;

	string firstNames[] = {"Liam", "Noah", "Trevor", "Theo", "George", "Hamilton", "Christian", "Robert", "Rob", "William", "Pearson", 
	"John", "Riley", "Nick", "Sergio", "Andrew", "Jeff", "Alex", "James", "Nash", "York", "Dakota", "Simon", "Derek", "Rafeal", "Zander",
	"Brady", "Tyron", "Milton", "Isaiah", "Roshumelle", "Tziah", "Jevon", "Jalen", "Rick", "Coral", "Negan", "Dean", "Sam", 
	"Gabriel", "Lucifer", "Jesus"};

	string lastNames[] = { "Money", "Despicable", "Cowboy", "Astronaut", "Teacher", "Professor", "Doctor", "Actor", "NPC", "Mayor", "Seller", "Buyer",
	"Sheriff", "MoneyPenny", "Food", "Cold", "Hot", "Silly", "Snow", "Bigfoot", "Hulk", "Mister", "Crook", "Thief", "Sanitized", "Clerk",
	"Stomach", "Minion", "Pacific", "Atlantic", "Superman", "Batman", "Flash", "Captain", "Widow", "Hawk", "Iron", "Ant" };

	string firstWord;
	string lastWord;
	char userChoice;
	char userLoop;

	int sizeFirst = sizeof(firstNames) / sizeof(firstNames[0]);
	int sizeLast = sizeof(lastNames) / sizeof(lastNames[0]);

	srand(time(NULL));

	cout << "\n\nWould you like an Alias? (y/n)" << endl;
	cin >> userChoice;
	bool loop = true;
	while (loop) {
		if (userChoice == 'y') {
			int face = rand() % sizeFirst;
			firstWord = firstNames[face];
			int back = rand() % sizeLast;
			lastWord = lastNames[back];
			string alias = firstWord + " " + lastWord;
			cout << alias << endl;
		}
		else {
			cout << "Exiting" << endl;
			exit(0);
		}
		cout << "Would you like another name? (y/n)" << endl;
		cin >> userLoop;
		if (userLoop == 'n') {
			cout << "Exiting" << endl;
			exit(0);
		}
	}

}