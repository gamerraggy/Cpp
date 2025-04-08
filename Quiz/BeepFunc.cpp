#include<iostream>
#include<Windows.h>
using namespace std;

void TooManyBeeps(int pitch, int freq, int num);

int main() {
	int num1, num2, num3;
	cout << "Choose a pitch" << endl;
	cin >> num1;
	cout << "Choose a frequency" << endl;
	cin >> num2;
	cout << "Choose the number of beeps" << endl;
	cin >> num3;
	TooManyBeeps(num1, num2, num3);
	

}

void TooManyBeeps(int pitch, int freq, int num) {

	for (int i = 0; i < num; i++) {
		Beep(pitch, freq);
	}

}
