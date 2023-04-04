#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
	int x1, x2;
	cin >> x1 >> x2;
	int gx = 0, maxx;
	maxx = max(x1, x2);

	for (int i = 1; i <= maxx; i++) {
		if (x1 % i == 0 && x2 % i == 0) {
			if (i > gx) {
				gx = i;
			}
		}
	}
	cout << gx;

}