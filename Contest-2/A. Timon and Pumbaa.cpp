#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a >= b) {
		cout << a - b << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}