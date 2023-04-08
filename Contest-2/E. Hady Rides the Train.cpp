#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	long long x;
	cin >> x;
	long long row = x / 4;
	long long col = 0;
	if (row % 2 == 0) {
		col = x % 4;
	}
	else
	{
		col = 3 - (x % 4);
	}
	cout << row << " " << col;
}