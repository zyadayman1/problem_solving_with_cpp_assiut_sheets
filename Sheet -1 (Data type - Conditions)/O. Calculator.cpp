#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	long long a, b;
	char x;
	cin >> a >> x >> b;

	if (x == '+') {
		cout << a + b;
	}
	else if (x == '-') {
		cout << a - b;
	}
	else if (x == '*') {
		cout << a * b;
	}
	else if (x == '/') {
		cout << a / b;
	}

}