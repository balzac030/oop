#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int h1,m1,h2,m2, time;

	cin >> h1 >> m1 >> h2 >> m2;
	time = h2 * 60 + m2 - (h1 * 60 + m1);

	if (time <= 120) {
		cout << (time / 30) * 30 << endl;
	}
	else if (time <= 240) {
		cout<< (time-120) / 30 * 40+120 << endl;
	}
	else
		cout << (time - 240) / 30 * 60 + 280 << endl;
	
}