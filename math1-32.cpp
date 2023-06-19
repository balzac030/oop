#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int t,t1,t2,t3, sum = 0;
	cin >> t;
	t1 = (t / 100);
	t2 = (t % 100 / 10);
	t3 = (t % 10);
	if (pow(t1, 3) + pow(t2, 3) + pow(t3, 3) == t)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

