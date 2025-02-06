#include<iostream> // prewriteen code
using namespace std; //cheat code

//function declaration: tells the computer we are writing our own function
void CoinToss();

int main() { //start of program
	srand(time(NULL)); //seed our rand function (only do this once at the top above your game loop)

	CoinToss(); //function call: tells the computer to run the code from the function definition

} // end of main
//tells what the function does
void CoinToss() {

	int num = rand() % 100 + 1; //random number between 1-100

	if (num < 50) { 
		cout << "heads" << endl;
	}

	else { 
		cout << "tails" << endl;
	}
}
