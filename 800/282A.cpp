#include <iostream>
using namespace std;

int x = 0;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "++X" or str == "X++") {
			x++;
		}
		else {
			x -= 1;
		}
	}
	cout << x;

	return 0;
}