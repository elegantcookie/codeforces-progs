#include <iostream>
#include <vector>
using namespace std;

int main() {
	int numbers_amount;
	cin >> numbers_amount;
	vector<int> nums_array(numbers_amount);
	int sums[2] = { 0 };
	for (int i = 0; i < numbers_amount; i++) {
		cin >> nums_array[i];
	}
	if (numbers_amount == 1)
		cout << nums_array[0] << " " << "0";
	else {
		int from_left = 0, from_right = 0, moves = from_left + from_right;
		while (moves + 1 != numbers_amount) {
			moves = from_left + from_right;
			if (nums_array[from_left] >= nums_array[numbers_amount - from_right - 1]) {
				sums[moves % 2] += nums_array[from_left];
				from_left++;
			}
			else if (nums_array[from_left] < nums_array[numbers_amount - from_right - 1]) {
				sums[moves % 2] += nums_array[numbers_amount - from_right - 1];
				from_right++;
			}
		}

		cout << sums[0] << " " << sums[1] << endl;
	}
	return 0;
}