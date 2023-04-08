#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	/////////////////////////////////////////
	int shape1 = 0;
	for (int i = (x / 2); i >= 1; i--) {
		for (int j = 1; j <= shape1; j++) {
			cout << "*";
		}
		cout << "\\";
		for (int j = 2; j <= 2 * i; j++) {
			cout << "*";
		}
		cout << "\/";
		for (int j = 1; j <= shape1; j++) {
			cout << "*";
		}

		cout << "\n";
		shape1++;
	}
	////////////////////////////////////////////
	for (int i = 1; i <= (x / 2); i++) {
		cout << "*";
	}
	cout << "X";

	for (int i = 1; i <= (x / 2); i++) {
		cout << "*";
	}
	cout << "\n";
	////////////////////////////////////////////
	int shape2 = (x - 2) / 2;
	for (int i = 1; i <= (x / 2); i++) {
		for (int j = shape2; j >= 1; j--) {
			cout << "*";
		}
		cout << "\/";
		for (int j = 2; j <= 2 * i; j++) {
			cout << "*";
		}
		cout << "\\";
		for (int j = shape2; j >= 1; j--) {
			cout << "*";
		}

		cout << "\n";
		shape2--;
	}

}