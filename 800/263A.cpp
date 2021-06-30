#include <iostream>
using namespace std;

int main() {
	int _, n;
	for (int i = 0; i < 25; i++) {
		cin >> _;
		if (_ == 1)
			n = i;
	}

	int x, y;
	if ((n+1) % 5 == 0)
		x = 5;
	else
		x = (n + 1) % 5;

	x = abs(x - 3);
	y = abs((n / 5) - 2);

	cout << x + y;
	

	return 0;
}