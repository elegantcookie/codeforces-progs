#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int danik = 0;
	for (int i = 0; i < n; i++) {
		char x;
		cin >> x;
		if (x == 'D')
			danik++;
	}
	int anton = n - danik;
	if (anton == danik)
		cout << "Friendship";
	else if (anton > danik)
		cout << "Anton";
	else if (danik > anton)
		cout << "Danik";

	return 0;
}