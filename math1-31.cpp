#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	long int t1, sum = 0;
	cin >> t1;



	for (int i = 6; i <= t1; i = i + 6) {
		if (i % 6 == 0 && i % 12 != 0)
			sum += i;
	}
	cout << sum << endl;
}