#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	long long int s,m,h,d;
	cin >>s;
	m = s / 60;
	s %= 60;
	h = m / 60;
	m %= 60;
	d = h / 24;
	h %= 24;

	cout << d << " days" << endl;
	cout << h << " hours" << endl;
	cout << m << " minutes" << endl;
	cout << s << " seconds" << endl;
}