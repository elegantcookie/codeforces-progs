#include <iostream>
using namespace std;

bool is_rev(string str, string rev) {
	int l, r;
	l = str.length();
	r = rev.length();
	if (l == r) {
		for (int i = 0; i < l; i++) {
			if (str[i] != rev[l - i - 1])
				return false;
		}
		return true;
	}
	else
		return false;
}


int main() {
	string str, rev;
	cin >> str >> rev;
	if (is_rev(str, rev) == 1)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}