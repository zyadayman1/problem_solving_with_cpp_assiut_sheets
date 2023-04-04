#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	if ((x / 1000) % 2 == 0) {
		cout << "EVEN";
	}
	else
	{
		cout << "ODD";
	}

}