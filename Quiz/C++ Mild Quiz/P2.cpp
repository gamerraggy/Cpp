#include<iostream>
using namespace std;

int main() {
	srand(time(NULL));
	int n;
	n = 0;
	for (int i = rand() % 50 + 1; i >= n; i--) {
		cout << "Respawning in.. " << i << endl;
	}

}
