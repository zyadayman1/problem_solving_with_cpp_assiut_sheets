#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;

	int space1 = x - 1;
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= space1; j++) {
			cout << " ";
		}
		for (int j = 1; j < 2 * i; j++) {
			cout << "*";
		}
		space1--;
		cout << "\n";
	}

	int space2 = 0;
	for (int i = x; i >= 1; i--) {
		for (int j = 1; j <= space2; j++) {
			cout << " ";
		}
		for (int j = 1; j < 2 * i; j++) {
			cout << "*";
		}
		space2++;
		cout << "\n";
	}


}