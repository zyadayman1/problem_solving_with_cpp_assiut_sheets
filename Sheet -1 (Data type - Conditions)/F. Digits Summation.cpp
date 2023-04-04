#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	long long n, m;
	cin >> n >> m;
	cout << (n % 10) + (m % 10);
}