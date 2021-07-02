#include <iostream>
using namespace std;


int main() {
	int64_t k, n;
	cin >> k >> n;
	int64_t even = -1, odd = -1; // even (%2 == 0), odd (%2==1)
	if (k % 2 == 0) {
		even = k / 2;
		odd = k / 2;
	}
	else {
		even = (k - 1) / 2;
		odd = (k + 1) / 2;
	}
	if (n > odd)
		cout << (n - odd) * 2;
	else {
		cout << 2 * (n)-1;
	}

}