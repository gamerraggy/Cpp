#include<iostream>
using namespace std;

bool isVowel(char x);

int main() {
	
	cout<<isVowel('a');



}

bool isVowel(char x) {
	
	return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');




}
