#include <iostream>
#include <string>
using namespace std;

string to_case(string _string, bool _case) {
	string _str = "";
	if (_case == true) {	// to_uppercase
		for (int i = 0; i < _string.length(); i++) {
			if (static_cast<int> (_string[i]) > 90)
				_str += char((static_cast<int> (_string[i]) - 32));
			else
				_str += _string[i];
		}
	}
	else {					// to_lowercase
		for (int i = 0; i < _string.length(); i++) {
			if (static_cast<int> (_string[i]) < 91)
				_str += char((static_cast<int> (_string[i]) + 32));
			else
				_str += _string[i];
		}
	}
	return _str;
}


int main() {
	int lowercase_counter = 0;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (static_cast<int> (str[i]) > 90)
			lowercase_counter++;
	}
	if (lowercase_counter >= str.length() - lowercase_counter)
		cout << to_case(str, false);
	else
		cout << to_case(str, true);

		

	return 0;
}