#include <iostream>
using namespace std;

int main() {
	int n, s = 0, mx = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		s += -a + b;
		if (s > mx)
			mx = s;
	}
	cout << mx;

	return 0;
}
