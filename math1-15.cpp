#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main() {

	int x,y;
	cin >> x>>y ;
	
	if (x <= 100 && y <= 100)
		cout << "inside" << endl;
	else
		cout << "outside" << endl;
}