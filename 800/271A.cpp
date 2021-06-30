#include <iostream>
using namespace std;

bool digits_diff(int16_t num) {
	int a, b, c, d;
	a = num / 1000;
	b = num / 100 % 10;
	c = num % 100 / 10;
	d = num % 10;
	if (a != b and a != c and a != d and b != c and b != d and c != d)
		return true;
	else
		return false;
}

int main() {
	int16_t num, next;
	cin >> num;
	next = num + 1;
	for (next; next <= 9000; next++) {
		if (digits_diff(next) == 1) {
			break;
		}
	}
	cout << next << endl;
	return 0;
}