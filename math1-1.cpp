#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	double h, w1, w2;
	cin >> w1 >> w2 >> h;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << "Trapezoid area:" <<(w1 + w2) * h / 2.0<<endl;
}