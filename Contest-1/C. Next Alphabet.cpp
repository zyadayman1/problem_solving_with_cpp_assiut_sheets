#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	char x;
	cin >> x;
	int integar_x = int(x);
	if (x == 'z') {
		cout << 'a';
	}
	else
	{
		integar_x = integar_x + 1;
		cout << char(integar_x);
	}
}