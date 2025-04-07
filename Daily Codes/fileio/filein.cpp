#include<iostream>
#include<fstream>
#include<Windows.h>
using namespace std;

int main() {
	ifstream infile("notes.txt");

	if (!infile) {
		cout << "Error: Could not open notes.txt" << endl;
		return 1;
	}

	int freq, dur;
	while (infile >> freq >> dur) {
		cout << "Playing: " << freq << " Hz for " << dur << " ms" << endl;
		Beep(freq, dur);
	}
	infile.close();
	return 0;
}
