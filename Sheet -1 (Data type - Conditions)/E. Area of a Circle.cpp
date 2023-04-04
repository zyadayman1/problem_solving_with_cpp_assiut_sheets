#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	double r;
	const double pi = 3.141592653;
	cin >> r;
	cout << fixed << setprecision(9);
	cout << pi * (r * r);
}
