#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	int n, k = 1, m = 0;
	n = str.length();
	for (int i = 0; i < n-1; i++) {
		if (str[i] == str[i + 1]) {
			k++;
			if (m < k)
				m = k;
		}
		else {
			if (m < k)
				m = k;
			k = 1;
		}
	}

	if (m >= 7)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}