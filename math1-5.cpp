#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {

	double a;
	cin >> a ;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << round(a * a * 10) / 10.0 << endl;

}