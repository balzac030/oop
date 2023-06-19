#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int t, t1, t2, t3, sum = 0;
	cin >> t;
	for (int j=1; j <= t; j++) {
		sum = 0;
		for (int i = 1; i < j; i++) {
			if (j % i == 0)
				sum += i;
		}
		if (sum == j) {
			if (sum == 6)
				cout << sum;
			else
				cout <<" " << sum;
		}
	}
	cout << endl;
}
