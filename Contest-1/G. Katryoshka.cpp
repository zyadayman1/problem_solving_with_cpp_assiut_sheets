#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	long long e, m, b;
	cin >> e >> m >> b;

	if (e <= m && e <= b) {
		cout << e;
	}
	else if (m <= e && m <= b) {
		if ((b - m) < (e - m) && (e - m) >= (2 * (b - m)))
		{
			cout << m + (b - m);
		}
		else
		{
			cout << m + ((e - m) / 2);
		}

	}
	else if (b <= e && b <= m) {
		cout << b;
	}

}