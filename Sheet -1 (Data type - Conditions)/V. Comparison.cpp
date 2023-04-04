#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	char x;
	cin >> a >> x >> b;

	if (x == '<') {
		if (a < b) {
			cout << "Right";
		}
		else
		{
			cout << "Wrong";
		}
	}
	else if (x == '>') {
		if (a > b) {
			cout << "Right";
		}
		else
		{
			cout << "Wrong";
		}
	}
	else if (x == '=') {
		if (a == b) {
			cout << "Right";
		}
		else
		{
			cout << "Wrong";
		}
	}



}