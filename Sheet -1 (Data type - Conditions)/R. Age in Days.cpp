#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	cout << x / 365 << " years\n"
		<< (x % 365) / 30 << " months\n"
		<< (x % 365) % 30 << " days";
}