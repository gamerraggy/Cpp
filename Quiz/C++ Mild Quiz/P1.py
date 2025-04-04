#include<iostream>
using namespace std;

int main() {

	char choice;
	cout << "'a' for apple, 'b' for banana, or 'c' for cantaloupe" << endl;
	cin >> choice;
	if (choice == 'a' || choice == 'A')
		cout << "Okay heres your apple" << endl;
	else if (choice == 'b' || choice == 'B')
		cout << "One banana coming right up!" << endl;
	else if (choice == 'c' || choice == 'C')
		cout << "Heres a cantelope weirdo" << endl;
	else
		cout << "Wrong input choice" << endl;

}
