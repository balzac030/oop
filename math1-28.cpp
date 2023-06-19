#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int t1, sum = 0;
	cin >> t1;

	for (int i = 1; i <= t1/35; i++) {
		if(i==1)
			cout << 35*i ;
		else
			cout << " " << 35 * i;
	}
	cout << endl;
}