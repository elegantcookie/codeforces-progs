#include <iostream>
using namespace std;


int main() {
	int k, n, w;
	cin >> k >> n >> w;
	int s = 0;
	for (int i = 1; i <= w; i++) {
		s += k * i;
	}
	if (n - s < 0)
		cout << abs(n - s);
	else
		cout << 0;

	return 0;
}