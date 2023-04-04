#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	int sum = 0, fsum = 0;
	for (int i = 1; i <= x; i++) {
		long long num;
		cin >> num;
		while (num > 0) {
			if (num % 2 == 0) {
				num /= 2;
			}
			else
			{
				num /= 2;
				sum += 1;
			}
		}
		for (int j = (sum - 1); j >= 0; j--) {
			fsum += pow(2, j);
		}
		cout << fsum << endl;
		sum = 0;
		fsum = 0;
	}
}