#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	double n, k, a;
	cin >> n >> k >> a;
	double rusalt = (n * k) / a;
	long long intrusalt = rusalt;
	if (rusalt == intrusalt) {
		if (rusalt <= 2147483647 && rusalt >= -2147483647) {
			cout << "int" << endl;
		}
		else
		{
			cout << "long long" << endl;
		}
	}
	else {
		cout << "double" << endl;
	}

}