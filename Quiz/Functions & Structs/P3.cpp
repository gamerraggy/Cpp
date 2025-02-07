#include<iostream> // prewriteen code
using namespace std; //cheat code

//function declaration: tells the computer we are writing our own function
void HiChew();

int main() { //start of program
	srand(time(NULL));

	HiChew(); 




} // end of main

//tells what the function does
void HiChew() {


	int num = rand() % 100 + 1; //random number between 1-100


	if (num < 26) { //50 percent chance
		cout << "Kiwi" << endl;
	}
	else if (num < 51) { //50 percent chance
		cout << "MANGOES" << endl;
	}
	else if (num < 76) { //50 percent chance
		cout << "Pineapple" << endl;
	}
	else { // 50 percent change
		cout << "Dragonfruit" << endl;
	}



}
