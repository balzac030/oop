#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	long int t1, sum = 0;
	cin >> t1;

	

		for (long int i = t1-1; i >= 2; i--) {
			for (long int j = 2; j <= i; j++) {
				if (j == i) {
					cout << j << endl;
					i = 0;
					break;
				}
				else if (i % j == 0) {
					break;
				}
			}
		}
}
