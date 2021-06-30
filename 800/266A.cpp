#include <iostream>
using namespace std;

int main() {
	int _;
	cin >> _;
	string str;
	cin >> str;
	int counter = 0;
	for (int i = 0; i < str.size() - 1; i++) {
		if (str[i] == str[i + 1])
			counter++;
	}
	cout << counter;

	return 0;
}