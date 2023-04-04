#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
	int x;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			cout << i << endl;
		}
	}
}