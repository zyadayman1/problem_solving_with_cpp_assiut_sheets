#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= 12; i++) {
		cout << num << " * " << i << " = " << num * i << endl;
	}
}