#include <iostream>
using namespace std;

string to_lowercase(string str) {
	string lowercased = "";
	for (int i = 0; i < str.length(); i++) {
		int k;
		k = static_cast<int> (str[i]);
		if (k < 91) {
			lowercased += char(k+32);
		}
		else {
			lowercased += char(k);
		}
	}
	return lowercased;
}

int main() {
	string str;
	cin >> str;
	str = to_lowercase(str);
	string diff_str;
	cin >> diff_str;
	diff_str = to_lowercase(diff_str);
	if (str == diff_str)
		cout << 0;
	else {
		for (int i = 0; i < str.length(); i++) {
			int a, b;
			a = static_cast<int> (str[i]);
			b = static_cast<int> (diff_str[i]);
			if (a == b) {
				continue;
			}
			else if (a > b) {
				cout << 1;
				break;
			}
			else if (b > a) {
				cout << -1;
				break;
			}

		}
	}

	return 0;
}