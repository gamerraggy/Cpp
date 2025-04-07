#include<iostream>
using namespace std;

int main() {
	double num1, num2;
	char op;
	cout << "Enter two integars and an operator (+,-,x, or %): ";
	cin >> num1 >> num2 >> op;
	if (op == '+') {
		cout << "Result: " << num1 + num2;
	}
	else if (op == '-') {
		cout << "Result: " << num1 - num2;
	}
	else if (op == 'x') {
		cout << "Result: " << num1 * num2;
	}
	else if (op == '%') {
		if (num2 == 0)
			cout << "Error";
		else if (num1 == 0)
			cout << "Error";
		else
			cout << "Result: " << num1 / num2;
	}
	else {
		cout << "Invalid operator!";
	}
}
