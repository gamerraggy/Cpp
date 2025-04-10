#include<iostream>
using namespace std;

char board[3][3] = { {'-','-','-'},{'-','-','-'},{'-','-','-'} };//2D array to hold board
char player = 'X';//keeps track of whose turn it is
bool endGame = false; // runs the game loop

//function prototypes
void printBoard(const char board[3][3]);
void playerTurn(char board[3][3], char player);

int main() {
	cout << "Welcome to Tic-Tac-Toe bro" << endl;
	while (endGame == false) {
		cout << "Player " << player << "'s turn!" << endl << endl;
		printBoard(board);
		playerTurn(board, player);
		if (player == 'X') // if player is X, change to Y
			player = 'Y';
		else if (player == 'Y')
			player = 'X';
	}
}

//functipn to print the tictactoe board
void printBoard(const char board[3][3]) {
	for (int i = 0; i < 3; i++) { //handles rows
		for (int j = 0; j < 3; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

void playerTurn(char board[3][3], char player) {

	//declare row and col int variables
	int row, col;

	//ask user for row and col and store them
	if (player == 'X')
		cout << "Player X, type row number and column number to place X:" << endl;
	else
		cout << "Player Y, type row number and column number to place O:" << endl;

	cin >> row;
	cin >> col;

	//place the X or O into the board
	if (player == 'X')
		board[row - 1][col - 1] = 'X';//place an X for player 1
	else board[row - 1][col - 1] = 'O';//place an O for player 2

	cout << endl;

}
