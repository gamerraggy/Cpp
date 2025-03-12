#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter an integar: ";
	cin >> num;
	if (num % 5 == 0)
		cout << num << " is a multiple of 5";
	else
		cout << num << " is not a multiple of 5";


}
