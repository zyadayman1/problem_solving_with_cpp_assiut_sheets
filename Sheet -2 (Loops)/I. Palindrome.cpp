#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	string num1;
	cin >> num1;
	int size = num1.size();
	string num2 = num1;
	int counter = 0;

	for (int i = size - 1; i >= 0; i--) {
		num2[counter] = num1[i];
		counter++;
	}
	cout << stoi(num2) << endl;
	if (num1 == num2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}