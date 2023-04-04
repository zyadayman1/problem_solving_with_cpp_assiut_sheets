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
		cout << "NO";
	}
	else
	{
		for (int i = 2; i < x; i++) {
			if (x % i == 0) {
				cout << "NO";
				return 0;
			}
		}
		cout << "YES";
		return 0;
	}

}