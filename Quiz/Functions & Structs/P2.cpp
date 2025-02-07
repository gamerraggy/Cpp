#include<iostream>
using namespace std;

bool isPotato(string x);

int main() {

	cout << isPotato("POTATO");



}

bool isPotato(string x) {

	return (x == "potato" || x == "Potato" || x == "POTATO");




}
