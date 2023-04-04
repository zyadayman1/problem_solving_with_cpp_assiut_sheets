#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int count = 0;
	while (count == 0)
	{
		int num1, num2;
		cin >> num1 >> num2;
		int sum = 0;
		if (num1 <= 0 || num2 <= 0) {
			count++;
		}
		else
		{
			if (num2 < num1) {
				for (int i = num2; i <= num1; i++) {
					cout << i << " ";
					sum += i;
				}
			}
			else
			{
				for (int i = num1; i <= num2; i++) {
					cout << i << " ";
					sum += i;
				}
			}

			cout << "sum =" << sum;
		}
		cout << endl;
	}
}