#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	int maxnum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > maxnum) {
			maxnum = x;
		}
	}
	cout << maxnum;

}