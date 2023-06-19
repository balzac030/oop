#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int h;
	cin  >> h;
	if (h > 31)
		cout << "Value of more than 31" << endl;
	else
		cout <<  (1<< h) << endl;
}