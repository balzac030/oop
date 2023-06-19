#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int m;
	cin >> m;
	cout <<"NT10=" << m / 10 << endl;
	m %= 10;

	
	cout <<"NT5=" << m / 5 << endl;
	m %= 5;

	cout << "NT1=" << m << endl;

}