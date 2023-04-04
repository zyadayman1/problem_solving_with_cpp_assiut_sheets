#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	int   firstDigit = x % 10
		, secondDigit = x / 10;
	if (firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0) {
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}