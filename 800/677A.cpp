#include <iostream>
using namespace std;

int main() {
	int n, h, s = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x <= h)
			s++;
		else
			s += 2;
	}

	cout << s;

	return 0;
}