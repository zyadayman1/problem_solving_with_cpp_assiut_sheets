#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << "floor " << a << " / " << b << " = " << floor((a / b)) << "\n"
		<< "ceil " << a << " / " << b << " = " << ceil((a / b)) << "\n"
		<< "round " << a << " / " << b << " = " << round((a / b)) << "\n";

}