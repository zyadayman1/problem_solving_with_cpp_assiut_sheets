#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

bool condetion(int i) {
	string istr = to_string(i);
	int size = istr.size();
	int count = 0;
	for (int i = 0; i < size; i++) {
		char snow = istr[i];
		int now = stoi(&snow);
		if (now == 4 || now == 7) {
			++count;
		}
	}
	if (count == size) {
		return true;
	}
	else
	{
		return false;
	}
}


int main() {
	int a, b;
	cin >> a >> b;
	int i;
	int count = 0;
	for (i = a; i <= b; i++) {
		if (condetion(i)) {
			cout << i << " ";
		}
		if (condetion(i) == false) {
			count++;
		}
	}
	if (count == ((b - a) + 1)) {
		cout << -1;
	}

}