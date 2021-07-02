#include <iostream>
using namespace std;


int main() {
	string str;
	cin >> str;
	for (auto& sym : str) {
		if (sym == 'H') {
			cout << "YES";
			exit(0);
		}
		else if (sym == 'Q') {
			cout << "YES";
			exit(0);
		}
		else if (sym == '9') {
			cout << "YES";
			exit(0);
		}
	}

	cout << "NO";


	return 0;
}