#include <iostream>
#include <iomanip>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;
int main() {

	int t;
	queue<int> num;
	stack<int> stack;

	cin >> t;
	for (int i = 0; i < 8; i++) {
		num.push(0);
	}

	if (t < 0) {
		t = t + 256;
	}

	while (t > 0) {
		stack.push(t % 2);
		t /= 2;
	}
	while (!stack.empty()) {
		num.push(stack.top());
		num.pop();
		stack.pop();
	}
	t = 0;
	for (int i = 3; i >= 0; i--) {
		t += num.front()*pow(2,i);
		num.pop();
	}
	if (t == 15)
		cout << "F";
	else if (t == 14)
		cout << "E";
	else if (t == 13)
		cout << "D";
	else if (t == 12)
		cout << "C";
	else if (t == 11)
		cout << "B";
	else if (t == 10)
		cout << "A";
	else if(t==0){}
	else
		cout << t;
	t = 0;
	for (int i = 3; i >= 0; i--) {
		t += num.front() * pow(2, i);
		num.pop();
	}
	if (t == 15)
		cout << "F";
	else if (t == 14)
		cout << "E";
	else if (t == 13)
		cout << "D";
	else if (t == 12)
		cout << "C";
	else if (t == 11)
		cout << "B";
	else if (t == 10)
		cout << "A";
	else if (t == 0) {}
	else
		cout << t;

	cout << endl;
}