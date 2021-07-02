#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int prev = -1, k = 0, m = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (prev <= x) {
			k++;
			if (k > m)
				m = k;
		}
		else {
			if (k > m)
				m = k;
			k = 1;
		}
		prev = x;
	}
	cout << m;

	return 0;
}