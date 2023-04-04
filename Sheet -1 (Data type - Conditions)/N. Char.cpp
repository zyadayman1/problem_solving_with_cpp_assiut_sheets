#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	char x;
	cin >> x;

	int xx;
	xx = int(x);

	if (x >= int(65) && x <= int(91)) {
		xx = xx + 32;
		cout << char(xx);
	}
	else if (x >= int(97) && x <= int(123)) {
		xx = xx - 32;
		cout << char(xx);
	}
}