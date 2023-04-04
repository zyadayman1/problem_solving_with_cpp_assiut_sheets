#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	int start = 0, end = 0;

	if ((l2 > r1 && r2 > r1) || (l2 < l1 && r2 < l1)) {
		cout << -1;
	}
	else {
		if (l1 > l2) {
			start = l1;
		}
		else {
			start = l2;
		}
		if (r1 > r2) {
			end = r2;
		}
		else {
			end = r1;
		}
		cout << start << " " << end;
	}

}