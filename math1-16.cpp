#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int x, y;
	cin >> x >> y;

	if ((x*x+y*y)<=10000)
		cout << "inside" << endl;
	else
		cout << "outside" << endl;
}