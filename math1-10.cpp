#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	double temp;

	cin >> temp;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << round((temp  * 9 /5.0 +32)*10)/10.0<< endl;
	
}