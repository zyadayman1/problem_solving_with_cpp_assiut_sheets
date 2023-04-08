#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int counter;
	cin >> counter;
	for (int i = 0; i < counter; i++) {
		long long l, r;
		cin >> l >> r;
		long long maxx = max(l, r), minn = min(l, r);
		long long res1 = (maxx * (maxx + 1)) / 2;
		long long res2 = (minn * (minn + 1)) / 2;

		cout << res1 - res2 + minn << endl;
	}
}