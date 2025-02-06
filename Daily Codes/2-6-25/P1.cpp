#include<iostream>
using namespace std;

int CylinderVolume(int r, int h);

int main() {

	cout << CylinderVolume(4, 6);
 
}

int CylinderVolume(int r, int h) {

	return 3.14 * r * r * h;

}
