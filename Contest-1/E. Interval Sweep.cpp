#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a > 0 && b > 0) {
		if (a == b - 1 || a == b || a - 1 == b) {
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}
}