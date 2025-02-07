#include<iostream>
using namespace std;

int PyramidVolume(int l, int w, int h);

int main() {

	cout << PyramidVolume(3,4,5);

}

int PyramidVolume(int l, int w, int h) {

	return (l * w * h) / 3;

}
