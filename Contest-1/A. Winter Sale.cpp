#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	double p1, x;
	cin >> x >> p1;
	cout << fixed << setprecision(2);
	cout << ((p1 * (x / 100)) / (1 - (x / 100))) + p1;
}