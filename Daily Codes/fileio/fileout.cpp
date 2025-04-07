#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	srand(time(NULL));

	int numNotes;
	cout << "Need a number please broski" << endl;
	cin >> numNotes;

	ofstream outfile("notes.txt");

	if (!outfile) {
		cout << "Error: Couldnt not create notes.txt" << endl;
		return 1;
	}

	for (int i = 0; i < numNotes; i++) {
		int freq = rand() % 700 + 200;
		int dur = rand() % 600 + 200;
		outfile << freq << " " << dur << endl;
	}

	cout << "notes.txt has been created with " << numNotes << " random notes." << endl;
	outfile.close();

	return 0;
}
