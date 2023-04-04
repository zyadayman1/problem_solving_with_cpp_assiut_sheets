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
		string s1;
		cin >> s1;
		int size = s1.size();

		for (int j = size - 1; j >= 0; j--) {
			cout << s1[j] << " ";
		}
		cout << endl;
	}
}