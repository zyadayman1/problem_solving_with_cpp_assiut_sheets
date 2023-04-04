#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	char x;
	cin >> x;
	if (x >= int(48) && x < int(58)) {
		cout << "IS DIGIT";
	}
	else if (x >= int(65) && x <= int(91)) {
		cout << "ALPHA\nIS CAPITAL";
	}
	else if (x >= int(97) && x <= int(123)) {
		cout << "ALPHA\nIS SMALL";
	}
}