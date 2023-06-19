#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double w, h;

	cin >> w >> h;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << w * h/2.0 << endl;


}