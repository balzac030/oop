#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

int main() {

	long  t,sum;
	cin >> t;
	sum = 1;
	for (int i = 1; i <= t; i++)
		sum *= i;
		
	cout << sum << endl;
}

