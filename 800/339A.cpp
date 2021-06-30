#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	string str;
	cin >> str;
	int n = str.length();
	vector<char> a;
	for (auto& symbol: str) {
		if (symbol == '+')
			continue;
		else
			a.push_back(symbol);
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < a.size()-1; i++)
		cout << a[i] << '+';
	cout << a[a.size() - 1];
	return 0;
}