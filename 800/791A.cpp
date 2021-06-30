#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int k = 0;
	for (int i = 0; a <= b; i++) {
		a *= 3;
		b *= 2;
		k = i;
	}
	cout << k+1;

	return 0;
}