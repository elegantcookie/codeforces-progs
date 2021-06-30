#include <iostream>
using namespace std;

int main() {
	string num;
	cin >> num;
	int k = 0;
	for (auto& sym : num) {
		if (sym == '4' or sym == '7') {
			k++;
		}
	}
	if (k == 4 or k == 7)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}