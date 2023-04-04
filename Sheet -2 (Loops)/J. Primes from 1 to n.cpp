#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

bool prime(int i) {
	for (int j = 2; j < i; j++) {
		if (i % j == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int x;
	cin >> x;
	for (int i = 2; i <= x; i++) {
		if (prime(i)) {
			cout << i << " ";
		}
	}

}