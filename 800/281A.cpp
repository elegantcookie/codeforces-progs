#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;

	cout << char(toupper(input[0]));
	for (int i = 1; i < input.size(); i++)
		cout << input[i];

	return 0;
}
