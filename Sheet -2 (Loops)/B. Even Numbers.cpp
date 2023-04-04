#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	if (x == 1) {
		cout << -1 << endl;
	}
	else
	{
		for (int i = 2; i <= x; i += 2) {
			cout << i << endl;
		}
	}
}