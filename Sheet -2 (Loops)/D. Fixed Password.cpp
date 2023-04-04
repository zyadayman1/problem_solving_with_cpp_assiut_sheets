#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int cont = 0;
	do
	{
		int x;
		cin >> x;
		if (x == 1999) {
			cout << "Correct\n";
			cont++;
		}
		else
		{
			cout << "Wrong\n";
		}
	} while (cont == 0);

}