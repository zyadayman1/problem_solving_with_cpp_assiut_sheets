#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long count = 0, resalt = 0;
	for (int i = 1; i <= n; i++) {
		long long number;
		cin >> number;
		while (number % 2 == 0)
		{
			count++;
			number /= 2;
		}
		if (count > resalt) {
			resalt = count;
		}
		count = 0;
	}
	cout << resalt << endl;
}
