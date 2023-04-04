#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		int sum = 0;
		if (num1 < num2) {
			for (int j = num1 + 1; j < num2; j++) {
				if (j % 2 != 0) {
					sum += j;
				}
			}
		}
		else
		{
			for (int j = num2 + 1; j < num1; j++) {
				if (j % 2 != 0) {
					sum += j;
				}
			}
		}
		cout << sum << endl;
	}
}