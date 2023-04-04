#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int max = 0, midl = 0, min = 0;
	if (a >= b && a >= c) {  //max=a
		if (c <= b && c <= a) { //min=c
			max = a;
			midl = b;
			min = c;
		}
		else if (b <= a && b <= c) { //min=b
			max = a;
			midl = c;
			min = b;
		}
	}

	else if (b >= a && b >= c) {  //max=b
		if (a <= b && a <= c) { //min=a
			max = b;
			midl = c;
			min = a;
		}
		else if (c <= b && c <= a) { //min=c
			max = b;
			midl = a;
			min = c;
		}
	}

	else if (c >= a && c >= b) {  //max=c
		if (a <= b && a <= c) { //min=a
			max = c;
			midl = b;
			min = a;
		}
		else if (b <= a && b <= c) { //min=b
			max = c;
			midl = a;
			min = b;
		}
	}

	cout << min << "\n" << midl << "\n" << max << "\n\n"
		<< a << "\n" << b << "\n" << c << "\n";

}