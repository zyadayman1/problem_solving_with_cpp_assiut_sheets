#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	int space = x - 1;

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= space; j++) {
			cout << " ";
		}
		for (int j = 1; j < 2 * i; j++) {
			cout << "*";
		}
		space--;
		cout << "\n";
	}
}