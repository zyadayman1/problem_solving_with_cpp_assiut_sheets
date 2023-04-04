#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	char s;
	int x;
	cin >> s >> x;
	for (int i = 0; i < x; i++) {
		int num;
		cin >> num;
		for (int j = 0; j < num; j++) {
			cout << s;
		}
		cout << endl;
	}
}