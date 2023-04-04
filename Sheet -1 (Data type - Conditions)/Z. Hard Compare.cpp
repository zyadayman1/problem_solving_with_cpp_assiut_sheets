#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;

	double first = b * log(a);
	double second = d * log(c);

	if (first > second) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}


}