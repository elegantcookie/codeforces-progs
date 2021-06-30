#include <iostream>
using namespace std;

bool in_word(char s, string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == s)
			return true;
	}
	return false;
}

int main() {
	string str, alph = "";
	cin >> str;
	int k = 0;
	for (int i = 0; i < str.length(); i++) {
		if (in_word(str[i], alph))
			continue;
		else
			alph += str[i];
	}
	if (alph.size() % 2 == 1)
		cout << "IGNORE HIM!";
	else
		cout << "CHAT WITH HER!";

	return 0;
}