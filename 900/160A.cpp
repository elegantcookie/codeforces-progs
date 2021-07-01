#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, k = 0, mx = 0, s = 0;	
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {				// just filling an array and finding a sum of its elements
		int x;
		cin >> x;
		a[i] = x;
		s += x;
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n / 2; i++) {			// reversing an array to ease the calculation of coins' amount
		int tmp;
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}   

	int seq = a[0];								// there we add a coin to the sequence and if it's more than the difference between the sum of all nums and the sum of current sequence  
	for (int i = 1; i <= n; i++) {				// so, whether the current sequence fits the requirements, we stop the cycle.
		if (seq > s - seq) {
		//	cout << i << " " << seq << " > " << s - seq << endl;
			k = i;
			break;
		}
		else {
		//	cout << i << " " << seq << " <= " << s - seq << endl;
			seq += a[i];
		}
	}

	cout << k;

	return 0;
}