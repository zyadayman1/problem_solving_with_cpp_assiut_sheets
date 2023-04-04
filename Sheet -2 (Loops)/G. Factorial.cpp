#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int num;
		cin >> num;
		long long fact = 1;
		for (int j = 1; j <= num; j++) {
			fact *= j;
		}
		cout << fact << endl;
	}
}