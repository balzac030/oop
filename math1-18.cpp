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
	for (int i = 0; i < 8; i++) {
		cout << num.front();
		num.pop();
	}
	cout << endl;
}