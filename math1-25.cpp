#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int t,sum=0;
	cin >> t;

	for (int i = 3; i <= t; i = i + 3) {
		sum += i;
	}
	cout << sum << endl;
}