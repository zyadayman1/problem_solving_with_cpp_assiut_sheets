#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c, min = 0, max = 0;
	cin >> a >> b >> c;
	if (a <= b && a <= c) {
		min = a;
	}
	else if (b <= a && b <= c) {
		min = b;
	}
	else if (c <= a && c <= b) {
		min = c;
	}
	if (a >= b && a >= c) {
		max = a;
	}
	else if (b >= a && b >= c) {
		max = b;
	}
	else if (c >= a && c >= b) {
		max = c;
	}
	cout << min << " " << max;

}