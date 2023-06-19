#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int t1,t2, sum = 0;
	cin >> t1>>t2;

	for (int i = t1; i <= t2; i++) {
		sum += i;
	}
	cout << sum << endl;
}