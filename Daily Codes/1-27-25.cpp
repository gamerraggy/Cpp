#include <iostream> // LILBRARIES
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

//global constants and varibales
const int MAX_INCORRECT = 6; // maximum wrong guesses allowed
char incorrect[MAX_INCORRECT];
int numIncorrect = 0;
int misses = 0;

// function to display the hangman drawing based on how many times the player has guessed wrong
void displayHangboy() {
	cout << "\n"; // print a newline for spacing
	switch (misses) { // check the number of misses to make the human
	case 0:
		cout << "   +---+\n";
		cout << "   |   |\n";
		cout << "       |\n";
		cout << "       |\n";
		cout << "       |\n";
		cout << "       |\n";
		cout << " ============\n";
		break;
	case 1:
		cout << "   +---+\n";
		cout << "   |   |\n";
		cout << "   O   |\n";
		cout << "       |\n";
		cout << "       |\n";
		cout << "       |\n";
		cout << " ============\n";
		break;
	case 2:
		cout << "   +---+\n";
		cout << "   |   |\n";
		cout << "   O   |\n";
		cout << "   |   |\n";
		cout << "       |\n";
		cout << "       |\n";
		cout << " ============\n";
		break;
	case 3:
		cout << "   +---+\n";
		cout << "   |   |\n";
		cout << "   O   |\n";
		cout << "   |   |\n";
		cout << "  /    |\n";
		cout << "       |\n";
		cout << " ============\n";
		break;
	case 4:
		cout << "   +---+\n";
		cout << "   |   |\n";
		cout << "   O   |\n";
		cout << "   |   |\n";
		cout << "  / \\ |\n";
		cout << "       |\n";
		cout << " ============\n";
		break;
	case 5:
		cout << "   +---+\n";
		cout << "   |   |\n";
		cout << "   O / |\n";
		cout << "   |   |\n";
		cout << "  / \\ |\n";
		cout << "       |\n";
		cout << " ============\n";
		break;
	case 6:
		cout << "   +---+\n";
		cout << "   |   |\n";
		cout << "\\ O / |          YOU SUCK! \n";
		cout << "   |   |\n";
		cout << "  / \\ |\n";
		cout << "       |\n";
		cout << " ============\n";
		break;
	}
}

//function to display the current state of the game
void display(string guessedWord) {
	cout << "\n Word: ";
	for (int i = 0; i < guessedWord.length(); i++) {
		cout << guessedWord[i] << ' '; //show each character in the guessed woprd followed by a space
	}
	cout << "\n Incorrect Guesses: ";
	for (int i = 0; i < 6; i++) {
		cout << incorrect[i] << ' '; // show each incorrect guess followed by a space
	}
	cout << "\n Misses left: " << MAX_INCORRECT - misses << "\n"; //show how many guesses are left
	displayHangboy(); // call function to show the hangboy drawing
}
