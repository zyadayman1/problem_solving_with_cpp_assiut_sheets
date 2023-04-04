#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	int first = 0, second = 1;
	if (x == 1) {
		cout << first << " ";
	}
	else if (x == 2) {
		cout << first << " ";
		cout << second << " ";
	}
	else
	{
		cout << first << " ";
		cout << second << " ";
		for (int i = 2; i < x; i++) {
			int num = first + second;
			cout << num << " ";
			first = second;
			second = num;
		}
	}
}