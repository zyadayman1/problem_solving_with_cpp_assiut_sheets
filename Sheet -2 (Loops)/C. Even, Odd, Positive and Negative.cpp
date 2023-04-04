#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	int evencounter = 0, oodcounter = 0, positivecounter = 0, negativecounter = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num > 0) {
			++positivecounter;
		}
		else if (num < 0) {
			++negativecounter;
		}

		if (num % 2 == 0) {
			++evencounter;
		}
		else
		{
			++oodcounter;
		}
	}
	cout << "Even: " << evencounter << endl
		<< "Odd: " << oodcounter << endl
		<< "Positive: " << positivecounter << endl
		<< "Negative: " << negativecounter << endl;

}