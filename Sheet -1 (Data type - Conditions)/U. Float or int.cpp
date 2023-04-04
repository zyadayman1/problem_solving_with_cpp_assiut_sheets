#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	double x1;
	cin >> x1;
	int x2 = int(x1);
	if ((x1 - x2) == 0) {
		cout << "int " << x2;
	}
	else
	{
		cout << "float " << x2 << " " << (x1 - x2);
	}

}