#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int d;
	cin >> d;
	cout << ceil(d / (1 - 30 * 0.0254)) << endl;
}