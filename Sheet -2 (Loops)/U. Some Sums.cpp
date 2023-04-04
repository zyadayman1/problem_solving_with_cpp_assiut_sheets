#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		string strI = to_string(i);
		int size = strI.size();
		int strSum = 0;
		for (int j = 0; j < size; j++) {
			int intI = strI[j] - '0';
			strSum += intI;
		}
		if (strSum >= a && strSum <= b) {
			sum += i;
		}
	}
	cout << sum << endl;
}