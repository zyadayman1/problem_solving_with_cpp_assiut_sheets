#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;
	char x, y;
	cin >> a >> x >> b >> y >> c;

	if (x == '+') {
		if ((a + b) == c) {
			cout << "Yes";
		}
		else
		{
			cout << a + b;
		}
	}
	else if (x == '-') {
		if ((a - b) == c) {
			cout << "Yes";
		}
		else
		{
			cout << a - b;
		}
	}
	else if (x == '*') {
		if ((a * b) == c) {
			cout << "Yes";
		}
		else
		{
			cout << a * b;
		}
	}



}