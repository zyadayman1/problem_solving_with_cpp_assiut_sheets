#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	int count = 1;
	for (int i = 0; i < x; i++) {
		for (int j = 1; j < 4; j++) {
			cout << count << " ";
			++count;
		}
		cout << "PUM";
		cout << endl;
		++count;
	}
}