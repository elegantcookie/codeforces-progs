#include <iostream>
using namespace std;

int main() {
	int _, k;
	cin >> _ >> k;
	int count = 0;
	int kBall;
	for (int i = 1; i <= _; i++) {
		int currNum;
		cin >> currNum;
		if (currNum <= 0) {
			continue;
		}
		else if (i < k) {
			count++;
		}
		else if (i == k) {
			kBall = currNum;
			count++;
		}
		else if ((i > k) and (currNum == kBall)) {
			count++;
		}
		cout << kBall << " " << currNum << endl;
		
	}

	cout << count;

	return 0;
}