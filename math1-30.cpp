#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	long int t1, sum = 0;
	cin >> t1;



		for (long int j = 2; j <= t1; j++) {
			if (j == t1) {
				cout << "YES" << endl;
				break;
			}
			else if (t1 % j == 0) {
				cout << "NO" << endl;
				break;
			}
		}
}