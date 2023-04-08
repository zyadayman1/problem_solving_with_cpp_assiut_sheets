#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int counter, size;
	cin >> counter >> size;
	int min = 1000000000, count = 0;

	for (int i = 1; i <= counter; i++) {
		int num;
		cin >> num;
		if (num < min) {
			min = num;
		}
		++count;
		if (count == size || i == counter) {
			cout << min << endl;
			count = 0;
			min = 1000000000;
		}
	}

}