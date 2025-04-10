#include<iostream>
using namespace std;

char board[3][3] = { {'-','-','-'},{'-','-','-'},{'-','-','-'} };//2D array to hold board
char player = 'X';//keeps track of whose turn it is
bool endGame = false; // runs the game loop

int main() {
	cout << "Welcome to Tic-Tac-Toe bro" << endl;
	while (endGame == false) {
		cout << "Player " << player << "'s turn!" << endl; << endl;

		if (player == 'X') // if player is X, change to Y
			player = 'Y';
		else if (player == 'Y')
			player = 'X';
	}
}
