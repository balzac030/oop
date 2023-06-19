#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

int main() {

	int  t, m;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cin >> t >> m;
	if (t <= 60) {
		cout << m * t << endl;
	}
	else if (t <= 120) {
		cout << m * 60+(t-60)*m*1.33 << endl;
	}
	else
		cout << m * 60 + 60 * m * 1.33+ (t - 120) * m * 1.66 << endl;

}
