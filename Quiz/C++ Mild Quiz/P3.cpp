#include<iostream>
#include<Windows.h>
using namespace std;

void TextColor(int val);

int main() {
	int num;
	cout << "Choose number between 1-15" << endl;
	cin >> num;
	TextColor(num);


}


void TextColor(int val) {

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), val);

}
