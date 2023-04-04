#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	int numA = a % 100;
	int numB = b % 100;
	int numC = c % 100;
	int numD = d % 100;
	int result = numA * numB * numC * numD;
	if (result % 100 <= 9) {
		cout << "0" << result % 100;
	}
	else
	{
		cout << result % 100;
	}

}