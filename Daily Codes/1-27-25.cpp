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
		cout << "  / \\  |\n";
		cout << "       |\n";
		cout << " ============\n";
		break;
	case 5:
		cout << "   +---+\n";
		cout << "   |   |\n";
		cout << "   O / |\n";
		cout << "   |   |\n";
		cout << "  / \\  |\n";
		cout << "       |\n";
		cout << " ============\n";
		break;
	case 6:
		cout << "   +---+\n";
		cout << "   |   |\n";
		cout << " \\ O / |          YOU SUCK! \n";
		cout << "   |   |\n";
		cout << "  / \\  |\n";
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

//Function to check the players guess agaisnt the word
string processGuess(char guess, string word, string guessedWord) {
	bool isCorrect = false;
	for (int i = 0; i < word.length(); i++) { // loop through each letter in the word
		if (word[i] == guess && guessedWord[i] == '_') { //if guess is correct and hasnt been guessed before
			guessedWord[i] = guess; //update the guessed word with the new letter
			isCorrect = true; // mark the guess as correct
		}
	}
	//check if the guess was incorrect
	if (!isCorrect) {
		//initialize a variable to indicate if the guess is found in the guesses
		bool alreadyGuessed = false;

		//iterate through the incorrect fuesses to see if the guess was alreayd made
		for (int i = 0; i < numIncorrect; i++) {
			if (incorrect[i] == guess) {
				alreadyGuessed = true;
				break; //break the loop if the guess is found
			}
		}

		// if the guess was not found in the incorrect guesses
		if (!alreadyGuessed) {
			incorrect[numIncorrect++] = guess; //add the new incorrect guess
			misses += 1; //increment the misses counter
		}
	}
	return guessedWord; //return the updated guessed word
}

//main function where the game runs
int main() {
	string wordList[] = { "jeremy", "abcdefghijklmnopqrstuvwxyz", "raidin","noahstinks", "youlose", "alajndor","pablosanchez", "onomatopoeia", "worcestershire", "kennythethirdjr"}; //list of wors to guese
	srand(time(0)); //seed the random number gen
	string word = wordList[rand() % 10]; //randomly pick a word from the list
	string guessedWord(word.length(), '_'); //create the guessed word filled wiht underscores

	cout << "Welcome to Hangboy!\n"; //welcome message

	//game loop runs until the polayer runs out of gyuesser doir guessed the wrod
	while (misses < MAX_INCORRECT && guessedWord != word) {
		display(guessedWord); //display the current state of the game
		cout << "Enter your guess: ";
		char guess;
		cin >> guess; // get the players guess

		string oldGuessedWord = guessedWord; //keep track of the wotrd beftfoe the gues
		guessedWord = processGuess(guess, word, guessedWord); //process the game

		if (guessedWord == oldGuessedWord) {
			cout << "Buddy that letter isnt there\n"; // inform the player the guess was wonr
		}
		else {
			cout << "Good guess buddy! \n"; //comrngatuelate the player on a correct guess
		}

	}// end of game loop
	//check if the game ended with a win or loss
	if (guessedWord == word) {
		cout << "Congratulations you won the word was: " << word << "\n"; //win message
	}
	else {
		cout << "You suck at this game buddy the word was: " << word << "\n"; //lose mesage
		displayHangboy();
	}

	return 0; // end of the program
}// end of main
