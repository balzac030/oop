#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	double t;
	cin >>  t;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	if (t <= 800) {
		cout << t*0.9 << endl;
	}
	else if (t < 1500) {
		cout << t * 0.9*0.9 << endl;
	}
	else
		cout << t * 0.9 * 0.79 << endl;
	
}